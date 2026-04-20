// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carnet: 9870105
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 20/04/2026

#include <iostream>
using namespace std;

void GenerarMatriz(int matriz[100][100], int n)
{
    for(int i = 0; i < n; i++)
    {
        int inicio = 1 + 2*i;

        for(int j = 0; j < n; j++)
        {
            matriz[i][j] = inicio + j;
        }
    }
}

void Mostrar(int matriz[100][100], int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n = 5;
    int matriz[100][100];

    GenerarMatriz(matriz, n);

    Mostrar(matriz, n);

    return 0;
}