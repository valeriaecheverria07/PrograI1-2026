#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    int numero;
    int factorial = 1;
    system ("cls");
    srand(time(0));
    numero = rand() % 10 + 1;
    cout<<"Numero generado: "<<numero<<endl;

    for(int i = 1; i <= numero; i++)
    {
        factorial=factorial * i;
    }

    cout<<"Factorial de "<<numero<<" es: "<<factorial<<endl;
    return 0;
}