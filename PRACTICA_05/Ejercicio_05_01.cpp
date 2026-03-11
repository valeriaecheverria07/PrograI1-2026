// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carnet: 9870105
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 11/03/2026

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int n;
    float precio;
    float total = 0;
    float totalIVA = 0;

    srand(time(0));

    cout << "Ingrese la cantidad de productos vendidos: ";
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        precio = rand() % 31 + 20;

        cout << "Producto " << i << " precio: " << precio << endl;

        total = total + precio;
        totalIVA = totalIVA + (precio * 0.13);
    }

    if(total > 2500)
    {
        float descuento = total * 0.05;
        total = total - descuento;
    }

    cout << "\nTotal de ventas: " << total << endl;
    cout << "IVA a pagar (13%): " << totalIVA << endl;

    return 0;
}