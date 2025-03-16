using MercadoPago.Resource.Preference;
using SERVICIOS.Dto;

namespace SERVICIOS.Abstractions;

public interface IMercadoPagoService
{
    Task<MercadoPagoDTO> GetData(IEnumerable<ProductItemDTO> products);
}