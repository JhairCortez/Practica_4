// Materia: Programación I, Paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha creación: 18/09/2024
// Número de ejercicio: 7
// Problema planteado: Vecto de 10 elementos enteros
#include <iostream>
#include <vector>

int main() 
{
    const int N = 10;
    std::vector<int> vector(N);
    int numero, i = 0;
    std::cout << "Ingrese números enteros (introduzca un número negativo para terminar):\n";
    while (i < N) {
        std::cin >> numero;
    
        if (numero < 0) 
        {
            break;
        }
        vector[i] = numero; 
        ++i;  
    }
    std::cout << "\nElementos introducidos en el vector:\n";
    for (int j = 0; j < i; ++j) 
    {
        std::cout << vector[j] << " ";
    }
    std::cout << std::endl;
    return 0;
}