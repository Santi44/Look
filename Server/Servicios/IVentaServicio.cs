using Lookeate.Shared;

namespace Lookeate.Server.Servicios
{
    public interface IVentaServicio
    {
        Task<ResponseDTO<VentaDTO>> Registrar(VentaDTO modelo);
    }
}
