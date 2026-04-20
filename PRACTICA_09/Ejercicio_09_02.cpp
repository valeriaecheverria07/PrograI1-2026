// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carnet: 9870105
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 20/04/2026

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

int GenerarAleatorio(int LimInferior, int LimSuperior)
{
    return (rand() % (LimSuperior - LimInferior + 1)) + LimInferior;
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

int SumaUltimaColumna(int matriz[100][100], int n)
{
    int suma = 0;
    for(int i = 0; i < n; i++)
    {
        suma += matriz[i][n-1];
    }
    return suma;
}

int ProductoUltimaFila(int matriz[100][100], int n)
{
    int producto = 1;
    for(int j = 0; j < n; j++)
    {
        producto *= matriz[n-1][j];
    }
    return producto;
}

void Mayor(int matriz[100][100], int n)
{
    int mayor = matriz[0][0];
    int fila = 0, col = 0;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(matriz[i][j] > mayor)
            {
                mayor = matriz[i][j];
                fila = i;
                col = j;
            }
        }
    }

    cout << "Mayor: " << mayor << " en posicion [" << fila << "][" << col << "]\n";
}

double Desviacion(int matriz[100][100], int n)
{
    int total = n * n;
    double suma = 0;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            suma += matriz[i][j];
        }
    }

    double media = suma / total;

    double suma2 = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            suma2 += pow(matriz[i][j] - media, 2);
        }
    }

    return sqrt(suma2 / total);
}

int main()
{
    srand(time(NULL));

    int n, A, B;
    cout << "Dimension N: ";
    cin >> n;

    cout << "Limite inferior A: ";
    cin >> A;

    cout << "Limite superior B: ";
    cin >> B;

    int matriz[100][100];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            matriz[i][j] = GenerarAleatorio(A, B);
        }
    }

    cout << "\nMatriz \n";
    Mostrar(matriz, n);

    cout << "\nSuma ultima columna: " << SumaUltimaColumna(matriz, n) << endl;
    cout << "Producto ultima fila: " << ProductoUltimaFila(matriz, n) << endl;

    Mayor(matriz, n);

    cout << "Desviacion estandar: " << Desviacion(matriz, n) << endl;

    return 0;
}