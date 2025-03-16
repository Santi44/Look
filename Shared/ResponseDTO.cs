using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lookeate.Shared
{
    public class ResponseDTO<T>
    {
        public T? Resultado { get; set; }
        public bool EsCorrecto { get; set; }

        public bool? status { get; set; }
        public string? msg { get; set; }
        public T? value { get; set; }
        public string? Mensaje { get; set; }

        public ResponseDTO(){}
        public ResponseDTO(T? resultado, bool esCorrecto, string? mensaje)
        {
            Resultado = resultado;
            EsCorrecto = esCorrecto;
            Mensaje = mensaje;
        }
        
        public static ResponseDTO<T> Success(T resultado, string mensaje)
            => new(resultado, true, null);
        
        public static ResponseDTO<T> Success(T resultado)
            => new(resultado, true, null);
        
        public static ResponseDTO<T> Error(string mensaje)
            => new(default, false, mensaje);
    }
}
