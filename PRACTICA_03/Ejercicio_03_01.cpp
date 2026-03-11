// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carnet: 9870105
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 2/03/2026

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main ()
{
    int n;
    int dado;
    int contadorPares = 0;
    system ("cls");
    srand(time(0));

    cout << "Cuantas veces quiere lanzar el dado?: ";
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        dado = rand() % 6 + 1;

        cout << "Lanzamiento " << i << ": " << dado << endl;

        if(dado % 2 == 0)
        {
            contadorPares++;
        }
    }

    cout << "Frecuencia de caras pares: " << contadorPares << endl;

    return 0;
}