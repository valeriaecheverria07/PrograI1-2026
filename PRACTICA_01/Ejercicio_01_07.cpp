// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carnet: 9870105
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 16/02/2026

#include <iostream>
using namespace std;
int main()
 {
    int edad;
    system ("cls");
    cout<<"Ingrese su edad: ";
    cin>>edad;
    if (edad >= 18 and edad <= 25) 
    {
        cout<<"SI esta dentro del rango"<<endl;
    }
    else 
    {
        cout<<"NO esta dentro del rango"<<endl;
    }
    return 0;
}