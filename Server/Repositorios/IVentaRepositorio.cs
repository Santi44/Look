using Lookeate.Server.Modelos;

namespace Lookeate.Server.Repositorios
{
    public interface IVentaRepositorio : IGenericoRepositorio<Venta> 
    {
      Task<Venta> Registrar(Venta modelo);
    }
}
