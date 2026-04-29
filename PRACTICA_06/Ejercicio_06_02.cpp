// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carnet: 9870105
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 13/04/2026

#include <iostream>
using namespace std;

double CalcularVolumen(double radio, double altura = 10)
{
    double volumen;
    volumen = 3.1416 * radio * radio * altura;
    return volumen;
}

int main()
{
    double r, h, resultado;

    cout << "Ingrese el radio: ";
    cin >> r;

    resultado = CalcularVolumen(r);
    cout << "Volumen con altura por defecto (10): " << resultado << endl;

    cout << "Ingrese la altura: ";
    cin >> h;

    resultado = CalcularVolumen(r, h);
    cout << "Volumen con altura ingresada: " << resultado << endl;

    return 0;
}