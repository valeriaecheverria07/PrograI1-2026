// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carnet: 9870105
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 22/05/2026
#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Empleado 
{
    string nombre;
    int id;
    double sueldo;
    int antiguedad; 
};

void ingresarEmpleados(vector<Empleado> &lista);
int contarSueldosMayores(const vector<Empleado> &lista, double umbralSueldo);
double calcularPromedioAntiguedad(const vector<Empleado> &lista);

int main() 
{
    int n;
    cout << "Cantidad de empleados: ";
    cin >> n;

    if (n <= 0) return 1;

    vector<Empleado> lista(n);
    ingresarEmpleados(lista);

    double sueldoFiltro;
    cout << "\nIngrese el valor de sueldo para comparar: ";
    cin >> sueldoFiltro;

    int mayorFiltro = contarSueldosMayores(lista, sueldoFiltro);
    double promAntiguedad = calcularPromedioAntiguedad(lista);

    cout << "\n--- REPORTES ---" << endl;
    cout << "Cantidad de empleados con sueldo mayor a " << sueldoFiltro << ": " << mayorFiltro << endl;
    cout << "Promedio de antiguedad de la empresa: " << promAntiguedad << " anos." << endl;

    return 0;
}

void ingresarEmpleados(vector<Empleado> &lista) 
{
    for (size_t i = 0; i < lista.size(); i++) 
    {
        cout << "\nEmpleado #" << i + 1 << ":" << endl;
        cout << "Nombre: ";
        getline(cin >> ws, lista[i].nombre);
        cout << "ID: ";
        cin >> lista[i].id;
        cout << "Sueldo: ";
        cin >> lista[i].sueldo;
        cout << "Antiguedad (anos): ";
        cin >> lista[i].antiguedad;
    }
}

int contarSueldosMayores(const vector<Empleado> &lista, double umbralSueldo) 
{
    int contador = 0;
    for (const auto &emp : lista) 
    {
        if (emp.sueldo > umbralSueldo) 
        {
            contador++;
        }
    }
    return contador;
}

double calcularPromedioAntiguedad(const vector<Empleado> &lista) 
{
    int suma = 0;
    for (const auto &emp : lista) 
    {
        suma += emp.antiguedad;
    }
    return static_cast<double>(suma) / lista.size();
}
