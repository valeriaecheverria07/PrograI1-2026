#include <iostream>
using namespace std;

int contarDigitos(int numero)
{
    int contador = 0;

    while(numero > 0)
    {
        numero = numero / 10;
        contador++;
    }

    return contador;
}

int main()
{
    int num, digitos;

    cout << "Ingrese un numero entero positivo: ";
    cin >> num;

    digitos = contarDigitos(num);

    cout << "La cantidad de digitos es: " << digitos << endl;

    return 0;
}