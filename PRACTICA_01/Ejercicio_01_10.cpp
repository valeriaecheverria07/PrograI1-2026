// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carnet: 9870105
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 16/02/2026

#include <iostream>
using namespace std;
int main()
 {
   int mes;
      system ("cls");
    cout<<"Ingrese un numero del 1 al 12: ";
    cin>>mes;
    switch (mes) 
    {
        case 1:cout<<"Enero";break;
        case 2:cout<<"Febrero";break;
        case 3:cout<<"Marzo";break;
        case 4:cout<<"Abril";break;
        case 5:cout<<"Mayo";break;
        case 6:cout<<"Junio";break;
        case 7:cout<<"Julio";break;
        case 8:cout<<"Agosto";break;
        case 9:cout<<"Septiembre";break;
        case 10:cout<<"Octubre";break;
        case 11:cout<<"Noviembre";break;
        case 12:cout<<"Diciembre";break;
        default:cout<<"Numero invalido";
    }
    cout << endl;
    return 0;
}