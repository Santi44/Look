using Microsoft.AspNetCore.Authorization;
using Microsoft.AspNetCore.Mvc;

namespace Lookeate.Server
{
    [AllowAnonymous]
    [ApiController]
    [Route("api/bitacora")]
    public class BitacoraController : ControllerBase
    {
        private readonly FileLogService _fileLogService;

        public BitacoraController(FileLogService fileLogService)
        {
            _fileLogService = fileLogService;
        }

        [HttpGet("Buscar")]
        public async Task<IActionResult> GetLogs([FromQuery] DateTime? desde, [FromQuery] DateTime? hasta, [FromQuery] string? tipo, [FromQuery] string? usuario)
        {
            try
            {
                // Validación simple: la fecha "desde" no puede ser mayor que "hasta"
                if (desde.HasValue && hasta.HasValue && desde > hasta)
                {
                    return BadRequest("La fecha 'desde' no puede ser posterior a la fecha 'hasta'.");
                }

                // Obtener los logs del servicio
                var logs = await _fileLogService.ObtenerLogsAsync(desde, hasta, tipo, usuario);

                // Verificar si hay logs para devolver
                if (logs == null)
                {
                    logs = new List<LogEntry>(); // Devuelve una lista vacía en lugar de un error 404
                }

                return Ok(logs);
            }
            catch (Exception ex)
            {
                // Registrar el error en el log del servidor
                Console.WriteLine($"Error al obtener los logs: {ex.Message}");
                return StatusCode(500, "Hubo un problema al procesar la solicitud. Por favor, intente más tarde.");
            }
        }
    }
}