#include <iostream>
using namespace std;

float calcularDistancia(float velocidad, float tiempo)
{
    float distancia;
    distancia = velocidad * tiempo;
    return distancia;
}

int main()
{
    float v, t, d;

    cout << "Ingrese la velocidad: ";
    cin >> v;

    cout << "Ingrese el tiempo: ";
    cin >> t;

    d = calcularDistancia(v, t);

    cout << "La distancia recorrida es: " << d << endl;

    return 0;
}