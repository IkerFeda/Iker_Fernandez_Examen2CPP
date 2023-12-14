#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include <iostream>
#include <string>
#include <vector>

// Definición de la estructura Estudiante
struct Estudiante {
    std::string nombre;
    int edad;
    float promedio;
    std::vector<std::string> materias; // Vector de materias

    // Función para agregar materia
    void agregarMateria(const std::string& materia);

    // Función para eliminar materia
    void eliminarMateria(const std::string& materia);

    // Función para mostrar las materias del estudiante
    void mostrarMaterias();
};

#endif  // ESTUDIANTE_H

