#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ASISTENCIAS 100
#define MAX_FECHA 20
#define MAX_MATERIA 50
#define MAX_ESTADO 20

// Estructura para la asistencia
struct Asistencia {
    char fecha[MAX_FECHA];
    char materia[MAX_MATERIA];
    char estado[MAX_ESTADO];
};

// Estructura para el estudiante que incluye asistencias
struct Estudiante {
    char nombre[50];
    int edad;
    float nota;
    struct Asistencia asistencias[MAX_ASISTENCIAS];
    int cantidadAsistencias;
};

// Función para registrar la asistencia del estudiante
void RegistrarAsistencia(struct Estudiante *estudiante, const char *fecha, const char *materia, const char *estado) {
    if (estudiante->cantidadAsistencias < MAX_ASISTENCIAS) {
        strcpy(estudiante->asistencias[estudiante->cantidadAsistencias].fecha, fecha);
        strcpy(estudiante->asistencias[estudiante->cantidadAsistencias].materia, materia);
        strcpy(estudiante->asistencias[estudiante->cantidadAsistencias].estado, estado);
        estudiante->cantidadAsistencias++;
    } else {
        printf("No es posible registrar más asistencias, límite alcanzado.\n");
    }
}

// Función para mostrar las asistencias del estudiante
void MostrarAsistencias(struct Estudiante estudiante) {
    printf("Asistencias de %s:\n", estudiante.nombre);
    for (int i = 0; i < estudiante.cantidadAsistencias; ++i) {
        printf("Fecha: %s - Materia: %s - Estado: %s\n",
               estudiante.asistencias[i].fecha,
               estudiante.asistencias[i].materia,
               estudiante.asistencias[i].estado);
    }
}

int main() {
    struct Estudiante estudiante1;
    strcpy(estudiante1.nombre, "Iker");
    estudiante1.edad = 20;
    estudiante1.nota = 9.5;
    estudiante1.cantidadAsistencias = 0;

    // Registrar asistencias
    RegistrarAsistencia(&estudiante1, "2023-12-01", "Matemáticas", "asistió");
    RegistrarAsistencia(&estudiante1, "2023-12-02", "Física", "falta");
    RegistrarAsistencia(&estudiante1, "2023-12-03", "Programación", "tardanza");

    // Mostrar asistencias del estudiante
    MostrarAsistencias(estudiante1);

    return 0;
}
