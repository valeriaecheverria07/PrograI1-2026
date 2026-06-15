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

void guardarNombres(const string& nombreArchivo, const vector<string>& nombres) 
{
    ofstream archivo(nombreArchivo);
    
    if (!archivo.is_open()) 
    {
        cerr << "Error al abrir el archivo para escribir." << endl;
        
        return;
    }
    
    for (const string& nombre : nombres) 
    {
        archivo << nombre << endl;
    }
    
    archivo.close();
    
    cout << "Nombres guardados exitosamente en " << nombreArchivo << endl;
}

void leerYMostrarNombres(const string& nombreArchivo) 
{
    ifstream archivo(nombreArchivo);
    
    if (!archivo.is_open()) 
    {
        cerr << "Error al abrir el archivo para leer." << endl;
        
        return;
    }
    
    string nombre;
    
    cout << "\n--- Contenido del archivo " << nombreArchivo << " ---" << endl;
    
    while (getline(archivo, nombre)) 
    {
        cout << nombre << endl;
    }
    
    archivo.close();
}

int main() 
{
    string nombreArchivo = "nombres.txt";
    
    vector<string> listaNombres;
    
    int cantidad;
    
    cout << "¿Cuántos nombres deseas ingresar?: ";
    
    cin >> cantidad;
    cin.ignore(); 
    
    for (int i = 0; i < cantidad; ++i) 
    {
        string nombre;
        
        cout << "Ingrese el nombre " << i + 1 << ": ";
        
        getline(cin, nombre);
        
        listaNombres.push_back(nombre);
    }
    
    guardarNombres(nombreArchivo, listaNombres);
    
    leerYMostrarNombres(nombreArchivo);
    
    return 0;
}
