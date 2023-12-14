#include <iostream>
#include <string>
#include <vector>

class ErrorAsistencia : public std::exception {
private:
    std::string mensajeError;

public:
    ErrorAsistencia(const std::string& mensaje) : mensajeError(mensaje) {}

    const char* what() const noexcept override {
        return mensajeError.c_str();
    }
};

struct Asistencia {
    std::string fecha;
    std::string materia;
    std::string estado;
};

class Estudiante {
public:
    std::string nombre;
    int edad;
    float promedio;
    std::vector<Asistencia> asistencias;

    void registrarAsistencia(const std::string& fecha, const std::string& materia, const std::string& estado) {
        try {
            if (materia.empty() || fecha.empty() || estado.empty()) {
                throw ErrorAsistencia("Error: Todos los campos deben estar llenos.");
            }
            Asistencia nuevaAsistencia;
            nuevaAsistencia.fecha = fecha;
            nuevaAsistencia.materia = materia;
            nuevaAsistencia.estado = estado;
            asistencias.push_back(nuevaAsistencia);
        } catch (const ErrorAsistencia& e) {
            std::cout << e.what() << std::endl;
        }
    }

    void mostrarAsistencias() {
        std::cout << "Asistencias de " << nombre << ":\n";
        for (const auto& asistencia : asistencias) {
            std::cout << "Fecha: " << asistencia.fecha << " - Materia: " << asistencia.materia << " - Estado: " << asistencia.estado << std::endl;
        }
    }
};

int main() {
    Estudiante estudiante1;
    estudiante1.nombre = "Juan";
    estudiante1.edad = 20;
    estudiante1.promedio = 8.5;

    estudiante1.registrarAsistencia("2023-12-01", "Matemáticas", "asistió");
    estudiante1.registrarAsistencia("2023-12-02", "Física", "falta");
    estudiante1.registrarAsistencia("2023-12-03", "Programación", "tardanza");

    estudiante1.mostrarAsistencias();

    return 0;
}

