// Materia: Programación I, Paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha creación: 18/09/2024
// Número de ejercicio: 8
// Problema planteado: Metrica de 6 minerales
#include <iostream>
#include <string>
#include <algorithm> 
#include <vector>

struct Mineral 
{
    std::string nombre;
    double produccion;
};
void buscarProduccion(const std::vector<Mineral>& minerales, const std::string& nombre) 
{
    bool encontrado = false;
    for (const auto& mineral : minerales) 
    {
        if (mineral.nombre == nombre) 
        {
            std::cout << "Producción de " << nombre << ": " << mineral.produccion << " TM" << std::endl;
            encontrado = true;
            break;
        }
    }
    if (!encontrado) 
    {
        std::cout << "Mineral no encontrado." << std::endl;
    }
}
void ordenarYMostrar(std::vector<Mineral>& minerales) 
{
    std::sort(minerales.begin(), minerales.end(), [](const Mineral& a, const Mineral& b) 
    {
        return a.produccion > b.produccion;
    });
    std::cout << "\nMineral   Producción (TM)\n";
    std::cout << "-------------------------\n";
    for (const auto& mineral : minerales) 
    {
        std::cout << mineral.nombre << "   " << mineral.produccion << std::endl;
    }
}
int main() 
{
    const std::vector<Mineral> minerales = 
    {
        {"SN", 998.000}, 
        {"SB", 876.500}, 
        {"AU", 786.670}, 
        {"PT", 636.143}, 
        {"AG", 135.567}, 
        {"CU", 109.412}
    };
    std::vector<Mineral> mineralesOrdenados = minerales;
    std::string nombreMineral;
    std::cout << "Ingrese el nombre del mineral para buscar su producción: ";
    std::cin >> nombreMineral;
    buscarProduccion(minerales, nombreMineral);
    ordenarYMostrar(mineralesOrdenados);
    return 0;
}