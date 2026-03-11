#include <iostream>
using namespace std;

float areaTriangulo(float base, float altura)
{
    float area;
    area = (base * altura) / 2;
    return area;
}

int main()
{
    float base, altura, area;

    cout << "Ingrese la base: ";
    cin >> base;

    cout << "Ingrese la altura: ";
    cin >> altura;

    area = areaTriangulo(base, altura);

    cout << "El area del triangulo es: " << area << endl;

    return 0;
}