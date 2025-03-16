using Lookeate.Server.Repositorios;
using SERVICIOS.Abstractions;
using SERVICIOS.Abstractions.UseCases;
using SERVICIOS.Dto;

namespace SERVICIOS.UseCases.GetPaymentData;

public class GetPaymentDataUseCase : IPaymentDataUseCase
{
    private readonly IMercadoPagoService _mercadoPagoService;
    private readonly IProductRepository _productRepository;

    public GetPaymentDataUseCase(IMercadoPagoService mercadoPagoService, IProductRepository productRepository)
    {
        _mercadoPagoService = mercadoPagoService;
        _productRepository = productRepository;
    }
    
    public async Task<GetPaymentDataResponse> GetPaymentData(GetPaymentDataRequest request)
    {
        if (request.Items is null || request.Items.Count() == 0)
            throw new ArgumentException("Los items son requeridos");
        
        var productIds = request.Items.Select(item => item.ProductId).ToArray();
        var products = await _productRepository.GetProductsByIdAsync(productIds);
        
        var productItems = request.Items
            .Select(i => new ProductItemDTO
            {
                Producto = products.First(p => p.IdProducto == i.ProductId),
                Quantity = i.Quantity,
            })
            .ToList(); 
        
        return new GetPaymentDataResponse
        {
            MercadoPagoDto = await _mercadoPagoService.GetData(productItems)
        };
    }
}