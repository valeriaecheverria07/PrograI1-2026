// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carnet: 9870105
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 13/04/2026

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> cargarCalificaciones(int n) {
    vector<int> v;
    int num;
    for (int i = 0; i < n; i++) {
        cout << "Ingrese calificacion " << i + 1 << ": ";
        cin >> num;
        v.push_back(num);
    }
    return v;
}

int suma(vector<int> v) {
    int s = 0;
    for (int i = 0; i < v.size(); i++) {
        s += v[i];
    }
    return s;
}

double promedio(vector<int> v) {
    return (double)suma(v) / v.size();
}

vector<double> calcularDesviaciones(vector<int> v, double prom) {
    vector<double> d;
    for (int i = 0; i < v.size(); i++) {
        d.push_back(v[i] - prom);
    }
    return d;
}

double varianza(vector<double> d) {
    double suma = 0;
    for (int i = 0; i < d.size(); i++) {
        suma += pow(d[i], 2);
    }
    return suma / d.size();
}

void mostrar(vector<int> v, vector<double> d) {
    cout << "\nCalificacion   Desviacion\n";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << "           " << d[i] << endl;
    }
}

int main() {
    int n;
    cout << "Ingrese cantidad de datos: ";
    cin >> n;

    vector<int> calificaciones = cargarCalificaciones(n);

    double prom = promedio(calificaciones);
    vector<double> desviaciones = calcularDesviaciones(calificaciones, prom);
    double var = varianza(desviaciones);

    cout << "\nSuma: " << suma(calificaciones) << endl;
    cout << "Promedio: " << prom << endl;

    mostrar(calificaciones, desviaciones);

    cout << "\nVarianza: " << var << endl;

    return 0;
}