using Lookeate.Shared;
using Microsoft.AspNetCore.Mvc;
using SERVICIOS.Abstractions.UseCases;
using SERVICIOS.Dto;
using SERVICIOS.UseCases.GetPaymentData;

namespace Lookeate.Server.Controllers;

[Route("api/[controller]")]
[ApiController]
public class PaymentController : ControllerBase
{
    private readonly IPaymentDataUseCase _paymentDataUseCase;
    
    public PaymentController(IPaymentDataUseCase paymentDataUseCase)
    {
        _paymentDataUseCase = paymentDataUseCase;
    }
    
    [HttpPost("Data")]
    public async Task<ActionResult> Data([FromBody] GetPaymentDataRequest request)
    {
        var response = await _paymentDataUseCase.GetPaymentData(request);
        
        return Ok(new ResponseDTO<MercadoPagoDTO>()
        {
            Resultado = response.MercadoPagoDto
        });


    }
}