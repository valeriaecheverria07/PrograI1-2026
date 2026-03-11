#include <iostream>
using namespace std;

const float PI = 3.1416;

float volumenCilindro(float radio, float altura)
{
    float volumen;
    volumen = PI * radio * radio * altura;
    return volumen;
}

int main()
{
    float radio, altura, volumen;

    cout << "Ingrese el radio del cilindro: ";
    cin >> radio;

    cout << "Ingrese la altura del cilindro: ";
    cin >> altura;

    volumen = volumenCilindro(radio, altura);

    cout << "El volumen del cilindro es: " << volumen << endl;

    return 0;
}