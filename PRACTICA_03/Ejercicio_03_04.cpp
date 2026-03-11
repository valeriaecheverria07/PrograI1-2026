#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int N;
    int numero;
    int suma = 0;
    int mayor = 0;
    int menor = 1000;

    srand(time(0));

    cout << "Cuantos numeros desea generar?: ";
    cin >> N;

    for(int i = 1; i <= N; i++)
    {
        numero = rand() % 1000 + 1;

        cout << "Numero " << i << ": " << numero << endl;

        suma += numero;

        if(numero > mayor)
            mayor = numero;

        if(numero < menor)
            menor = numero;
    }

    float promedio = (suma * 1.0) / N;

    cout << "\nSumatoria: " << suma << endl;
    cout << "Promedio: " << promedio << endl;
    cout << "Mayor valor: " << mayor << endl;
    cout << "Menor valor: " << menor << endl;

    return 0;
}