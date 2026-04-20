// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carnet: 9870105
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 20/04/2026

#include <iostream>
#include <vector>
#include <string>

using namespace std;

void Interseccion(vector<string> v1, vector<string> v2)
{
    for(int i = 0; i < v1.size(); i++)
    {
        for(int j = 0; j < v2.size(); j++)
        {
            if(v1[i] == v2[j])
            {
                cout << v1[i] << endl;
            }
        }
    }
}

int main()
{
    vector<string> grupo1 = {"Valeria", "Yara", "Andres", "Lucas"};
    vector<string> grupo2 = {"Lucas", "Carlos", "Yara", "Pedro"};

    cout << "--- Nombres en comun ---" << endl;
    Interseccion(grupo1, grupo2);

    return 0;
}