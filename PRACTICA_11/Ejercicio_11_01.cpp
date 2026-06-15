// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carnet: 9870105
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 13/05/2026
#include <iostream>
using namespace std;

int sumaDigitos(int n) 
{
    if (n == 0) return 0;
     
    return (n % 10) + sumaDigitos(n / 10); 
}

int main() 
{
    int num;
    
    cout << "Ingrese un numero entero positivo: ";
    cin >> num;
    
    cout << "La suma de los digitos es: " << sumaDigitos(num) << endl; 
    
    return 0;
}
