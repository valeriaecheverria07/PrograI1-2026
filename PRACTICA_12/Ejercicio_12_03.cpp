// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carnet: 9870105
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 13/05/2026
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

struct Estudiante 
{
    string nombre;
    int edad;
    double promedio;
};

void registrarEstudiantes(const string& nombreArchivo) 
{
    ofstream archivo(nombreArchivo, ios::app); 
    
    if (!archivo.is_open()) 
    {
        cerr << "Error al abrir el archivo para escribir." << endl;
        return;
    }
    
    int cantidad;
    
    cout << "¿Cuántos estudiantes desea registrar?: ";
    
    cin >> cantidad;
    
    for (int i = 0; i < cantidad; ++i) 
    {
        Estudiante est;
        cin.ignore(); // Limpiar buffer
        
        cout << "\nEstudiante " << i + 1 << endl;
        cout << "Nombre: ";
        getline(cin, est.nombre);
        cout << "Edad: ";
        cin >> est.edad;
        cout << "Promedio: ";
        cin >> est.promedio;
        
        archivo << "Nombre: " << est.nombre << endl;
        archivo << "Edad: " << est.edad << endl;
        archivo << "Promedio: " << est.promedio << endl;
    }
    
    archivo.close();
    
    cout << "\n¡Registros guardados con éxito!" << endl;
}

void mostrarEstudiantes(const string& nombreArchivo) 
{
    ifstream archivo(nombreArchivo);
    
    if (!archivo.is_open()) 
    {
        cerr << "Error al abrir el archivo para leer." << endl;
        return;
    }
    
    string linea;
    
    cout << "\n=========================================" << endl;
    cout << "        REGISTRO DE ESTUDIANTES          " << endl;
    cout << "=========================================" << endl;
    
    while (getline(archivo, linea)) 
    {
        cout << linea << endl;
    }
    
    archivo.close();
}

int main() 
{
    string nombreArchivo = "estudiantes.txt";
    
    int opcion;
    
    do 
    {
        cout << "\n--- MENÚ DE REGISTRO ---" << endl;
        cout << "1. Registrar nuevos estudiantes" << endl;
        cout << "2. Mostrar todos los estudiantes" << endl;
        cout << "3. Salir" << endl;
        cout << "Seleccione una opción: ";
        cin >> opcion;
        
        switch (opcion) 
        {
            case 1:
                registrarEstudiantes(nombreArchivo);
                break;
                
            case 2:
                mostrarEstudiantes(nombreArchivo);
                break;
                
            case 3:
                cout << "Saliendo del programa..." << endl;
                
                break;
                
            default:
                cout << "Opción inválida." << endl;
        }
    } while (opcion != 3);
    
    return 0;
}
