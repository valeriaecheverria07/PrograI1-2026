#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int n;
    int moneda;
    int contadorCara = 0;
    int contadorCruz = 0;
    system ("cls");
    srand(time(0));
    cout<<"Cuantas veces quiere lanzar la moneda?: ";
    cin>>n;
    for(int i = 1; i <= n; i++)
    {
        moneda=rand() % 2;

        if(moneda == 0)
        {
            cout<<"Lanzamiento "<<i<<": Cara"<<endl;
            contadorCara++;
        }
        else
        {
            cout<<"Lanzamiento "<<i<<": Cruz"<< endl;
            contadorCruz++;
        }
    }

    float porcentajeCara=(contadorCara * 100.0) / n;
    float porcentajeCruz=(contadorCruz * 100.0) / n;

    cout<<"Porcentaje de caras: "<<porcentajeCara<<"%"<<endl;
    cout<<"Porcentaje de cruz: "<<porcentajeCruz<<"%"<<endl;
    return 0;
}