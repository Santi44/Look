using SERVICIOS.UseCases.GetPaymentData;

namespace SERVICIOS.Abstractions.UseCases;

public interface IPaymentDataUseCase
{
    Task<GetPaymentDataResponse> GetPaymentData(GetPaymentDataRequest request);
}