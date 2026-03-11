#include <iostream>
using namespace std;

float calcularPromedio(float nota1, float nota2)
{
    float promedio;
    promedio = (nota1 + nota2) / 2;
    return promedio;
}

int main()
{
    float n1, n2, prom;

    cout << "Ingrese la primera nota: ";
    cin >> n1;

    cout << "Ingrese la segunda nota: ";
    cin >> n2;

    prom = calcularPromedio(n1, n2);

    cout << "El promedio es: " << prom << endl;

    return 0;
}