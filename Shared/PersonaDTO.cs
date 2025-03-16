using System.ComponentModel.DataAnnotations;

namespace Lookeate.Shared
{

    public class PersonaDTO
    {  
        
        public int IdPersona { get; set; }
        [Required(ErrorMessage = "Ingrese nombre completo")]
        public string? NombreCompleto { get; set; }

        [Required(ErrorMessage = "Ingrese correo")]
        public string? Correo { get; set; }
        [Required(ErrorMessage = "Ingrese contraseña")]
        public string? Clave { get; set; }
        [Required(ErrorMessage = "Ingrese confirmar contraseña")]
        public string? ConfirmarClave { get; set; }

        public string? Rol { get; set; }
    }
}
