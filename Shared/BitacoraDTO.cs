using Microsoft.VisualBasic;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;
using System.Runtime.ConstrainedExecution;
using System.Text;
using System.Threading.Tasks;

namespace Lookeate.Shared
{
public class Bitacora
    {
        public int Id { get; set; }
        public DateTime FechaHora { get; set; }
        public string Usuario { get; set; } = null!;
        public string Accion { get; set; }= null!;
        public string Descripcion { get; set; } = null!;
    }
}
