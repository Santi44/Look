namespace Lookeate.Server.Repositorios;

public interface IProductRepository
{
    Task<IEnumerable<Producto>> GetProductsByIdAsync(int[] ids);
}