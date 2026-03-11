// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carnet: 9870105
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 11/03/2026

#include <iostream>
using namespace std;

int sumaNaturales(int N)
{
    int suma = 0;

    for(int i = 1; i <= N; i++)
    {
        suma = suma + i;
    }

    return suma;
}

int main()
{
    int N;
    int resultado;

    cout << "Ingrese un numero entero positivo: ";
    cin >> N;

    resultado = sumaNaturales(N);

    cout << "La suma de los numeros desde 1 hasta " << N << " es: " << resultado << endl;

    return 0;
}