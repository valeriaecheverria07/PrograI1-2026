// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carnet: 9870105
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 22/05/2026
#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct AlumnoCurso 
{
    string nombre;
    double t1, t2, t3, t4;
    double ef;
    double nota_final;
};

void ingresarNotas(vector<AlumnoCurso> &curso);
void calcularNotasFinales(vector<AlumnoCurso> &curso);
void calcularEstadisticas(const vector<AlumnoCurso> &curso, double &prom, double &min, double &max);
void mostrarResultados(const vector<AlumnoCurso> &curso, double prom, double min, double max);

int main() 
{
    int n;
    cout << "Ingrese el numero de alumnos del curso: ";
    cin >> n;

    if (n <= 0) return 1;

    vector<AlumnoCurso> curso(n);
    ingresarNotas(curso);
    calcularNotasFinales(curso);

    double promedioGeneral, notaMinima, notaMaxima;
    calcularEstadisticas(curso, promedioGeneral, notaMinima, notaMaxima);
    mostrarResultados(curso, promedioGeneral, notaMinima, notaMaxima);

    return 0;
}

void ingresarNotas(vector<AlumnoCurso> &curso) 
{
    for (size_t i = 0; i < curso.size(); i++) 
    {
        cout << "\nAlumno #" << i + 1 << ":" << endl;
        cout << "Nombre: ";
        getline(cin >> ws, curso[i].nombre);
        cout << "Notas parciales T1, T2, T3, T4 (separadas por espacio): ";
        cin >> curso[i].t1 >> curso[i].t2 >> curso[i].t3 >> curso[i].t4;
        cout << "Nota de Examen Final (EF): ";
        cin >> curso[i].ef;
    }
}

void calcularNotasFinales(vector<AlumnoCurso> &curso) 
{
    for (auto &alumno : curso) 
    {
        double np = (alumno.t1 + alumno.t2 + alumno.t3 + alumno.t4) / 4.0;
        alumno.nota_final = (0.7 * np) + (0.3 * alumno.ef);
    }
}

void calcularEstadisticas(const vector<AlumnoCurso> &curso, double &prom, double &min, double &max) 
{
    double suma = 0;
    min = curso[0].nota_final;
    max = curso[0].nota_final;

    for (const auto &alumno : curso) 
    {
        suma += alumno.nota_final;
        if (alumno.nota_final < min) min = alumno.nota_final;
        if (alumno.nota_final > max) max = alumno.nota_final;
    }
    prom = suma / curso.size();
}

void mostrarResultados(const vector<AlumnoCurso> &curso, double prom, double min, double max) 
{
    cout << "\n--- LISTADO DE CALIFICACIONES FINALES ---" << endl;
    for (const auto &alumno : curso) 
    {
        cout << "Estudiante: " << alumno.nombre << " | Nota Final: " << alumno.nota_final << endl;
    }

    cout << "\n=========================================" << endl;
    cout << "       ESTADISTICAS DEL CURSO            " << endl;
    cout << "=========================================" << endl;
    cout << "Promedio General: " << prom << endl;
    cout << "Nota Minima:      " << min << endl;
    cout << "Nota Maxima:      " << max << endl;
    cout << "=========================================" << endl;
}
