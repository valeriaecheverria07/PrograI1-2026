// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carnet: 9870105
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 20/04/2026

#include <iostream>
#include <string>

using namespace std;

string EliminarDigitos(string texto)
{
    string resultado = "";

    for(int i = 0; i < texto.length(); i++)
    {
        if(!(texto[i] >= '0' && texto[i] <= '9'))
        {
            resultado += texto[i];
        }
    }

    return resultado;
}

int main()
{
    string texto;
    cout << "Ingrese texto: ";
    cin >> texto;

    string limpio = EliminarDigitos(texto);

    cout << "Resultado: " << limpio << endl;

    return 0;
}