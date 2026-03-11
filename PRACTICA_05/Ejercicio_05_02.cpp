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
    float sueldoBasico;
    float precio;
    float totalVentas;
    float comision;
    float sueldoTotal;

    srand(time(0));

    cout << "Ingrese la cantidad de vendedoras: ";
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        cout << "\nVendedora " << i << endl;

        cout << "Ingrese sueldo basico: ";
        cin >> sueldoBasico;

        totalVentas = 0;

        for(int j = 1; j <= 10; j++)
        {
            precio = rand() % 81 + 20;

            cout << "Producto " << j << ": " << precio << endl;

            totalVentas = totalVentas + precio;
        }

        comision = totalVentas * 0.10;

        sueldoTotal = sueldoBasico + comision;

        cout << "Total vendido: " << totalVentas << endl;
        cout << "Comision (10%): " << comision << endl;
        cout << "Sueldo total a pagar: " << sueldoTotal << endl;
    }

    return 0;
}