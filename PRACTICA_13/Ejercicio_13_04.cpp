// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carnet: 9870105
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 22/05/2026
#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Empleado {
    string nombre;
    string genero;
    double salario;
};

void cargarEmpleados(vector<Empleado> &personal);
void buscarExtremosSalariales(const vector<Empleado> &personal, Empleado &mayor, Empleado &menor);
void mostrarEmpleado(const Empleado &emp);

int main() 
{
    int n;
    cout << "Ingrese la cantidad de empleados de la UCB: ";
    cin >> n;

    if (n <= 0) 
    {
        cout << "Cantidad no valida." << endl;
        return 1;
    }

    vector<Empleado> personal(n);
    cargarEmpleados(personal);

    Empleado empMayor, empMenor;
    buscarExtremosSalariales(personal, empMayor, empMenor);

    cout << "\n--- EMPLEADO CON MAYOR SALARIO ---" << endl;
    mostrarEmpleado(empMayor);

    cout << "\n--- EMPLEADO CON MENOR SALARIO ---" << endl;
    mostrarEmpleado(empMenor);

    return 0;
}

void cargarEmpleados(vector<Empleado> &personal) 
{
    for (size_t i = 0; i < personal.size(); i++) 
    {
        cout << "\nDatos del empleado #" << i + 1 << ":" << endl;
        cout << "Nombre: ";
        getline(cin >> ws, personal[i].nombre);
        cout << "Genero: ";
        getline(cin, personal[i].genero);
        cout << "Salario: ";
        cin >> personal[i].salario;
    }
}

void buscarExtremosSalariales(const vector<Empleado> &personal, Empleado &mayor, Empleado &menor) 
{
    mayor = personal[0];
    menor = personal[0];

    for (size_t i = 1; i < personal.size(); i++) 
    {
        if (personal[i].salario > mayor.salario) 
        {
            mayor = personal[i];
        }
        if (personal[i].salario < menor.salario) 
        {
            menor = personal[i];
        }
    }
}

void mostrarEmpleado(const Empleado &emp) 
{
    cout << "Nombre: " << emp.nombre << endl;
    cout << "Genero: " << emp.genero << endl;
    cout << "Salario: " << emp.salario << " Bs." << endl;
}
