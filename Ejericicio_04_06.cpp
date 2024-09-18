// Materia: Programación I, Paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha creación: 18/09/2024
// Número de ejercicio: 6
// Problema planteado: Declare 3 vectores
#include <iostream>
#include <vector>

int main() 
{
    const int N = 5;
    std::vector<int> vector1(N);
    std::vector<int> vector2(N);
    std::vector<int> vector3(N);
    std::cout << "Ingrese los elementos de 'vector1':\n";
    for (int i = 0; i < N; ++i) 
    {
        std::cin >> vector1[i];
    }
    std::cout << "Ingrese los elementos de 'vector2':\n";
    for (int i = 0; i < N; ++i) 
    {
        std::cin >> vector2[i];
    }
    for (int i = 0; i < N; ++i) 
    {
        vector3[i] = vector1[i] + vector2[i];
    }
    std::cout << "\nResultado de 'vector3' (vector1 + vector2):\n";
    for (int i = 0; i < N; ++i) 
    {
        std::cout << "vector3[" << i << "] = " << vector3[i] << std::endl;
    }
    return 0;
}