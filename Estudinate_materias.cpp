#include "Estudiante.h"

int main() {
    // Crear un estudiante
    Estudiante estudiante1;
    estudiante1.nombre = "Juan";
    estudiante1.edad = 20;
    estudiante1.promedio = 8.5;

    // Agregar materias
    estudiante1.agregarMateria("Matemáticas");
    estudiante1.agregarMateria("Física");
    estudiante1.agregarMateria("Programación");

    // Mostrar las materias del estudiante
    estudiante1.mostrarMaterias();

    // Eliminar una materia
    estudiante1.eliminarMateria("Física");

    // Mostrar las materias actualizadas del estudiante
    estudiante1.mostrarMaterias();

    return 0;
}

