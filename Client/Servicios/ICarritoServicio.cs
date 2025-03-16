using Lookeate.Shared;

namespace Lookeate.Client.Servicios
{
    public interface ICarritoServicio
    {
        event Action ActualizarVista;
       

        int CantidadProductos();
        Task AgregarCarrito(CarritoDTO modelo);
        Task EliminarCarrito(int idProducto);
        Task<List<CarritoDTO>> DevolverCarrito();
        Task LimpiarCarrito();
       
    }
}
