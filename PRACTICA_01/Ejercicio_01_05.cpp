// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carnet: 9870105
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 16/02/2026

#include <iostream>
#include  <cmath>
using namespace std;
int main()
 {
    double catetoA, catetoO, hipotenusa;
    system ("cls");
    cout<<"Ingrese el cateto opuesto: ";
    cin>>catetoO;
    cout<<"Ingrese el cateto adyacente: ";
    cin >> catetoA;
    system ("cls");
    hipotenusa=sqrt(catetoA*catetoA+catetoO*catetoO);
    cout<<"La hipotenusa es: "<<hipotenusa<<endl;
    return 0;
}