#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include <iostream>
#include <string>
#include <vector>
#include "Asistencia.h" // Incluir la estructura Asistencia

// Definición de la estructura Estudiante
class Estudiante {
public:
    std::string nombre;
    int edad;
    float promedio;
    std::vector<Asistencia> asistencias; // Vector de asistencias

    // Función para registrar la asistencia del estudiante
    void registrarAsistencia(const std::string& fecha, const std::string& materia, const std::string& estado);

    // Función para mostrar las asistencias del estudiante
    void mostrarAsistencias();
};

#endif  // ESTUDIANTE_H

