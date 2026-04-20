// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carnet: 9870105
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 20/04/2026

#include <iostream>
#include <string>
using namespace std;

string MayusculasIniciales(string texto)
{
    for(int i = 0; i < texto.length(); i++)
    {
        if(i == 0 || texto[i-1] == ' ')
        {
            if(texto[i] >= 'a' && texto[i] <= 'z')
            {
                texto[i] = texto[i] - 32; 
            }
        }
    }

    return texto;
}

int main()
{
    string texto;
    cout << "Ingrese texto: ";
    getline(cin, texto);

    string resultado = MayusculasIniciales(texto);

    cout << "Resultado: " << resultado << endl;

    return 0;
}