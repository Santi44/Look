using Microsoft.EntityFrameworkCore;

namespace Lookeate.Server.Repositorios;

public class DetailSaleRepository : GenericoRepositorio<DetalleVenta>, IDetailSaleRepository
{
    private readonly DbBlazorContext _context;
    
    public DetailSaleRepository(DbBlazorContext dbContext) : base(dbContext)
    {
        _context = dbContext;
    }

    public async Task<IEnumerable<DetalleVenta>> GetDetailSalesByIdAsync(int[] ids)
    {
        return await _context.DetalleVenta
            .Where(p => ids.Contains(p.IdDetalleVenta))
            .ToListAsync();
    }
}