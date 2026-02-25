// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carnet: 9870105
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 23/02/2026

#include <iostream>
using namespace std;
int main ()
{
    system ("cls");
    int num;
    int factorial = 1;
    int suma = 0;
    cout<<"Ingrese un numero: ";
    cin>>num;
    for(int i = 1; i <= num; i = i + 1)
    {
        factorial = factorial * i;  
        suma = suma + factorial;   
    }
    cout<<"Resultado: "<<suma<<endl;
    return 0;
}
