// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carnet: 9870105
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 20/04/2026

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int GenerarAleatorio(int LimInferior, int LimSuperior)
{
    return (rand() % (LimSuperior - LimInferior + 1)) + LimInferior;
}

int main()
{
    srand(time(NULL));

    int cantidadEstudiantes;
    cout << "Cantidad de estudiantes: ";
    cin >> cantidadEstudiantes;

    vector<int> notas(cantidadEstudiantes);

    int reprobado = 0, regular = 0, bueno = 0, excelente = 0;

    // Llenado + conteo
    for(int i = 0; i < cantidadEstudiantes; i++)
    {
        notas[i] = GenerarAleatorio(0, 100);
        cout << "Nota " << i+1 << ": " << notas[i] << endl;

        if(notas[i] <= 59) reprobado++;
        else if(notas[i] <= 79) regular++;
        else if(notas[i] <= 89) bueno++;
        else excelente++;
    }

    cout << "\n--- Resultados ---\n";
    cout << "Reprobado: " << (reprobado * 100.0) / cantidadEstudiantes << "%\n";
    cout << "Regular: " << (regular * 100.0) / cantidadEstudiantes << "%\n";
    cout << "Bueno: " << (bueno * 100.0) / cantidadEstudiantes << "%\n";
    cout << "Excelente: " << (excelente * 100.0) / cantidadEstudiantes << "%\n";

    return 0;
}