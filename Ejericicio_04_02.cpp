// Materia: Programación I, Paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha creación: 18/09/2024
// Número de ejercicio: 2
// Problema planteado: Arreglo nombrado voltios
#include <iostream>
#include <vector>

int main() 
{
    std::vector<double> voltios = {11.95, 16.32, 12.15, 8.22, 15.98, 26.22, 13.54, 6.45, 17.59};
    for (int i = 0; i < voltios.size(); i++) 
    {
        std::cout << voltios[i] << " ";
        if ((i + 1) % 3 == 0) 
        {
            std::cout << std::endl;
        }
    }
    return 0;
}