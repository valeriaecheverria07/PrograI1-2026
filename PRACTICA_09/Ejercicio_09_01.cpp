// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carnet: 9870105
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 20/04/2026

#include <iostream>
using namespace std;

void IntercambiarFilas(int matriz[100][100], int n, int m)
{
    for(int j = 0; j < m; j++)
    {
        int aux = matriz[0][j];
        matriz[0][j] = matriz[n-1][j];
        matriz[n-1][j] = aux;
    }
}

void Mostrar(int matriz[100][100], int n, int m)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n, m;
    cout << "Filas: ";
    cin >> n;
    cout << "Columnas: ";
    cin >> m;

    int matriz[100][100];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> matriz[i][j];
        }
    }

    cout << "\n Matriz original \n";
    Mostrar(matriz, n, m);

    IntercambiarFilas(matriz, n, m);

    cout << "\n Matriz modificada\n";
    Mostrar(matriz, n, m);

    return 0;
}