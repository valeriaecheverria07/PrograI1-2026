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

void procesarResultados(const vector<string> &nombres,
                        vector<double> &notas,
                        double &promedio,
                        int &aprobados)
{
    double suma = 0;
    aprobados = 0;

    for(int i = 0; i < notas.size(); i++)
    {
        if(notas[i] >= 45 && notas[i] <= 50)
        {
            notas[i] = 51;
        }

        suma += notas[i];

        if(notas[i] >= 51)
        {
            aprobados++;
        }
    }

    promedio = suma / notas.size();
}

int main()
{
    vector<string> NombresEstudiantes={"Valeria", "Yara", "Andres", "Gabriela", "Lucas", "Khana", "Austin", "Carlos", "Jhoel", "Mike"}; 
    vector<string> ApellidoEstudiantes={"Echeverria", "Merida", "Rocha", "Ortega", "Miranda", "Espada", "Ortiz", "Aguirre", "Davila"};

    vector<string> nombresGenerados;
    vector<double> notas;

    int N;
    int PosN, PosA, PosA2;
    int nota;

    srand(time(NULL));

    cout<<"Cuantos estudiantes quiere generar? "<<endl;
    cin>>N;

    for (int i = 0; i < N; i++)
    {
        PosN = GenerarAleatorio(0, NombresEstudiantes.size()-1);
        PosA = GenerarAleatorio(0, ApellidoEstudiantes.size()-1);
        PosA2 = GenerarAleatorio(0, ApellidoEstudiantes.size()-1);

        nota = GenerarAleatorio(33,100);

        string nombreCompleto = NombresEstudiantes[PosN] + " " + 
                                ApellidoEstudiantes[PosA] + " " + 
                                ApellidoEstudiantes[PosA2];

        nombresGenerados.push_back(nombreCompleto);
        notas.push_back(nota);
    }

    double promedio;
    int aprobados;

    procesarResultados(nombresGenerados, notas, promedio, aprobados);

    cout << "\nLista actualizada:\n";
    for(int i = 0; i < nombresGenerados.size(); i++)
    {
        cout << nombresGenerados[i] << " - " << notas[i] << endl;
    }

    cout << "\nPromedio: " << promedio << endl;
    cout << "Aprobados: " << aprobados << endl;

    return 0;
}

int GenerarAleatorio(int LimInferior, int Limsuperior)
{
    int aleatorio=0;
    aleatorio= (rand() % (Limsuperior - LimInferior +1)) + LimInferior;
    return aleatorio;
}