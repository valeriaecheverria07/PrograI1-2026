// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carnet: 9870105
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 15/04/2026
#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Funcion
void limpiarBitacora(vector<string> &registros, char caracterProhibido, int &correccionesRealizadas)
{
    correccionesRealizadas = 0;

    for(int i = 0; i < registros.size(); i++)
    {
        string limpio = "";

        for(int j = 0; j < registros[i].length(); j++)
        {
            if(registros[i][j] == caracterProhibido)
            {
                correccionesRealizadas++; // se encontró error
            }
            else
            {
                limpio += registros[i][j]; // se guarda caracter válido
            }
        }

        registros[i] = limpio; // reemplaza el original
    }
}

int main()
{
    vector<string> registros = {
        "Valeria#",
        "Ya#ra",
        "An#dres",
        "Gabriela",
        "Lu#cas"
    };

    char prohibido = '#';
    int correcciones;

    // Antes
    cout << "Antes de limpiar:\n";
    for(int i = 0; i < registros.size(); i++)
    {
        cout << registros[i] << endl;
    }

    // Limpiar
    limpiarBitacora(registros, prohibido, correcciones);

    // Después
    cout << "\nDespues de limpiar:\n";
    for(int i = 0; i < registros.size(); i++)
    {
        cout << registros[i] << endl;
    }

    cout << "\nCorrecciones realizadas: " << correcciones << endl;

    return 0;
}