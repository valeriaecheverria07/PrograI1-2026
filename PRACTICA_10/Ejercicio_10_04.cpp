// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carnet: 9870105
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 15/04/2026
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

// Funcion
void analizarClima(float datos[4][7], int ciudadIdx, float &maxima, float &minima, float &promedio)
{
    float suma = 0;

    maxima = datos[ciudadIdx][0];
    minima = datos[ciudadIdx][0];

    for(int i = 0; i < 7; i++)
    {
        if(datos[ciudadIdx][i] > maxima)
            maxima = datos[ciudadIdx][i];

        if(datos[ciudadIdx][i] < minima)
            minima = datos[ciudadIdx][i];

        suma += datos[ciudadIdx][i];
    }

    promedio = suma / 7;
}

int main()
{
    srand(time(NULL));

    string ciudades[4] = {"LaPaz", "Cochabamba", "SantaCruz", "Oruro"};
    float temperaturas[4][7];

    // Llenar matriz con valores aleatorios (ej: 5 a 30 grados)
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 7; j++)
        {
            temperaturas[i][j] = rand() % 26 + 5;
        }
    }

    string ciudadBuscada;
    int indice = -1;

    cout << "Ingrese el nombre de la ciudad: ";
    cin >> ciudadBuscada;

    // Buscar índice
    for(int i = 0; i < 4; i++)
    {
        if(ciudades[i] == ciudadBuscada)
        {
            indice = i;
        }
    }

    if(indice == -1)
    {
        cout << "Ciudad no encontrada" << endl;
        return 0;
    }

    float max, min, prom;

    analizarClima(temperaturas, indice, max, min, prom);

    cout << "\nResultados para " << ciudadBuscada << ":\n";
    cout << "Maxima: " << max << endl;
    cout << "Minima: " << min << endl;
    cout << "Promedio: " << prom << endl;

    return 0;
}
