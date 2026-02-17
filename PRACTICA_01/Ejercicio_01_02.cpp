// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carnet: 9870105
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 16/02/2026

#include <iostream>
using namespace std;
int main()
 {
    float precio, precioFinal;
    system("cls");
    cout << "Ingrese el precio del producto: "<<endl;
    cin >> precio;
    precioFinal = precio+(precio * 0.13);
    cout << "El precio con IVA (13%) es: "<<precioFinal<< endl;
    return 0;
}