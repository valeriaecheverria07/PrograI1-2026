// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carnet: 9870105
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 20/04/2026

#include <iostream>
using namespace std;

void transponer(int A[10][10], int T[10][10], int n, int m) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            T[j][i] = A[i][j];
        }
    }
}

void mostrar(int A[10][10], int filas, int columnas) {
    for(int i = 0; i < filas; i++) {
        for(int j = 0; j < columnas; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int A[10][10] = {
        {1, 0},
        {2, 4},
        {3, 5}
    };

    int T[10][10];

    transponer(A, T, 3, 2);

    cout << "Matriz transpuesta:" << endl;
    mostrar(T, 2, 3);

    return 0;
}