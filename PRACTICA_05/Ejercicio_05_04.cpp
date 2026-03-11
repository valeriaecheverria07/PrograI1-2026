// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carnet: 9870105
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 11/03/2026

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void promocion(int dinero, int tipo)
{
    int precio, regalo;

    switch(tipo)
    {
        case 1: precio=10; regalo=5; break;
        case 2: precio=20; regalo=10; break;
        case 3: precio=30; regalo=15; break;
        case 4: precio=50; regalo=25; break;
        case 5: precio=100; regalo=50; break;
        case 6: precio=200; regalo=100; break;
    }

    int tarjetas = dinero / precio;
    int cambio = dinero % precio;
    int ahorro = tarjetas * regalo;

    cout<<"Dinero del cliente: "<<dinero<<endl;
    cout<<"Tipo de tarjeta: "<<precio<<" Bs"<<endl;
    cout<<"Tarjetas que compra: "<<tarjetas<<endl;
    cout<<"Credito de regalo total: "<<ahorro<<endl;
    cout<<"Cambio que sobra: "<<cambio<<endl;
}

int main()
{
    srand(time(0));

    int n;

    cout<<"Ingrese cantidad de clientes: ";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        int dinero = rand()%991 + 10;
        int tipo = rand()%6 + 1;

        cout<<"\nCliente "<<i<<endl;

        promocion(dinero,tipo);
    }

    return 0;
}