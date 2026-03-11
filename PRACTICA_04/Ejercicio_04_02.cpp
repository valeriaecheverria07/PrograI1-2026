// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carnet: 9870105
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 11/03/2026

#include <iostream>
using namespace std;

int mayorNumero(int a, int b, int c)
{
    int mayor = a;

    if(b > mayor)
        mayor = b;

    if(c > mayor)
        mayor = c;

    return mayor;
}

int main()
{
    int n1, n2, n3;
    int mayor;

    cout << "Ingrese el primer numero: ";
    cin >> n1;

    cout << "Ingrese el segundo numero: ";
    cin >> n2;

    cout << "Ingrese el tercer numero: ";
    cin >> n3;

    mayor = mayorNumero(n1, n2, n3);

    cout << "El numero mayor es: " << mayor << endl;

    return 0;
}