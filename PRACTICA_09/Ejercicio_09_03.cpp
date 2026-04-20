// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carnet: 9870105
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 20/04/2026

#include <iostream>
#include <vector>
using namespace std;

void Mostrar(char matriz[3][4], int filas, int columnas)
{
    for(int i = 0; i < filas; i++)
    {
        for(int j = 0; j < columnas; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

void FilasColumnasLibres(char matriz[3][4], int filas, int columnas)
{
    int filasLibres = 0;
    int columnasLibres = 0;

    for(int i = 0; i < filas; i++)
    {
        bool tieneX = false;
        for(int j = 0; j < columnas; j++)
        {
            if(matriz[i][j] == 'x') tieneX = true;
        }
        if(!tieneX) filasLibres++;
    }

    for(int j = 0; j < columnas; j++)
    {
        bool tieneX = false;
        for(int i = 0; i < filas; i++)
        {
            if(matriz[i][j] == 'x') tieneX = true;
        }
        if(!tieneX) columnasLibres++;
    }

    cout << "filas libres: " << filasLibres << endl;
    cout << "columnas libres: " << columnasLibres << endl;
}

int PosicionesMuertos(char matriz[3][4], int filas, int columnas)
{
    vector<int> fila;
    vector<int> columna;

    for(int i = 0; i < filas; i++)
    {
        for(int j = 0; j < columnas; j++)
        {
            if(matriz[i][j] == 'x')
            {
                fila.push_back(i);
                columna.push_back(j);
            }
        }
    }

    cout << "Posiciones:" << endl;
    for(int i = 0; i < fila.size(); i++)
    {
        cout << fila[i] << " , " << columna[i] << endl;
    }

    return fila.size(); 
}

int main()
{
    const int filas = 3;
    const int columnas = 4;

    char matriz[filas][columnas] =
    {
        {'x','o','x','o'},
        {'o','o','o','o'},
        {'o','o','x','o'}
    };

    cout << "a) Mostrar matriz\n";
    Mostrar(matriz, filas, columnas);

    cout << "\nb)\n";
    FilasColumnasLibres(matriz, filas, columnas);

    cout << "\nc)\n";
    int total = PosicionesMuertos(matriz, filas, columnas);

    cout << "\nd) total muertos: " << total << endl;

    int contador = 0;
    for(int i = 0; i < filas; i++)
    {
        if(matriz[i][0] == 'x') contador++;
    }

    cout << "\ne)\n";
    if(contador >= 2)
        cout << "no es posible entrar al complejo";
    else
        cout << "es posible entrar al complejo";

    return 0;
}