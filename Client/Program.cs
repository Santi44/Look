using Lookeate.Client;
using Lookeate.Client.Extensiones;
using Lookeate.Client.Servicios;
using Blazored.LocalStorage;
using Blazored.SessionStorage;
using Blazored.Toast;
using CurrieTechnologies.Razor.SweetAlert2;
using Microsoft.AspNetCore.Components.Authorization;
using Microsoft.AspNetCore.Components.Web;
using Microsoft.AspNetCore.Components.WebAssembly.Hosting;
using Microsoft.JSInterop;
using System.Globalization;
using Lookeate.Client.Abstractions;


var builder = WebAssemblyHostBuilder.CreateDefault(args);

builder.RootComponents.Add<App>("#app");
builder.RootComponents.Add<HeadOutlet>("head::after");

// Agrega tus servicios necesarios aqu�
builder.Services.AddScoped<IPersonaServicio, PersonaServicio>();
builder.Services.AddScoped<ICategoriaServicio, CategoriaServicio>();
builder.Services.AddScoped<IProductoServicio, ProductoServicio>();
builder.Services.AddScoped<ICarritoServicio, CarritoServicio>();
builder.Services.AddScoped<IVentaServicio, VentaServicio>();
builder.Services.AddScoped<IDashboardServicio, DashboardServicio>();
builder.Services.AddScoped<IPaymentService, PaymentService>();

builder.Services.AddBlazoredToast();
builder.Services.AddSweetAlert2();
builder.Services.AddBlazoredLocalStorage();
builder.Services.AddBlazoredSessionStorage();
builder.Services.AddScoped<AuthenticationStateProvider, AutenticacionExtension>();
builder.Services.AddAuthorizationCore();
builder.Services.AddLocalization();

builder.Services.AddScoped(sp => new HttpClient { BaseAddress = new Uri(builder.HostEnvironment.BaseAddress) });

var host = builder.Build();

var js = host.Services.GetRequiredService<IJSRuntime>();

try
{
    // Llama a 'cultura.get' para obtener la cultura guardada en localStorage
    var cultura = await js.InvokeAsync<string>("cultura.get");

    if (string.IsNullOrEmpty(cultura))
    {
        // Cultura predeterminada si no se encuentra una guardada
        var culturaPorDefecto = new CultureInfo("en-US");
        CultureInfo.DefaultThreadCurrentCulture = culturaPorDefecto;
        CultureInfo.DefaultThreadCurrentUICulture = culturaPorDefecto;
    }
    else
    {
        // Configuraci�n de cultura personalizada
        var culturaUsuario = new CultureInfo(cultura);
        CultureInfo.DefaultThreadCurrentCulture = culturaUsuario;
        CultureInfo.DefaultThreadCurrentUICulture = culturaUsuario;
    }
}
catch (JSException ex)
{
    Console.WriteLine("Error al obtener la cultura desde JavaScript: " + ex.Message);
    // Configura una cultura predeterminada en caso de error
    var culturaPorDefecto = new CultureInfo("en-US");
    CultureInfo.DefaultThreadCurrentCulture = culturaPorDefecto;
    CultureInfo.DefaultThreadCurrentUICulture = culturaPorDefecto;
}

await host.RunAsync();
