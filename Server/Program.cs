
global using Lookeate.Server.Modelos;
global using AutoMapper;
using Lookeate.Server;
using Microsoft.EntityFrameworkCore;
using Lookeate.Server.Utilidades;
using Lookeate.Server.Repositorios;
using Lookeate.Server.Servicios;
using SERVICIOS.Abstractions;
using SERVICIOS.Abstractions.UseCases;
using SERVICIOS.UseCases.GetPaymentData;

var builder = WebApplication.CreateBuilder(args);

// Add services to the container.

builder.Services.AddControllersWithViews().AddRazorRuntimeCompilation();
builder.Services.AddRazorPages();

builder.Services.AddDbContext<DbBlazorContext>(op =>
{
    op.UseSqlServer(builder.Configuration.GetConnectionString("CadenaSQL"));
 
});

builder.Services.AddAutoMapper(typeof(AutoMapperProfile));


builder.Services.AddTransient(typeof(IGenericoRepositorio<>), typeof(GenericoRepositorio<>));

builder.Services.AddScoped<IVentaRepositorio, VentaRepositorio>();
builder.Services.AddScoped<IProductRepository, ProductRepository>();
builder.Services.AddScoped<IDetailSaleRepository, DetailSaleRepository>();

builder.Services.AddScoped<IPersonaServicio, PersonaServicio>();
builder.Services.AddScoped<ICategoriaServicio, CategoriaServicio>();
builder.Services.AddScoped<IProductoServicio, ProductoServicio>();
builder.Services.AddScoped<IVentaServicio, VentaServicio>();
builder.Services.AddScoped<IDashboardServicio, DashboardServicio>();
builder.Services.AddScoped<IMercadoPagoService, MercadoPagoService>();
builder.Services.AddScoped<FileLogService>();
builder.Services.AddScoped<IPaymentDataUseCase, GetPaymentDataUseCase>();


var app = builder.Build();

// Configure the HTTP request pipeline.
if (app.Environment.IsDevelopment())
{
    app.UseWebAssemblyDebugging();
}
else
{
    app.UseExceptionHandler("/Error");
}

app.UseBlazorFrameworkFiles();
app.UseStaticFiles();

app.UseRouting();


app.MapRazorPages();
app.MapControllers();
app.MapFallbackToFile("index.html");

app.Run();
