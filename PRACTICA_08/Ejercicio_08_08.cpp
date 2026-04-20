// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carnet: 9870105
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 20/04/2026

#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> Separar(string texto, char delimitador)
{
    vector<string> tokens;
    string palabra = "";

    for(int i = 0; i < texto.length(); i++)
    {
        if(texto[i] == delimitador)
        {
            tokens.push_back(palabra);
            palabra = "";
        }
        else
        {
            palabra += texto[i];
        }
    }

    tokens.push_back(palabra); 
    return tokens;
}

int main()
{
    string texto = "Esto,es,una,cadena,separada,por,comas";
    char delimitador = ',';

    vector<string> resultado = Separar(texto, delimitador);

    for(int i = 0; i < resultado.size(); i++)
    {
        cout << resultado[i] << endl;
    }

    return 0;
}