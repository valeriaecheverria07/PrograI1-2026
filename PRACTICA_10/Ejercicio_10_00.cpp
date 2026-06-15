// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carnet: 9870105
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 15/04/2026
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <vector>

using namespace std;
int GenerarAleatorio(int LimInferior, int Limsuperior);

int main()
{
    vector<string> Nombres ={"Valeria", "Yara", "Andres", "Gabriela", "Lucas", "Khana", "Austin", "Carlos", "Jhoel", "Mike"};
    vector<string> Apellidos ={"Echeverria", "Merida", "Rocha", "Ortega", "Miranda", "Espada", "Ortiz", "Aguirre", "Davila", "Mendez"};
    int posN;
    int posA;
    int posA2;
    srand(time(NULL));
    system("cls");
    int N;
    cout << "Cuantos nombres quieres generar? "<<endl;
    cin >> N;
    for(int i = 0; i < N; i++)
    {
        posN = GenerarAleatorio(0, Nombres.size() - 1);
        posA = GenerarAleatorio(0, Apellidos.size() - 1);
        posA2 = GenerarAleatorio(0, Apellidos.size() - 1);

        cout << Nombres[posN] << " " << Apellidos[posA]<< " " << Apellidos[posA2] << endl;
    }

    return 0;
}

int GenerarAleatorio(int LimInferior, int Limsuperior)
{
    int aleatorio=0;
    aleatorio= (rand() % (Limsuperior - LimInferior +1)) + LimInferior;
    return aleatorio;
}