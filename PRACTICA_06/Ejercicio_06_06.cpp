// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carnet: 9870105
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 13/04/2026

#include <iostream>
using namespace std;

void calcularTiempo(int totalSegundos, int &horas, int &minutos, int &segundos)
{
    horas = totalSegundos / 3600;
    totalSegundos = totalSegundos % 3600;

    minutos = totalSegundos / 60;
    segundos = totalSegundos % 60;
}

int main()
{
    int total, h, m, s;

    cout << "Ingrese el total de segundos: ";
    cin >> total;

    calcularTiempo(total, h, m, s);

    cout << "Tiempo convertido:" << endl;
    cout << "Horas: " << h << endl;
    cout << "Minutos: " << m << endl;
    cout << "Segundos: " << s << endl;

    return 0;
}