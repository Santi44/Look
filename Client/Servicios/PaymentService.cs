using System.Net.Http.Json;
using Lookeate.Client.Abstractions;
using Lookeate.Shared;
using Lookeate.Shared.Request;
using SERVICIOS.Dto;

namespace Lookeate.Client.Servicios;

public class PaymentService : IPaymentService
{
    private readonly HttpClient _httpClient;

    public PaymentService(HttpClient httpClient)
    {
        _httpClient = httpClient;
    }
    
    public async Task<ResponseDTO<MercadoPagoDTO>> GetMercadoPago(IEnumerable<CartItemDto> items)
    {
        var request = new CartDTO
        {
            Items = items
        };
        
        var response = await _httpClient.PostAsJsonAsync("/api/Payment/Data", request);
        
        return (await response.Content.ReadFromJsonAsync<ResponseDTO<MercadoPagoDTO>>())!;
    }
}