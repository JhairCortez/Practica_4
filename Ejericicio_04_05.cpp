// Materia: Programación I, Paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha creación: 18/09/2024
// Número de ejercicio: 5
// Problema planteado: Combinacion de vector
#include <iostream>
#include <vector>

int main() 
{
    int N;
    std::cout << "Ingrese la dimensión N de los vectores: ";
    std::cin >> N;
    std::vector<int> vector1(N);
    std::vector<int> vector2(N);
    std::vector<int> combinado(2 * N);
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
        combinado[i] = vector1[i];       
        combinado[N + i] = vector2[i]; 
    }
    std::cout << "\nVector combinado:\n";
    for (int i = 0; i < 2 * N; ++i) 
    {
        std::cout << combinado[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}