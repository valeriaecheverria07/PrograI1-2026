// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carnet: 9870105
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 13/04/2026

#include <iostream>
#include <vector>
using namespace std;

vector<int> cargarVector() {
    vector<int> v;
    int num;
    for (int i = 0; i < 5; i++) {
        cout << "Ingrese elemento " << i + 1 << ": ";
        cin >> num;
        v.push_back(num);
    }
    return v;
}

vector<int> sumarVectores(vector<int> v1, vector<int> v2) {
    vector<int> v3;
    for (int i = 0; i < 5; i++) {
        v3.push_back(v1[i] + v2[i]);
    }
    return v3;
}

void mostrar(vector<int> v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {
    cout << "Vector 1:\n";
    vector<int> vector1 = cargarVector();

    cout << "\nVector 2:\n";
    vector<int> vector2 = cargarVector();

    vector<int> vector3 = sumarVectores(vector1, vector2);

    cout << "\nVector 3 (suma):\n";
    mostrar(vector3);

    return 0;
}