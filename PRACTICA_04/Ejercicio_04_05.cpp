// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carnet: 9870105
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 11/03/2026

#include <iostream>
using namespace std;

bool esPar(int numero)
{
    if(numero % 2 == 0)
        return true;
    else
        return false;
}

int main()
{
    int num;

    cout << "Ingrese un numero: ";
    cin >> num;

    if(esPar(num))
        cout << "El numero es par" << endl;
    else
        cout << "El numero es impar" << endl;

    return 0;
}