#ifndef IKER_FERNANDEZ_EXAMEN2CPP_ESTUDIANTE_H
#define IKER_FERNANDEZ_EXAMEN2CPP_ESTUDIANTE_H

#include <iostream>
#include <string>

// Definición de la estructura Estudiante
struct Estudiante {
    std::string nombre;
    int edad;
    float promedio;
};

// Declaración de la función mostrarEstudiante
void mostrarEstudiante(const Estudiante& estudiante);



#endif //IKER_FERNANDEZ_EXAMEN2CPP_ESTUDIANTE_H
