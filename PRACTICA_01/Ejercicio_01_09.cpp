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
   system("cls");
    cout<<"Ingrese un numero: ";
    cin>>numero;
    if (numero<1 or numero>3999) 
    {
        cout<<"Numero fuera de rango."<<endl;
        return 0;
    }
    int valores[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string romanos[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL","X", "IX", "V", "IV", "I"};
    cout<<"Numero romano: ";
    for (int i = 0; i < 13; i++) 
    {
        while (numero >= valores[i])
        {
            cout<<romanos[i];
            numero-=valores[i];
        }
    }
    cout<<endl;
    return 0;
}