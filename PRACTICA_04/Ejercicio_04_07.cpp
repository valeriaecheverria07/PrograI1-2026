// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carnet: 9870105
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 11/03/2026

#include <iostream>
using namespace std;

float calcularDistancia(float velocidad, float tiempo)
{
    float distancia;
    distancia = velocidad * tiempo;
    return distancia;
}

int main()
{
    float v, t, d;

    cout << "Ingrese la velocidad: ";
    cin >> v;

    cout << "Ingrese el tiempo: ";
    cin >> t;

    d = calcularDistancia(v, t);

    cout << "La distancia recorrida es: " << d << endl;

    return 0;
}