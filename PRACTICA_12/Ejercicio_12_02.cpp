// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carnet: 9870105
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 13/05/2026
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int contarPalabras(const string& nombreArchivo) 
{
    ifstream archivo(nombreArchivo);
    
    if (!archivo.is_open()) 
    {
        cerr << "Error: No se pudo abrir el archivo " << nombreArchivo << endl;
        
        return -1; 
    }
    
    string palabra;
    
    int contador = 0;
    
    while (archivo >> palabra) 
    {
        contador++;
    }
    
    archivo.close();
    
    return contador;
}

int main() 
{
    string nombreArchivo = "texto.txt";
    
    int totalPalabras = contarPalabras(nombreArchivo);
    
    if (totalPalabras != -1) 
    {
        cout << "El archivo '" << nombreArchivo << "' contiene " << totalPalabras << " palabras." << endl;
    }
    
    return 0;
}
