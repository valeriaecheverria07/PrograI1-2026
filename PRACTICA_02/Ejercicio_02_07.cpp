// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carnet: 9870105
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 25/02/2026

#include <iostream>
using namespace std;
int main ()
{
    system("cls");
    int num;
    int i = 1;
    int suma = 0;
    cout<<"Ingrese un numero: ";
    cin>>num;
    while(i < num)
    {
        if(num % i == 0)
        {
            suma = suma + i;
        }
        i = i + 1;
    }
    if(suma == num)
        cout << "Es numero perfecto";
    else
        cout << "No es numero perfecto";
    return 0;
}
