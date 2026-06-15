// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carnet: 9870105
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 13/05/2026
#include <iostream>

using namespace std;

int mcd(int a, int b) 
{
    if (b == 0) return a; 
    
    return mcd(b, a % b); 
}

int main() 
{
    int x, y;
    
    cout << "Ingrese dos numeros para hallar el MCD: ";
     cin >> x >> y;
     
    cout << "El MCD es: " << mcd(x, y) << endl;
    
    return 0;
}
