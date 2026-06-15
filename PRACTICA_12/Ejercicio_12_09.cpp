// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carnet: 9870105
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 13/05/2026
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

char aplicarCesar(char c, int desplazamiento) 
{
    if (isalpha(c)) 
    {
        char base = isupper(c) ? 'A' : 'a';
        
        return (c - base + desplazamiento) % 26 + base;
    }
    return c; 
}

void cifrarArchivoCesar(const string& archivoOrigen, const string& archivoDestino, int desplazamiento) 
{
    ifstream entrada(archivoOrigen);
    ofstream salida(archivoDestino);
    
    if (!entrada.is_open() || !salida.is_open()) 
    {
        cerr << "Error al procesar los archivos de cifrado." << endl;
        return;
    }
    
    char c;

    while (entrada.get(c)) 
    {
        salida.put(aplicarCesar(c, desplazamiento));
    }
    
    entrada.close();
    salida.close();
    cout << "Archivo cifrado correctamente en '" << archivoDestino << "' con clave K=" << desplazamiento << "." << endl;
}

int main() 
{
    string origen = "mensaje.txt";
    string destino = "mensaje_cifrado.txt";
    int clave = 3; 
    
    cifrarArchivoCesar(origen, destino, clave);
    
    return 0;
}
