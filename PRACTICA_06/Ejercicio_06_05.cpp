// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carnet: 9870105
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 13/04/2026

#include <iostream>
using namespace std;

double calcularArea(double lado)
{
    return lado * lado;
}

double calcularArea(double base, double altura)
{
    return base * altura;
}

float calcularArea(float radio)
{
    return 3.1416f * radio * radio;
}

int main()
{
    double lado, base, altura;
    float radio;

    cout << "Ingrese lado del cuadrado: ";
    cin >> lado;
    cout << "Area del cuadrado: " << calcularArea(lado) << endl;

    cout << "Ingrese base del rectangulo: ";
    cin >> base;
    cout << "Ingrese altura del rectangulo: ";
    cin >> altura;
    cout << "Area del rectangulo: " << calcularArea(base, altura) << endl;

    cout << "Ingrese radio del circulo: ";
    cin >> radio;
    cout << "Area del circulo: " << calcularArea(radio) << endl;

    return 0;
}