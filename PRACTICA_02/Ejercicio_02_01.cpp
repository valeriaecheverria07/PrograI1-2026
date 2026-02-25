// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carnet: 9870105
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 23/02/2026

#include <iostream>
using namespace std;
int main ()
{
    int num;
    system("cls");
    cout<<"Ingrese un numero del 1 al 10: ";
    cin>>num;
    for(int i = 1; i <= 10; i++) 
    {
        cout<<num<<" x "<<i<<"= "<<num * i<<endl;
    }
    return 0;
}
