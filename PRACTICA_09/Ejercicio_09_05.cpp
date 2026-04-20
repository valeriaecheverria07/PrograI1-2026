// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carnet: 9870105
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 20/04/2026

#include <iostream>
using namespace std;

void multiplicar(int A[10][10], int B[10][10], int C[10][10],
                 int n, int m, int p) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < p; j++) {
            C[i][j] = 0;
            for(int k = 0; k < m; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
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

    int B[10][10] = {
        {1, 2, 3},
        {0, 4, 5}
    };

    int C[10][10];

    multiplicar(A, B, C, 3, 2, 3);

    cout << "Resultado de la multiplicacion:" << endl;
    mostrar(C, 3, 3);

    return 0;
}