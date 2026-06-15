// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carnet: 9870105
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 13/05/2026
#include <iostream>
#include <vector>

using namespace std;

bool sonIguales(const vector<int>& v1, const vector<int>& v2, int n) 
{
    if (n == 0) return true;
  
    if (v1[n - 1] != v2[n - 1]) return false; 
    
    return sonIguales(v1, v2, n - 1); 
}

int main() 
{
    vector<int> a = {1, 2, 3, 4};
    vector<int> b = {1, 2, 3, 4};
    
    if (a.size() == b.size() && sonIguales(a, b, a.size())) 
    {
        cout << "Los vectores son iguales." << endl;
    }
     else 
     {
        cout << "Los vectores son diferentes." << endl;
    }
    
    return 0;
}
