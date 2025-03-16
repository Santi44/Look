using System.Linq.Expressions;
using Microsoft.EntityFrameworkCore;

namespace Lookeate.Server.Repositorios;

public class ProductRepository : GenericoRepositorio<Producto>, IProductRepository 
{
    private readonly DbBlazorContext _context;
    
    public ProductRepository(DbBlazorContext dbContext) : base(dbContext)
    {
        _context = dbContext;
    }

    public async Task<IEnumerable<Producto>> GetProductsByIdAsync(int[] ids)
    {
        return await _context.Productos
            .Where(p => ids.Contains(p.IdProducto))
            .ToListAsync();
    }
}