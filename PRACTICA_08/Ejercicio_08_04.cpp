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

    int N;
    cout << "Cantidad de pixeles: ";
    cin >> N;

    vector<int> pixeles(N);
    vector<int> conteo(26, 0);

    for(int i = 0; i < N; i++)
    {
        pixeles[i] = GenerarAleatorio(0, 99); 
        cout << pixeles[i] << " ";

        int rango = pixeles[i] / 10;
        conteo[rango]++;
    }

    cout << "\n\n--- Rangos ---\n";

    for(int i = 0; i < 26; i++)
    {
        if(conteo[i] > 0)
        {
            int inicio = i * 10;
            int fin = inicio + 9;

            if(i == 25) fin = 255;

            cout << inicio << "-" << fin << ": " << conteo[i] << " pixeles" << endl;
        }
    }

    return 0;
}