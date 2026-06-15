// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carnet: 9870105
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 22/05/2026
#include <iostream>
#include <string>

using namespace std;

struct Libro {
    string titulo;
    string autor;
    int anio_publicacion;
    bool disponible;
};

void registrarLibro(Libro &l);
void mostrarLibro(const Libro &l);

int main() 
{
    Libro miLibro;
    
    cout << "--- REGISTRO DE LIBRO ---" << endl;
    registrarLibro(miLibro);
    
    cout << "\n--- DATOS DEL LIBRO REGISTRADO ---" << endl;
    
    mostrarLibro(miLibro);
    
    return 0;
}

void registrarLibro(Libro &l) 
{
    cout << "Ingrese el titulo del libro: ";
    getline(cin >> ws, l.titulo); 
    
    cout << "Ingrese el autor: ";
    getline(cin, l.autor);
    
    cout << "Ingrese el anio de publicacion: ";
    cin >> l.anio_publicacion;
    
    char opc;
    cout << "¿Esta disponible? (s/n): ";
    cin >> opc;
    l.disponible = (opc == 's' || opc == 'S');
}

void mostrarLibro(const Libro &l) 
{
    cout << "Titulo: " << l.titulo << endl;
    cout << "Autor: " << l.autor << endl;
    cout << "Anio de Publicacion: " << l.anio_publicacion << endl;
    cout << "Estado: " << (l.disponible ? "Disponible" : "No disponible") << endl;
}
