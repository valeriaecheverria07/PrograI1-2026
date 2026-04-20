// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carnet: 9870105
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 20/04/2026

#include <iostream>
#include <string>
using namespace std;

bool EsPalindromo(string texto)
{
    string limpio = "";

    for(int i = 0; i < texto.length(); i++)
    {
        if((texto[i] >= 'A' && texto[i] <= 'Z') ||
           (texto[i] >= 'a' && texto[i] <= 'z'))
        {
            limpio += tolower(texto[i]);
        }
    }

    int inicio = 0;
    int fin = limpio.length() - 1;

    while(inicio < fin)
    {
        if(limpio[inicio] != limpio[fin])
        {
            return false;
        }
        inicio++;
        fin--;
    }

    return true;
}

int main()
{
    string texto;
    cout << "Ingrese texto: ";
    getline(cin, texto);

    if(EsPalindromo(texto))
        cout << "Es palindromo";
    else
        cout << "No es palindromo";

    return 0;
}