#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_MATERIAS 10
#define MAX_LENGTH 50

struct Estudiante {
    char nombre[MAX_LENGTH];
    int edad;
    float nota;
    char* materias[MAX_MATERIAS];
    int cantidadMaterias;
};

void MostrarDatos(struct Estudiante estudiante) {
    printf("Nombre: %s\n", estudiante.nombre);
    printf("Edad: %d\n", estudiante.edad);
    printf("Promedio: %f\n", estudiante.nota);
    printf("Materias inscritas:\n");
    for (int i = 0; i < estudiante.cantidadMaterias; ++i) {
        printf("- %s\n", estudiante.materias[i]);
    }
}

void AgregarMateria(struct Estudiante *estudiante, const char *materia) {
    if (estudiante->cantidadMaterias < MAX_MATERIAS) {
        estudiante->materias[estudiante->cantidadMaterias] = malloc((strlen(materia) + 1) * sizeof(char));
        if (estudiante->materias[estudiante->cantidadMaterias] != NULL) {
            strcpy(estudiante->materias[estudiante->cantidadMaterias], materia);
            estudiante->cantidadMaterias++;
        } else {
            printf("Error: No se pudo asignar memoria para la materia.\n");
        }
    } else {
        printf("No es posible agregar más materias, límite alcanzado.\n");
    }
}

void EliminarMateria(struct Estudiante *estudiante, const char *materia) {
    for (int i = 0; i < estudiante->cantidadMaterias; ++i) {
        if (strcmp(estudiante->materias[i], materia) == 0) {
            free(estudiante->materias[i]);
            for (int j = i; j < estudiante->cantidadMaterias - 1; ++j) {
                estudiante->materias[j] = estudiante->materias[j + 1];
            }
            estudiante->cantidadMaterias--;
            return;
        }
    }
    printf("Materia no encontrada.\n");
}

int main() {
    struct Estudiante estudiante1;
    strcpy(estudiante1.nombre, "Iker");
    estudiante1.edad = 20;
    estudiante1.nota = 9.5;
    estudiante1.cantidadMaterias = 0;

    // Agregar materias
    AgregarMateria(&estudiante1, "Matemáticas");
    AgregarMateria(&estudiante1, "Física");
    AgregarMateria(&estudiante1, "Programación");

    // Mostrar datos del estudiante con sus materias
    MostrarDatos(estudiante1);

    // Eliminar una materia
    EliminarMateria(&estudiante1, "Física");

    // Mostrar datos actualizados del estudiante
    MostrarDatos(estudiante1);

    // Liberar memoria asignada para las materias
    for (int i = 0; i < estudiante1.cantidadMaterias; ++i) {
        free(estudiante1.materias[i]);
    }

    return 0;
}