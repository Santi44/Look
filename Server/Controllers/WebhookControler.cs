using Lookeate.Server.Dto;
using Microsoft.AspNetCore.Mvc;

namespace Lookeate.Server.Controllers
{
    [Route("api/WebhookController")]
    [ApiController]
    public class WebhookController : ControllerBase
    {
        private readonly ILogger<WebhookController> _logger;
        private readonly IConfiguration _configuration;

        public WebhookController(ILogger<WebhookController> logger, IConfiguration configuration)
        {
            _logger = logger;
            _configuration = configuration;
        }

        // Método para manejar las notificaciones de MercadoPago
        [HttpGet("CallBack")]
        public async Task<IActionResult> Success([FromQuery] CallBackMp paymentResponse)
        {
            return new JsonResult(paymentResponse);  // Devuelve el objeto paymentResponse como JSON
        }

        [HttpGet("Failure")]
        public async Task<IActionResult> Failure([FromQuery] CallBackMp paymentResponse)
        {
            return new JsonResult(paymentResponse);  // Igual que Success, devuelve el objeto paymentResponse como JSON
        }

        //// Métodos de configuración de MercadoPago
        //private string obtenerAccessToken()
        //{
        //    var token = _configuration.GetValue<string>("MercadoPago:AccessToken");
        //    return token.ToString() ?? string.Empty;
        //}

        //private string obtenerPublicKey()
        //{
        //    var x = _configuration.GetValue<string>("MercadoPago:PublicKey");
        //    return x.ToString() ?? string.Empty;
        //}
    }
}
