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
    int a, b;
    int i;
    cout<<"Ingrese el primer numero: ";
    cin>>a;
    cout<<"Ingrese el segundo numero: ";
    cin>>b;
    if(a <= b)
    {
        i = a;
        while(i <= b)
        {
            cout<< i<< " ";
            i = i + 1;
        }
    }
    else
    {
        i = a;
        while(i >= b)
        {
            cout<<i<<" ";
            i = i - 1;
        }
    }
    return 0;
}
