// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carnet: 9870105
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 20/04/2026

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    string oracion;
    cout << "Ingrese oracion: ";
    getline(cin, oracion);

    vector<string> palabras;
    string palabra = "";

    for(int i = 0; i < oracion.length(); i++)
    {
        if(oracion[i] == ' ')
        {
            palabras.push_back(palabra);
            palabra = "";
        }
        else
        {
            palabra += oracion[i];
        }
    }

    palabras.push_back(palabra); 

    for(int i = palabras.size() - 1; i >= 0; i--)
    {
        cout << palabras[i] << " ";
    }

    return 0;
}