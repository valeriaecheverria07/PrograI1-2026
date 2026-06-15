// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carnet: 9870105
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 13/05/2026
#include <iostream>

using namespace std;

void ullman(int n) 
{
    cout << n << " "; 
    
    if (n == 1) return; 
    
    if (n % 2 == 0) 
    {
        ullman(n / 2); 
    } 
    else 
    {
        ullman((n * 3) + 1); 
    }
}

int main() 
{
    int n;
    
    cout << "Ingrese un numero entero (n > 1): "; 
    cin >> n;
    cout << "Secuencia de Ullman: ";
    
    ullman(n);
    
    cout << endl;
    
    return 0;
}
