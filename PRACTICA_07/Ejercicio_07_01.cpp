// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carnet: 9870105
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 13/04/2026

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

double aleatorioDouble(double min, double max) {
    return min + (double)rand() / RAND_MAX * (max - min);
}

int aleatorioInt(int min, int max) {
    return min + rand() % (max - min + 1);
}

vector<double> generarVoltajes() {
    vector<double> v;
    for (int i = 0; i < 100; i++) {
        v.push_back(aleatorioDouble(20.0, 220.0));
    }
    return v;
}

vector<double> generarTemperaturas() {
    vector<double> v;
    for (int i = 0; i < 50; i++) {
        v.push_back(aleatorioDouble(0.0, 100.0));
    }
    return v;
}

vector<char> generarCaracteres() {
    vector<char> v;
    string caracteres = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
    for (int i = 0; i < 30; i++) {
        v.push_back(caracteres[rand() % caracteres.size()]);
    }
    return v;
}

vector<int> generarAnios() {
    vector<int> v;
    for (int i = 0; i < 100; i++) {
        v.push_back(aleatorioInt(1990, 2025));
    }
    return v;
}

vector<double> generarVelocidades() {
    vector<double> v;
    for (int i = 0; i < 32; i++) {
        v.push_back(aleatorioDouble(10.0, 300.0));
    }
    return v;
}

vector<double> generarDistancias() {
    vector<double> v;
    for (int i = 0; i < 1000; i++) {
        v.push_back(aleatorioDouble(1.0, 1000.0));
    }
    return v;
}

template <typename T>
void mostrar(vector<T> v, int cantidad) {
    for (int i = 0; i < cantidad; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {
    srand(time(0));

    vector<double> voltajes = generarVoltajes();
    vector<double> temperaturas = generarTemperaturas();
    vector<char> caracteres = generarCaracteres();
    vector<int> anios = generarAnios();
    vector<double> velocidades = generarVelocidades();
    vector<double> distancias = generarDistancias();

    cout << "Voltajes: ";
    mostrar(voltajes, 10);

    cout << "Temperaturas: ";
    mostrar(temperaturas, 10);

    cout << "Caracteres: ";
    mostrar(caracteres, 10);

    cout << "Anios: ";
    mostrar(anios, 10);

    cout << "Velocidades: ";
    mostrar(velocidades, 10);

    cout << "Distancias: ";
    mostrar(distancias, 10);

    return 0;
}