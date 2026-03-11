// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carnet: 9870105
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 11/03/2026

#include <iostream>
using namespace std;

int main()
{
    int horas;
    float tarifa;
    float salario;
    float bonificacion = 0;

    cout << "Ingrese horas trabajadas: ";
    cin >> horas;

    cout << "Ingrese tarifa por hora: ";
    cin >> tarifa;

    if(horas <= 8)
    {
        salario = horas * tarifa;
    }
    else
    {
        int horasExtra = horas - 8;

        salario = 8 * tarifa;

        bonificacion = horasExtra * tarifa * 0.5;
    }

    cout << "Salario del trabajador: " << salario << endl;
    cout << "Salario bonificacion: " << bonificacion << endl;

    return 0;
}