using Lookeate.Server.Repositorios;
using MercadoPago.Client.Preference;
using MercadoPago.Config;
using SERVICIOS.Abstractions;
using SERVICIOS.Dto;
using static System.Net.WebRequestMethods;

namespace Lookeate.Server.Servicios;

public class MercadoPagoService : IMercadoPagoService
{
    private readonly string _accessToken;
    private readonly string _publicApiKey;

    public MercadoPagoService(IConfiguration configuration)
    {
        _accessToken = configuration["MercadoPago:AccessToken"] ?? throw new InvalidDataException("No hay accessToken para mercadopago");
        _publicApiKey = configuration["MercadoPago:PublicApiKey"] ?? throw new InvalidDataException("No hay publicApiKey para mercadopago");
    }
    
    public async Task<MercadoPagoDTO> GetData(IEnumerable<ProductItemDTO> products)
    {
        MercadoPagoConfig.AccessToken = _accessToken ?? throw new InvalidDataException("No hay accessToken para mercadopago");

        var preferencesItems = products.Select(ToPreferenceItemRequest).ToList();
        
        var request = new PreferenceRequest
        {
            Items = preferencesItems,
            BackUrls = new PreferenceBackUrlsRequest
            {
                Success = "http://localhost:5242/Fin",
                Failure = "http://localhost:5242/api/WebhookController/CallBack",
                Pending = "http://localhost:5242/api/WebhookController/CallBack",
            },
            AutoReturn = "approved",

             NotificationUrl = "https://8100-2803-9800-90a3-82a4-7084-1cec-2c2f-ce8.ngrok-free.app"
        };

        var client = new PreferenceClient();
        
        var preference = await client.CreateAsync(request);

        return new MercadoPagoDTO(preference, _publicApiKey);
    }

    private PreferenceItemRequest ToPreferenceItemRequest(ProductItemDTO item)
    {
        return new PreferenceItemRequest
        {
            Title = item.Producto.Nombre,
            Quantity = item.Quantity,
            Description = item.Producto.Descripcion,
            CurrencyId = "ARS",
            UnitPrice = item.Producto.Precio
        };
    }
}