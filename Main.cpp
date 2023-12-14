#include <iostream>
#include <string>
#include "Estudiante.h"

int main() {
    Estudiante estudiante1;
    estudiante1.nombre = "Iker";
    estudiante1.edad = 20;
    estudiante1.nota = 9.5;

    estudiante1.MostrarDatos();

    return 0;
}

//Implementación equivalent en lenguaje C

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

// La diferencia principal entre ambos radica en el uso de herencia y polimorfismo, que en C++ se puede hacer uso de ellos.
