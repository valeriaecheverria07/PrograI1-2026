// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carnet: 9870105
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 20/04/2026

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <vector>

using namespace std;

int GenerarAleatorio(int LimInferior, int Limsuperior)
{
    return (rand() % (Limsuperior - LimInferior + 1)) + LimInferior;
}

int main()
{
    vector<string> Nombres ={"Valeria", "Yara", "Andres", "Gabriela", "Lucas", "Khana", "Austin", "Carlos", "Jhoel", "Mike"};
    vector<string> Apellidos ={"Echeverria", "Merida", "Rocha", "Ortega", "Miranda", "Espada", "Ortiz", "Aguirre", "Davila", "Mendez"};
    vector<int> Edades = {18, 20, 22, 19, 21, 23, 24, 25, 26, 27};

    srand(time(NULL));
    system("cls");

    int pos = GenerarAleatorio(0, Nombres.size() - 1);

    cout << "Persona aleatoria " << endl;
    cout << "Nombre: " << Nombres[pos] << endl;
    cout << "Apellido: " << Apellidos[pos] << endl;
    cout << "Edad: " << Edades[pos] << endl;

    return 0;
}