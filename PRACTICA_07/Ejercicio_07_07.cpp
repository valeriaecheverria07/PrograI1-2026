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

    for (int i = 0; i < 10; i++) {
        cout << "Ingrese numero: ";
        cin >> num;

        if (num < 0) {
            break; // detener si es negativo
        }

        v.push_back(num);
    }

    return v;
}

void mostrar(vector<int> v) {
    cout << "\nElementos ingresados:\n";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> datos = cargarVector();

    mostrar(datos);

    return 0;
}