// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carnet: 9870105
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 15/04/2026
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int GenerarAleatorio(int LimInferior, int Limsuperior);

// 1. Inicializar matriz
void inicializarInventario(int bodega[3][3])
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            bodega[i][j] = GenerarAleatorio(0,100);
        }
    }
}

// 2. Balancear carga
void balancearCarga(int bodega[3][3], int filaProducto, int &totalTransferido)
{
    if(bodega[filaProducto][0] > 80) // deposito 1
    {
        int excedente = bodega[filaProducto][0] - 80;

        bodega[filaProducto][0] = 80; // deja en 80
        bodega[filaProducto][1] += excedente; // pasa al deposito 2

        totalTransferido += excedente;
    }
}

// 3. Mostrar reporte
void mostrarReporte(const vector<string> &nombres, int bodega[3][3])
{
    for(int i = 0; i < nombres.size(); i++)
    {
        cout << nombres[i] << " -> ";
        for(int j = 0; j < 3; j++)
        {
            cout << bodega[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    srand(time(NULL));

    vector<string> productos = {"Laptop", "Mouse", "Teclado"};

    int bodega[3][3];

    int totalTransferido = 0;

    // Inicializar
    inicializarInventario(bodega);

    // Balancear cada producto
    for(int i = 0; i < 3; i++)
    {
        balancearCarga(bodega, i, totalTransferido);
    }

    // Mostrar resultado
    cout << "Reporte de Inventario:\n";
    mostrarReporte(productos, bodega);

    cout << "\nTotal transferido: " << totalTransferido << endl;

    return 0;
}

// Tu función de aleatorios
int GenerarAleatorio(int LimInferior, int Limsuperior)
{
    int aleatorio=0;
    aleatorio= (rand() % (Limsuperior - LimInferior +1)) + LimInferior;
    return aleatorio;
}