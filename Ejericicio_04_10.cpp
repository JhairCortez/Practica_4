// Materia: Programación I, Paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha creación: 18/09/2024
// Número de ejercicio: 10
// Problema planteado: Calificaciones de un examen
#include <iostream>
#include <vector>
#include <string>

int main() 
{
    std::vector<std::string> nombres = {"Ana", "Luis", "María", "Juan", "Pedro"};
    std::vector<double> calificaciones = {85.5, 90.0, 78.5, 95.0, 88.0};
    std::vector<std::string> carreras = {"CS", "IT", "CS", "EE", "IT"};
    int numEstudiantes = nombres.size();
    int indiceMayor = 0, indiceMenor = 0;
    double suma = 0;
    for (int i = 0; i < numEstudiantes; i++) {
        suma += calificaciones[i];
        if (calificaciones[i] > calificaciones[indiceMayor]) 
        {
            indiceMayor = i;
        }
        if (calificaciones[i] < calificaciones[indiceMenor]) 
        {
            indiceMenor = i;
        }
    }
    double promedioCurso = suma / numEstudiantes;
    std::vector<double> sumaCarreras(3, 0); 
    std::vector<int> cuentaCarreras(3, 0); 
    std::vector<std::string> siglasCarreras = {"CS", "IT", "EE"};
    for (int i = 0; i < numEstudiantes; i++) 
    {
        if (carreras[i] == "CS") {
            sumaCarreras[0] += calificaciones[i];
            cuentaCarreras[0]++;
        } else if (carreras[i] == "IT") {
            sumaCarreras[1] += calificaciones[i];
            cuentaCarreras[1]++;
        } else if (carreras[i] == "EE") {
            sumaCarreras[2] += calificaciones[i];
            cuentaCarreras[2]++;
        }
    }
    double mayorPromedio = 0;
    std::string carreraMejorDesempeno;

    for (int i = 0; i < 3; i++) 
    {
        if (cuentaCarreras[i] > 0) 
        {
            double promedioCarrera = sumaCarreras[i] / cuentaCarreras[i];
            if (promedioCarrera > mayorPromedio) 
            {
                mayorPromedio = promedioCarrera;
                carreraMejorDesempeno = siglasCarreras[i];
            }
        }
    }
    std::cout << "El estudiante con la mayor calificación es: " << nombres[indiceMayor]
              << " con una nota de " << calificaciones[indiceMayor] << std::endl;
    std::cout << "El estudiante con la menor calificación es: " << nombres[indiceMenor]
              << " con una nota de " << calificaciones[indiceMenor] << std::endl;
    std::cout << "El promedio del curso es: " << promedioCurso << std::endl;
    std::cout << "La carrera con mejor desempeño es: " << carreraMejorDesempeno
              << " con un promedio de " << mayorPromedio << std::endl;
    return 0;
}