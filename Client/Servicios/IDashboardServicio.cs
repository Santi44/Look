using Lookeate.Shared;

namespace Lookeate.Client.Servicios
{
    public interface IDashboardServicio
    {
        Task<ResponseDTO<DashBoardDTO>> Resumen();
    }
}
