#include <iostream>
using namespace std;

bool esPar(int numero)
{
    if(numero % 2 == 0)
        return true;
    else
        return false;
}

int main()
{
    int num;

    cout << "Ingrese un numero: ";
    cin >> num;

    if(esPar(num))
        cout << "El numero es par" << endl;
    else
        cout << "El numero es impar" << endl;

    return 0;
}