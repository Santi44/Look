namespace Lookeate.Server
{
    public class LogEntry
    {
        public DateTime FechaHora { get; set; }
        public string? Tipo { get; set; }
        public string? Usuario { get; set; }
        public string? Mensaje { get; set; }
    }
}
