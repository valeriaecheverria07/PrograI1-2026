// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carnet: 9870105
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 13/04/2026

#include <iostream>
using namespace std;

double CalcularPrecioTotal(double precioBase, double impuesto = 0.13)
{
    double total;
    total = precioBase + (precioBase * impuesto);
    return total;
}

int main()
{
    double precio, impuesto, resultado;

    cout << "Ingrese el precio base: ";
    cin >> precio;

    resultado = CalcularPrecioTotal(precio);
    cout << "Precio con IVA (13%): " << resultado << endl;

    cout << "Ingrese otro impuesto: ";
    cin >> impuesto;

    resultado = CalcularPrecioTotal(precio, impuesto);
    cout << "Precio con impuesto personalizado: " << resultado << endl;

    return 0;
}