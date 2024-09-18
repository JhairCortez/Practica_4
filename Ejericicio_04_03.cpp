// Materia: Programación I, Paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha creación: 18/09/2024
// Número de ejercicio: 3
// Problema planteado: Calificaciones 
#include <iostream>
#include <vector>
#include <cmath> 

int main() 
{
    int N;
    double suma = 0.0, promedio = 0.0, varianza = 0.0;
    std::cout << "Ingrese el número de calificaciones: ";
    std::cin >> N;
    std::vector<int> calificaciones(N);
    std::vector<double> desviacion(N);
    std::cout << "Ingrese las calificaciones: \n";
    for (int i = 0; i < N; ++i) 
    {
        std::cin >> calificaciones[i];
        suma += calificaciones[i]; 
    }
    promedio = suma / N;
    for (int i = 0; i < N; ++i) 
    {
        desviacion[i] = calificaciones[i] - promedio;
        varianza += pow(desviacion[i], 2); 
    }

    varianza /= N;
    std::cout << "\nCalificaciones y Desviaciones respecto al promedio:\n";
    for (int i = 0; i < N; ++i) 
    {
        std::cout << "Calificación: " << calificaciones[i] << " - Desviación: " << desviacion[i] << "\n";
    }
    std::cout << "\nPromedio de calificaciones: " << promedio << "\n";
    std::cout << "Varianza: " << varianza << "\n";
    return 0;
}