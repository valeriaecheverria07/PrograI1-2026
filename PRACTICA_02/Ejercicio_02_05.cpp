// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carnet: 9870105
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 24/02/2026

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main ()
{
    system ("cls");
    srand(time(0)); 
    int secreto = rand() % 100 + 1;  
    int numero;
    int intentos = 0;
    do
    {
        cout<<"Adivine el numero (1-100): ";
        cin>>numero;
        intentos = intentos + 1;
        if(numero < secreto)
            cout << "Es mayor\n";
        else if(numero > secreto)
            cout << "Es menor\n";

    } while(numero != secreto);
    cout<<"Lo lograste en " << intentos << " intentos.\n";
    return 0;
}
