// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carnet: 9870105
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 11/03/2026

#include <iostream>
using namespace std;

const float PI = 3.1416;

float volumenCilindro(float radio, float altura)
{
    float volumen;
    volumen = PI * radio * radio * altura;
    return volumen;
}

int main()
{
    float radio, altura, volumen;

    cout << "Ingrese el radio del cilindro: ";
    cin >> radio;

    cout << "Ingrese la altura del cilindro: ";
    cin >> altura;

    volumen = volumenCilindro(radio, altura);

    cout << "El volumen del cilindro es: " << volumen << endl;

    return 0;
}