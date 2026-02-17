// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carnet: 9870105
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 16/02/2026

#include <iostream>
using namespace std;
int main()
 {
    int n1, n2, n3, n4;
    system ("cls");
    cout << "Ingrese el primer numero: ";
    cin >> n1;
    cout << "Ingrese el segundo numero: ";
    cin >> n2;
    cout << "Ingrese el tercer numero: ";
    cin >> n3;
    system ("cls");
    cout << "Ahora ingrese un cuarto numero: ";
    cin >> n4;
    if (n4 == n1 or n4 == n2 or n4 == n3) 
    {
        cout<<"El numero coincide con uno de los anteriores."<<endl;
    }
    else 
    {
        cout<<"El numero NO coincide con ninguno."<<endl;
    }

    return 0;
}