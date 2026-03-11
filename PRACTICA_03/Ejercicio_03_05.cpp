#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int N;
    int numero;
    int contadorPrimos = 0;

    srand(time(0));

    cout << "Cuantos numeros desea generar?: ";
    cin >> N;

    for(int i = 1; i <= N; i++)
    {
        numero = rand() % 10000 + 1;

        cout << "Numero " << i << ": " << numero << endl;

        int divisores = 0;

        for(int j = 1; j <= numero; j++)
        {
            if(numero % j == 0)
            {
                divisores++;
            }
        }

        if(divisores == 2)
        {
            contadorPrimos++;
        }
    }

    cout << "\nCantidad de numeros primos: " << contadorPrimos << endl;

    return 0;
}