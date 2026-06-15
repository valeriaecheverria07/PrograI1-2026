// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carnet: 9870105
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 15/04/2026
#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Mostrar la sala
void mostrarSala(char sala[10][10])
{
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            cout << sala[i][j] << " ";
        }
        cout << endl;
    }
}

// Función principal
void asignarAsientoEspecial(char sala[10][10], vector<string> &espera, int fila, int col, bool &exito)
{
    exito = false;

    if(sala[fila][col] == 'D' && espera.size() > 0)
    {
        sala[fila][col] = 'R';

        cout << "Asiento asignado a: " << espera[0] << endl;

        espera.erase(espera.begin());

        exito = true;
    }
}

int main()
{
    char sala[10][10];
    vector<string> listaEspera = {"Valeria", "Yara", "Andres", "Gabriela"};

    // Inicializar sala en Disponible
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            sala[i][j] = 'D';
        }
    }

    int fila, col;
    bool exito;

    // Mostrar antes
    cout << "Sala antes:\n";
    mostrarSala(sala);

    cout << "\nIngrese fila (0-9): ";
    cin >> fila;

    cout << "Ingrese columna (0-9): ";
    cin >> col;

    asignarAsientoEspecial(sala, listaEspera, fila, col, exito);

    if(exito)
        cout << "Reserva realizada con exito\n";
    else
        cout << "No se pudo reservar el asiento\n";

    // Mostrar después
    cout << "\nSala despues:\n";
    mostrarSala(sala);

    return 0;
}