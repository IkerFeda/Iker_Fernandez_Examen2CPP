#include "stdio.h"
#include "stdlib.h"
#include "string.h"

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

int main(){
    struct Estudiante estudiante1;
    strcpy(estudiante1.nombre, "Iker");
    estudiante1.edad = 20;
    estudiante1.nota = 9.5;

    MostrarDatos(estudiante1);

    return 0;
}