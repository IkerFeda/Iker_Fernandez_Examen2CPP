#ifndef IKER_FERNANDEZ_EXAMEN2CPP_ESTUDIANTE_H
#define IKER_FERNANDEZ_EXAMEN2CPP_ESTUDIANTE_H

#include <iostream>
#include <string>
#include "vector"

class Estudiante {
public:
    std::string nombre;
    int edad;
    float nota;
    std::vector<std::string> materias; // Vector de materias


    void MostrarDatos() {
        std::cout << "Nombre: " << nombre << std::endl;
        std::cout << "Edad: " << edad << std::endl;
        std::cout << "Promedio: " << nota << std::endl;
    }

    //Apartado agregado para la agregar, eliminar y mostrar materias

    void AgregarMateria(const std::string& materia) {
        materias.push_back(materia); // Agregar materia al vector
    }

    void EliminarMateria(const std::string& materia) {
        // Buscar y eliminar materia del vector
        for (auto it = materias.begin(); it != materias.end(); ++it) {
            if (*it == materia) {
                materias.erase(it);
                break; // Importante: salir del bucle después de eliminar la materia
            }
        }
    }

    void MostrarMaterias() {
        std::cout << "Materias inscritas:" << std::endl;
        for (const auto& materia : materias) {
            std::cout << "- " << materia << std::endl;
        }
    }
};



#endif //IKER_FERNANDEZ_EXAMEN2CPP_ESTUDIANTE_H
