// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carnet: 9870105
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 16/02/2026

#include <iostream>
using namespace std;
int main()
 {
    int numero;
    system ("cls");
    cout<<"Ingrese un numero entero: ";
    cin>>numero;
    if (numero % 2 == 0) 
    {
        cout<<"El numero es PAR."<<endl;
    }
    else 
    {
        cout<<"El numero es IMPAR."<<endl;
    }
    return 0;
}