// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carnet: 9870105
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 13/04/2026

#include <iostream>
#include <vector>
using namespace std;

vector<int> cargarVector(int n) {
    vector<int> v;
    int num;
    for (int i = 0; i < n; i++) {
        cout << "Ingrese elemento " << i + 1 << ": ";
        cin >> num;
        v.push_back(num);
    }
    return v;
}

vector<int> multiplicarVectores(vector<int> v1, vector<int> v2) {
    vector<int> resultado;
    for (int i = 0; i < v1.size(); i++) {
        resultado.push_back(v1[i] * v2[i]);
    }
    return resultado;
}

void mostrar(vector<int> v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Ingrese tamaño del vector: ";
    cin >> n;

    cout << "\nVector 1:\n";
    vector<int> v1 = cargarVector(n);

    cout << "\nVector 2:\n";
    vector<int> v2 = cargarVector(n);

    vector<int> resultado = multiplicarVectores(v1, v2);

    cout << "\nResultado (multiplicacion elemento a elemento):\n";
    mostrar(resultado);

    return 0;
}