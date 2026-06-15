// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carnet: 9870105
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 13/05/2026
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void filtrarTemperaturas(const string& archivoEntrada, const string& archivoSalida, double tempLimite) 
{
    ifstream entrada(archivoEntrada);
    ofstream salida(archivoSalida);
    
    if (!entrada.is_open()) 
    {
        cerr << "Error: No se pudo abrir el archivo de origen " << archivoEntrada << endl;
        return;
    }
    
    if (!salida.is_open()) 
    {
        cerr << "Error: No se pudo crear el archivo de destino " << archivoSalida << endl;
        entrada.close();
        return;
    }
    
    string ciudad;
    double temperatura;
    int contadorFiltrados = 0;
    
    while (entrada >> ciudad >> temperatura) 
    {
        if (temperatura > tempLimite) 
        {
            salida << ciudad << " " << temperatura << endl;
            contadorFiltrados++;
        }
    }
    
    entrada.close();
    salida.close();
    
    cout << "Proceso completado. Se exportaron " << contadorFiltrados 
         << " ciudades con temperaturas superiores a " << tempLimite << "°C." << endl;
}

int main() 
{
    string archivoDatos = "temperaturas.txt";
    string archivoResultados = "altas_temperaturas.txt";
    double limite;
    
    cout << "Ingrese el valor de la temperatura límite (N°C): ";
    cin >> limite;
    
    filtrarTemperaturas(archivoDatos, archivoResultados, limite);
    
    return 0;
}
