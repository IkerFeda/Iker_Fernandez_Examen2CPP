#ifndef IKER_FERNANDEZ_EXAMEN2CPP_ESTUDIANTE_H
#define IKER_FERNANDEZ_EXAMEN2CPP_ESTUDIANTE_H

#include "iostream"
#include "string"


class Estudiante {
    public:
    std::string nombre;
    int edad;
    float nota;

    void MostrarDatos();
    std::cout << "Nombre: " << Estudiante.nombre << std::endl;
    std::cout << "Edad: " << Estudiante.edad << std::endl;
    std::cout << "Promedio: " << Estudiante.nota << std::endl;
};


#endif //IKER_FERNANDEZ_EXAMEN2CPP_ESTUDIANTE_H
