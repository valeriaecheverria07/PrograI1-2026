// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carnet: 9870105
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 13/05/2026
#include <iostream>

using namespace std;

long potencia(int a, int n) 
{
    if (n == 0) return 1; 
    
    return a * potencia(a, n - 1); 
}

int main()
{
    int base, exp;
    
    cout << "Base a: "; cin >> base;
    cout << "Exponente n: "; cin >> exp;
    cout << "Resultado: " << potencia(base, exp) << endl;
    
    return 0;
}
