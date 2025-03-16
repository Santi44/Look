using Lookeate.Shared;
using Lookeate.Shared.Request;
using SERVICIOS.Dto;

namespace Lookeate.Client.Abstractions;

public interface IPaymentService
{
    Task<ResponseDTO<MercadoPagoDTO>> GetMercadoPago(IEnumerable<CartItemDto> items);
}