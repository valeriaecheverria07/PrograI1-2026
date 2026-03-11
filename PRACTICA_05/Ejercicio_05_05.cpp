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

    int sistemas=0, diseno=0, mecatronica=0, innovacion=0;
    int sem2=0, sem3=0, sem4=0, sem5=0;

    int totalRecaudado=0;

    for(int i=1;i<=n;i++)
    {
        int carrera = rand()%4 + 1;
        int semestre = rand()%4 + 2;
        int materias = rand()%4 + 3;

        int pago = materias * 525;

        totalRecaudado = totalRecaudado + pago;

        switch(carrera)
        {
            case 1: sistemas++; break;
            case 2: diseno++; break;
            case 3: mecatronica++; break;
            case 4: innovacion++; break;
        }

        switch(semestre)
        {
            case 2: sem2 += materias; break;
            case 3: sem3 += materias; break;
            case 4: sem4 += materias; break;
            case 5: sem5 += materias; break;
        }
    }

    cout<<"\nESTUDIANTES POR CARRERA"<<endl;
    cout<<"Ing Sistemas: "<<sistemas<<endl;
    cout<<"Diseno Digital: "<<diseno<<endl;
    cout<<"Ing Mecatronica: "<<mecatronica<<endl;
    cout<<"Ing Innovacion Empresarial: "<<innovacion<<endl;

    cout<<"\nMATERIAS POR SEMESTRE"<<endl;
    cout<<"2do semestre: "<<sem2<<endl;
    cout<<"3er semestre: "<<sem3<<endl;
    cout<<"4to semestre: "<<sem4<<endl;
    cout<<"5to semestre: "<<sem5<<endl;

    cout<<"\nTOTAL RECAUDADO: "<<totalRecaudado<<" Bs"<<endl;

    return 0;
}