// Materia: Programación I, Paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha creación: 18/09/2024
// Número de ejercicio: 9
// Problema planteado: Arreglo de edades
#include <iostream>
#include <vector>
#include <cmath> 

int main() 
{
    std::vector<int> edades;
    int edad;
    std::cout << "Ingrese las edades (introduzca -1 para terminar):\n";
    while (true) {
        std::cin >> edad;
        if (edad == -1) 
        {
            break; 
        }
        edades.push_back(edad);  
    }
    if (edades.empty()) 
    {
        std::cout << "No se ingresaron edades." << std::endl;
        return 0;
    }
    double suma = 0;
    for (int e : edades) 
    {
        suma += e;
    }
    double media = suma / edades.size();
    double sumaDesviaciones = 0;
    for (int e : edades) 
    {
        sumaDesviaciones += std::pow(e - media, 2);
    }
    double desviacionTipica = std::sqrt(sumaDesviaciones / edades.size());
    std::cout << "La media de las edades es: " << media << std::endl;
    std::cout << "La desviación típica de las edades es: " << desviacionTipica << std::endl;
    return 0;
}