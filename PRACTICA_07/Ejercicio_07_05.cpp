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

vector<int> combinarVectores(vector<int> v1, vector<int> v2) {
    vector<int> combinado;

    for (int i = 0; i < v1.size(); i++) {
        combinado.push_back(v1[i]);
    }

    for (int i = 0; i < v2.size(); i++) {
        combinado.push_back(v2[i]);
    }

    return combinado;
}

void mostrar(vector<int> v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;

    cout << "Ingrese tamaño de los vectores: ";
    cin >> n;

    cout << "\nVector 1:\n";
    vector<int> v1 = cargarVector(n);

    cout << "\nVector 2:\n";
    vector<int> v2 = cargarVector(n);

    vector<int> resultado = combinarVectores(v1, v2);

    cout << "\nVector combinado:\n";
    mostrar(resultado);

    return 0;
}