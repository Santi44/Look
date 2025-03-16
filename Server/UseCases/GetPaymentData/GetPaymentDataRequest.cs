using Lookeate.Shared.Request;

namespace SERVICIOS.UseCases.GetPaymentData;

public class GetPaymentDataRequest
{
    public ICollection<CartItemDto> Items { get; set; }
}