using MercadoPago.Resource.Preference;

namespace SERVICIOS.Dto;

public class MercadoPagoDTO
{
    public Preference Preference { get; private set; }
    public string PublicKey {get; private set;}

    public MercadoPagoDTO(Preference preference, string publicKey)
    {
        Preference = preference;
        PublicKey = publicKey;
    }
}