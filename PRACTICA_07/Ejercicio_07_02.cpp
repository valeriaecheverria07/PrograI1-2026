// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carnet: 9870105
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 13/04/2026

#include <iostream>
#include <vector>
using namespace std;

vector<double> cargarVoltios() {
    vector<double> v = {11.95,   16.32,   12.15,   8.22,   15.98,   26.22,   13.54,   6.45,   17.59};
    return v;
}

void mostrarVoltios(vector<double> v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << "   ";
        
        if ((i + 1) % 3 == 0) {
            cout << endl;
        }
    }
}

int main() {
    vector<double> voltios = cargarVoltios();

    mostrarVoltios(voltios);

    return 0;
}