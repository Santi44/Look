namespace Lookeate.Server.Repositorios;

public interface IDetailSaleRepository
{
    Task<IEnumerable<DetalleVenta>> GetDetailSalesByIdAsync(int[] ids);
}