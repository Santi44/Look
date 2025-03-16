//public class CD_RolService
//{
//    private readonly HttpClient _httpClient;

//    public CD_RolService(HttpClient httpClient)
//    {
//        _httpClient = httpClient;
//    }

//    public async Task<List<Rol>> Listar()
//    {
//        return await _httpClient.GetFromJsonAsync<List<Rol>>("api/rol");
//    }

//    public async Task<bool> Registrar(Rol rol)
//    {
//        var response = await _httpClient.PostAsJsonAsync("api/rol", rol);
//        return response.IsSuccessStatusCode;
//    }

//    public async Task<bool> Editar(Rol rol)
//    {
//        var response = await _httpClient.PutAsJsonAsync($"api/rol/{rol.IdRol}", rol);
//        return response.IsSuccessStatusCode;
//    }

//    public async Task<bool> Eliminar(int idRol)
//    {
//        var response = await _httpClient.DeleteAsync($"api/rol/{idRol}");
//        return response.IsSuccessStatusCode;
//    }
//}
