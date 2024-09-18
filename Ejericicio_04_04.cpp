// Materia: Programación I, Paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha creación: 18/09/2024
// Número de ejercicio: 4
// Problema planteado: Multiplicacion
#include <iostream>
#include <vector>

int main() 
{
    int N;
    std::cout << "Ingrese la dimensión N de los vectores: ";
    std::cin >> N;
    std::vector<int> vector1(N);
    std::vector<int> vector2(N);
    std::vector<int> resultado(N);
    std::cout << "Ingrese los elementos del primer vector:\n";
    for (int i = 0; i < N; ++i) 
    {
        std::cin >> vector1[i];
    }
    std::cout << "Ingrese los elementos del segundo vector:\n";
    for (int i = 0; i < N; ++i) 
    {
        std::cin >> vector2[i];
    }
    for (int i = 0; i < N; ++i) 
    {
        resultado[i] = vector1[i] * vector2[i];
    }
    std::cout << "\nResultado de la multiplicación de los dos vectores:\n";
    for (int i = 0; i < N; ++i) 
    {
        std::cout << "Elemento " << i+1 << ": " << resultado[i] << std::endl;
    }
    return 0;
}