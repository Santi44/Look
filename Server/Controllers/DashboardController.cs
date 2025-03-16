
using Lookeate.Server.Servicios;
using Microsoft.AspNetCore.Mvc;

namespace Lookeate.Server.Controllers
{
    [Route("api/[controller]")]
    [ApiController]
    public class DashboardController : ControllerBase
    {
        private readonly IDashboardServicio _dashboardServicio;
        public DashboardController(IDashboardServicio dashboardServicio)
        {
            _dashboardServicio = dashboardServicio;
        }

        [HttpGet("Resumen")]
        public ActionResult Resumen()
        {
            return Ok(_dashboardServicio.Resumen());
        }
    }
}
