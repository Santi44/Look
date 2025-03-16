namespace Lookeate.Shared.Request;

public class CartDTO
{
    public IEnumerable<CartItemDto> Items { get; set; }
}
public class CartItemDto
{
    public int ProductId { get; set; }
    public int Quantity { get; set; }
}