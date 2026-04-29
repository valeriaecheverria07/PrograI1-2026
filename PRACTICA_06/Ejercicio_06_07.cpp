// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carnet: 9870105
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 13/04/2026

#include <iostream>
using namespace std;

void agregarNota(double &sumaTotal, int &cantidadNotas, double nuevaNota)
{
    sumaTotal += nuevaNota;
    cantidadNotas++;
}

int main()
{
    double suma = 0, nota;
    int cantidad = 0, N;

    cout << "Cuantas notas desea ingresar: ";
    cin >> N;

    for(int i = 0; i < N; i++)
    {
        cout << "Ingrese nota: ";
        cin >> nota;

        agregarNota(suma, cantidad, nota);
    }

    cout << "Suma total: " << suma << endl;
    cout << "Cantidad de notas: " << cantidad << endl;

    if(cantidad > 0)
        cout << "Promedio: " << suma / cantidad << endl;

    return 0;
}