// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carnet: 9870105
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 13/05/2026
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int contarOcurrencias(const string& nombreArchivo, const string& terminoBusqueda) 
{
    ifstream archivo(nombreArchivo);
    
    if (!archivo.is_open()) 
    {
        cerr << "Error: No se pudo abrir el archivo " << nombreArchivo << endl;
        return -1;
    }
    
    string linea;
    int contador = 0;
    
    while (getline(archivo, linea)) 
    {
        size_t pos = linea.find(terminoBusqueda);
        
        while (pos != string::npos) 
        {
            contador++;
            pos = linea.find(terminoBusqueda, pos + terminoBusqueda.length());
        }
    }
    
    archivo.close();
    return contador;
}

int main() 
{
    string nombreArchivo = "datos.txt";
    string termino;
    
    cout << "Ingrese la palabra o frase que desea buscar en el archivo: ";
    getline(cin, termino);
    
    int repeticiones = contarOcurrencias(nombreArchivo, termino);
    
    if (repeticiones != -1) 
    {
        cout << "El término '" << termino << "' aparece " << repeticiones << " veces en el archivo." << endl;
    }
    
    return 0;
}
