#include "stdio.h"
#include "stdlib.h"

struct Estudiante {
    char nombre[50];
    int edad;
    float nota;
};

void MostrarDatos(struct Estudiante estudiante) {
    printf("Nombre: %s\n", estudiante.nombre);
    printf("Edad: %d\n", estudiante.edad);
    printf("Promedio: %f\n", estudiante.nota);
}