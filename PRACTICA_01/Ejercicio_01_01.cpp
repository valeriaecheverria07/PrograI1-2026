// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carnet: 9870105
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 16/02/2026

#include <iostream>
using namespace std;
int main ()
{
    int numero1, numero2;
    int suma, resta, mult, div;
    system ("cls");
    cout<<"Bienvenido, ingrese dos numeros: "<<endl;
    cout<<"numero 1: ";
    cin>>numero1;
    cout<<"numero 2: ";
    cin>>numero2;
    suma=numero1+numero2;
    resta=numero1-numero2;
    mult= numero1*numero2;
    div=numero1/numero2;
    cout<<"la suma es: "<<suma<<endl;
    cout<<"la resta es: "<<resta<<endl;
    cout<<"la multiplicacion es: "<<mult<<endl;
    cout<<"la division es: "<<div<<endl;
    return 0;
}
