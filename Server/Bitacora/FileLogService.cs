namespace Lookeate.Server
{
    public class FileLogService
    {
        private readonly string _logFilePath;

        public FileLogService(IConfiguration configuration)
        {
            // El archivo de log se define desde la configuración (appsettings.json)
            _logFilePath = configuration["Logging:FilePath"] ?? "logs/bitacora.txt";

            // Asegurarse de que el directorio existe
            var logDirectory = Path.GetDirectoryName(_logFilePath);

            if (!string.IsNullOrEmpty(logDirectory) && !Directory.Exists(logDirectory))
            {
                Directory.CreateDirectory(logDirectory);
            }

        }

        public async Task RegistrarLogAsync(LogType tipo, string mensaje)
        {
            var logMessage = $"{DateTime.Now:yyyy-MM-dd HH:mm:ss} | {tipo.ToString()} | {mensaje}";
            await File.AppendAllTextAsync(_logFilePath, logMessage + Environment.NewLine);
        }

        public async Task<List<LogEntry>> ObtenerLogsAsync(DateTime? desde, DateTime? hasta, string? tipo, string? usuario)
        {
            var logs = new List<LogEntry>();

            // Verificar si el archivo de bitácora existe
            if (!File.Exists(_logFilePath))
            {
                Console.WriteLine("El archivo de bitácora no existe en la ruta especificada.");
                return logs;
            }

            // Leer todas las líneas del archivo de bitácora
            var logLines = await File.ReadAllLinesAsync(_logFilePath);
            Console.WriteLine($"Total de líneas leídas del archivo: {logLines.Length}");

            foreach (var line in logLines)
            {
                try
                {
                    // Verificar si la línea está vacía o tiene un formato incorrecto
                    if (string.IsNullOrWhiteSpace(line))
                    {
                        Console.WriteLine("Línea vacía o solo contiene espacios, ignorando.");
                        continue;
                    }

                    // Partir la línea en partes separadas por '|'
                    var parts = line.Split('|');
                    if (parts.Length < 3)
                    {
                        Console.WriteLine($"Línea con formato incorrecto: {line}");
                        continue;
                    }

                    // Intentar analizar la fecha
                    if (!DateTime.TryParse(parts[0].Trim(), out var fecha))
                    {
                        Console.WriteLine($"No se pudo analizar la fecha en la línea: {line}");
                        continue;
                    }

                    var logTipo = parts[1].Trim();
                    var logMensaje = parts[2].Trim();

                    // Mostrar en la consola la línea procesada (para depuración)
                    Console.WriteLine($"Línea procesada: {line}");
                    Console.WriteLine($"Fecha: {fecha}, Tipo: {logTipo}, Mensaje: {logMensaje}");

                    // Filtrar según los parámetros proporcionados
                    if ((desde == null || fecha >= desde) &&
                        (hasta == null || fecha <= hasta) &&
                        (string.IsNullOrEmpty(tipo) || logTipo.Equals(tipo, StringComparison.OrdinalIgnoreCase)))
                    {
                        logs.Add(new LogEntry
                        {
                            FechaHora = fecha,
                            Tipo = logTipo,
                            Mensaje = logMensaje
                        });
                    }
                }
                catch (Exception ex)
                {
                    // Registrar el error en la consola para saber si alguna línea no se pudo procesar
                    Console.WriteLine($"Advertencia: No se pudo analizar la línea de log '{line}'. Error: {ex.Message}");
                }
            }

            Console.WriteLine($"Total de registros encontrados después de filtrar: {logs.Count}");
            return logs;
        }
    }
}