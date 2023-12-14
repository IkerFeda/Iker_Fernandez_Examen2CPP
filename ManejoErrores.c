#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define ERROR_FECHA_FORMATO_INVALIDO -1
#define ERROR_MATERIA_NO_REGISTRADA -2

// Estructura para la asistencia
struct Asistencia {
    char fecha[20];
    char materia[50];
    char estado[20];
};

// Estructura para el estudiante
struct Estudiante {
    char nombre[50];
    int edad;
    float nota;
    struct Asistencia asistencias[100];
    int cantidadAsistencias;
};

// Función para verificar el formato de la fecha
int VerificarFormatoFecha(const char* fecha) {
    if (fecha[4] != '-' || fecha[7] != '-' || strlen(fecha) != 10) {
        return ERROR_FECHA_FORMATO_INVALIDO; // Formato de fecha no válido
    }
    return 0; // Formato de fecha válido
}

// Función para registrar la asistencia del estudiante
int RegistrarAsistencia(struct Estudiante* estudiante, const char* fecha, const char* materia, const char* estado) {
    int resultadoVerificacion = VerificarFormatoFecha(fecha);
    if (resultadoVerificacion != 0) {
        return resultadoVerificacion; // Devuelve el código de error si la fecha es inválida
    }

    // Verificar si la materia está registrada
    if (strcmp(materia, "Matemáticas") != 0 && strcmp(materia, "Física") != 0 && strcmp(materia, "Programación") != 0) {
        return ERROR_MATERIA_NO_REGISTRADA; // Materia no registrada
    }

    // Implementación para registrar la asistencia
    // Aquí podrías almacenar la asistencia en la estructura del estudiante o realizar otras operaciones necesarias

    // Ejemplo de registro de asistencia (guardado en la estructura del estudiante)
    strcpy(estudiante->asistencias[estudiante->cantidadAsistencias].fecha, fecha);
    strcpy(estudiante->asistencias[estudiante->cantidadAsistencias].materia, materia);
    strcpy(estudiante->asistencias[estudiante->cantidadAsistencias].estado, estado);
    estudiante->cantidadAsistencias++;

    return 0; // Éxito al registrar la asistencia
}

int main() {
    struct Estudiante estudiante1;
    strcpy(estudiante1.nombre, "Iker");
    estudiante1.edad = 20;
    estudiante1.nota = 9.5;
    estudiante1.cantidadAsistencias = 0;

    // Ejemplo de uso de la función RegistrarAsistencia
    int resultado = RegistrarAsistencia(&estudiante1, "2023-12-01", "Matemáticas", "asistió");

    // Manejo de errores
    if (resultado == ERROR_FECHA_FORMATO_INVALIDO) {
        printf("Error: Formato de fecha no válido.\n");
    } else if (resultado == ERROR_MATERIA_NO_REGISTRADA) {
        printf("Error: Materia no registrada.\n");
    } else if (resultado != 0) {
        printf("Error desconocido.\n");
    } else {
        printf("Asistencia registrada con éxito.\n");
    }

    return 0;
}
