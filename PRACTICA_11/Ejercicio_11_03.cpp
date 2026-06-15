// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carnet: 9870105
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 13/05/2026
#include <iostream>

using namespace std;

int fibonacci(int n) 
{
    if (n == 0) return 0; 
    
    if (n == 1) return 1; 
    
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() 
{
    int n;
    
    cout << "Enesimo numero de Fibonacci a calcular: "; 
    cin >> n;
    
    cout << "El numero en la posicion " << n << " es: " << fibonacci(n) << endl;
    
    return 0;
}
