// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carnet: 9870105
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 11/03/2026

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));

    int n;
    cout<<"Ingrese cantidad de estudiantes: ";
    cin>>n;

    int totalGeneral = 0;

    for(int i=1; i<=n; i++)
    {
        int materias = rand()%7 + 2;

        int totalEstudiante = 0;

        cout<<"\nEstudiante "<<i<<endl;

        for(int j=1; j<=materias; j++)
        {
            int tipo = rand()%3 + 1;
            int creditos;

            if(tipo==1)
                creditos = 3;
            else if(tipo==2)
                creditos = 6;
            else
                creditos = 5;

            int pago = creditos * 350;

            totalEstudiante += pago;
        }

        cout<<"Pago del estudiante: "<<totalEstudiante<<" Bs"<<endl;

        totalGeneral += totalEstudiante;
    }

    cout<<"\nTOTAL QUE RECIBE LA UCB: "<<totalGeneral<<" Bs"<<endl;

    return 0;
}