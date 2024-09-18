// Materia: Programación I, Paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha creación: 18/09/2024
// Número de ejercicio: 11
// Problema planteado: Ventas
#include <iostream>
#include <vector>
#include <string>

int main() 
{
    const std::vector<std::string> meses = {"Ene", "Feb", "Mar", "Abr", "May", "Jun", "Jul", "Ago", "Sep", "Oct", "Nov", "Dic"};
    std::vector<double> ventas(12);
    std::cout << "Ingrese las ventas mensuales (12 meses):\n";
    for (int i = 0; i < 12; ++i) 
    {
        std::cout << meses[i] << ": ";
        std::cin >> ventas[i];
    }
    double ventasMaximas = ventas[0];
    for (double venta : ventas) 
    {
        if (venta > ventasMaximas) 
        {
            ventasMaximas = venta;
        }
    }
    std::cout << "\nMes(es) con las ventas máximas de " << ventasMaximas << ":\n";
    for (int i = 0; i < 12; ++i) 
    {
        if (ventas[i] == ventasMaximas) 
        {
            std::cout << meses[i] << " ";
        }
    }
    std::cout << std::endl;
    double totalVentas = 0;
    for (double venta : ventas) 
    {
        totalVentas += venta;
    }
    std::cout << "\nEl total de las ventas es: " << totalVentas << std::endl;
    return 0;
}