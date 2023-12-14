#include "vector"
#include "iostream"
#include "string"
#include "Estudiante.h"

int main() {
    Estudiante estudiante1;
    estudiante1.nombre = "Iker";
    estudiante1.edad = 20;
    estudiante1.nota = 9.5;

    estudiante1.MostrarDatos();
    estudiante1.AgregarMateria("Matematicas");
    estudiante1.AgregarMateria("Fisica");
    estudiante1.AgregarMateria("Programacion");

    estudiante1.MostrarMaterias();

    estudiante1.EliminarMateria("Programacion");
    estudiante1.MostrarMaterias();

    return 0;
}