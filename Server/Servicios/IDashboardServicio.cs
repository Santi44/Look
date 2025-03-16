using Lookeate.Shared;

namespace Lookeate.Server.Servicios
{
    public interface IDashboardServicio
    {
        ResponseDTO<DashBoardDTO> Resumen();
    }
}
