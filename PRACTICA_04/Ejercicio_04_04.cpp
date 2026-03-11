// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carnet: 9870105
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 11/03/2026

#include <iostream>
using namespace std;

float convertirDolares(float bolivianos, float tipoCambio)
{
    float dolares;
    dolares = bolivianos / tipoCambio;
    return dolares;
}

int main()
{
    float bolivianos;
    float cambioOficial;
    float cambioParalelo;
    float dolaresOficial;
    float dolaresParalelo;

    cout << "Ingrese el monto en bolivianos: ";
    cin >> bolivianos;

    cout << "Ingrese tipo de cambio oficial: ";
    cin >> cambioOficial;

    cout << "Ingrese tipo de cambio paralelo: ";
    cin >> cambioParalelo;

    dolaresOficial = convertirDolares(bolivianos, cambioOficial);
    dolaresParalelo = convertirDolares(bolivianos, cambioParalelo);

    cout << "Dolares con cambio oficial: " << dolaresOficial << endl;
    cout << "Dolares con cambio paralelo: " << dolaresParalelo << endl;

    return 0;
}