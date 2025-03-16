using Lookeate.Server.Repositorios;
using Lookeate.Server.Utilidades;
using Lookeate.Shared;
using Microsoft.EntityFrameworkCore;
using System.Drawing;

namespace Lookeate.Server.Servicios
{
   
    public class PersonaServicio : IPersonaServicio
    {
        private readonly IGenericoRepositorio<Persona> _personaRepositorio;
        private readonly IMapper _mapper;
        private readonly FileLogService _logger;

        public PersonaServicio(IGenericoRepositorio<Persona> personaRepositorio, IMapper mapper, FileLogService logger)
        {
            _personaRepositorio = personaRepositorio;
            _mapper = mapper;
            _logger = logger;
        }
        public async Task<ResponseDTO<PersonaDTO>> Obtener(int id)
        {

            ResponseDTO<PersonaDTO> response = new ResponseDTO<PersonaDTO>()
            {
                Mensaje = "Ok",
                EsCorrecto = true
            };

            try
            {
                var consulta = _personaRepositorio.Consultar(p => p.IdPersona == id);
                var fromDbModelo = await consulta.FirstOrDefaultAsync();

                if (fromDbModelo != null)
                    response.Resultado = _mapper.Map<PersonaDTO>(fromDbModelo);
                else
                {
                    response.EsCorrecto = false;
                    response.Mensaje = "No se encontraron coincidencias";
                }

            }
            catch (Exception ex)
            {
                response.EsCorrecto = false;
                response.Mensaje = ex.Message;
                response.Resultado = null;
            }
            return response;
        }
        public async Task<ResponseDTO<List<PersonaDTO>>> Lista(string Rol, string Valor)
        {
            ResponseDTO<List<PersonaDTO>> response = new ResponseDTO<List<PersonaDTO>>()
            {
                Mensaje = "Ok",
                EsCorrecto = true
            };

            try
            {
                var consulta = _personaRepositorio.Consultar(p =>
                    p.Rol == Rol &&
                    string.Concat(p.NombreCompleto.ToLower(), p.Correo.ToLower()).Contains(Valor.ToLower())
                );

                List<PersonaDTO> lista = _mapper.Map<List<PersonaDTO>>(await consulta.ToListAsync());
                response.Resultado = lista;
            }
            catch (Exception ex)
            {
                response.EsCorrecto = false;
                response.Mensaje = ex.Message;
                response.Resultado = null;
            }
            return response;
        }

        public async Task<ResponseDTO<PersonaDTO>> Crear(PersonaDTO modelo)
        {
            ResponseDTO<PersonaDTO> response = new ResponseDTO<PersonaDTO>()
            {
                Mensaje = "Ok",
                EsCorrecto = true
            };

            try
            {
                var dbModelo = _mapper.Map<Persona>(modelo);
                var rspModelo = await _personaRepositorio.Crear(dbModelo);

                if (rspModelo.IdPersona != 0)
                    response.Resultado = _mapper.Map<PersonaDTO>(rspModelo);
                else
                {
                    response.EsCorrecto = false;
                    response.Mensaje = "No se pudo crear";
                }

            }
            catch (Exception ex)
            {
                response.EsCorrecto = false;
                response.Mensaje = ex.Message;
                response.Resultado = null;
            }

            return response;

        }

        public async Task<ResponseDTO<bool>> Editar(PersonaDTO modelo)
        {
            ResponseDTO<bool> response = new ResponseDTO<bool>()
            {
                Mensaje = "Ok",
                EsCorrecto = true
            };

            try
            {
                var consulta = _personaRepositorio.Consultar(p => p.IdPersona == modelo.IdPersona);
                var fromDbModelo = await consulta.FirstOrDefaultAsync();

                if (fromDbModelo != null)
                {
                    fromDbModelo.NombreCompleto = modelo.NombreCompleto;
                    fromDbModelo.Correo = modelo.Correo;
                    fromDbModelo.Clave = modelo.Clave;

                    var respuesta = await _personaRepositorio.Editar(fromDbModelo);

                    if (!respuesta)
                    {
                        response.EsCorrecto = false;
                        response.Mensaje = "No se pudo editar";
                    }
                }
                else
                {
                    response.EsCorrecto = false;
                    response.Mensaje = "No se encontraron resultados";
                }

            }
            catch (Exception ex)
            {
                response.EsCorrecto = false;
                response.Mensaje = ex.Message;
                response.Resultado = false;
            }

            return response;
        }

        public async Task<ResponseDTO<bool>> Eliminar(int id)
        {
            ResponseDTO<bool> response = new ResponseDTO<bool>()
            {
                Mensaje = "Ok",
                EsCorrecto = true
            };

            try
            {
                var consulta = _personaRepositorio.Consultar(p => p.IdPersona == id);
                var fromDbModelo = await consulta.FirstOrDefaultAsync();

                if (fromDbModelo != null)
                {
                    var respuesta = await _personaRepositorio.Eliminar(fromDbModelo);

                    if (!respuesta)
                    {
                        response.EsCorrecto = false;
                        response.Mensaje = "No se pudo eliminar";
                    }
                }
                else
                {
                    response.EsCorrecto = false;
                    response.Mensaje = "No se encontraron resultados";
                }

            }
            catch (Exception ex)
            {
                response.EsCorrecto = false;
                response.Mensaje = ex.Message;
                response.Resultado = false;
            }

            return response;
        }

        /*
         * Patron Result
         * Librerias que usan el patron: ErrorOr (https://github.com/amantinband/error-or)
         * */
        public async Task<ResponseDTO<SesionDTO>> Autorizacion(LoginDTO modelo)
        {
            try
            {
                var fromDbModelo = await _personaRepositorio
                    .Consultar(p => p.Correo == modelo.Correo && p.Clave == modelo.Clave)
                    .FirstOrDefaultAsync();

                if (fromDbModelo is null)
                    return ResponseDTO<SesionDTO>.Error("No se encontraron coincidencias");

                var logMessage = $"Se ha logueado el usuario {fromDbModelo.NombreCompleto} con email {fromDbModelo.Correo}";
                await _logger.RegistrarLogAsync(LogType.Information, logMessage);

                return ResponseDTO<SesionDTO>.Success(_mapper.Map<SesionDTO>(fromDbModelo));

            }
            catch (Exception ex)
            {
                return ResponseDTO<SesionDTO>.Error(ex.Message);
            }
        }
    }
}
