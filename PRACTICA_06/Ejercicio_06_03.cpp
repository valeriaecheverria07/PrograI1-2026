// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carnet: 9870105
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 13/04/2026

#include <iostream>
using namespace std;

void ModificarValores(int a, int &b)
{
    a = a * 2;   
    b = b + 10;
    
    cout << "Dentro de la funcion:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}

int main()
{
    int num1, num2;

    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    cout << "Antes de la funcion:" << endl;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;

    ModificarValores(num1, num2);

    cout << "Despues de la funcion:" << endl;
    cout << "num1 = " << num1 << endl; // no cambia
    cout << "num2 = " << num2 << endl; // sí cambia

    return 0;
}
