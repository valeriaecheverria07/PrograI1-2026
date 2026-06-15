// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carnet: 9870105
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 22/05/2026
#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Pelicula 
{
    string titulo;
    string director;
    int duracion; 
    int anio_estreno;
    string genero;
};

void registrarPeliculas(vector<Pelicula> &catalogo);
void buscarPorGenero(const vector<Pelicula> &catalogo, const string &generoBusqueda);
void buscarPorDirector(const vector<Pelicula> &catalogo, const string &directorBusqueda);
void mostrarPelicula(const Pelicula &p);

int main() 
{
    int n;
    cout << "Ingrese la cantidad de peliculas a registrar: ";
    cin >> n;

    if (n <= 0) return 1;

    vector<Pelicula> catalogo(n);
    registrarPeliculas(catalogo);

    string busquedaGen, busquedaDir;

    cout << "\nIngrese el genero que desea buscar: ";
    getline(cin >> ws, busquedaGen);
    buscarPorGenero(catalogo, busquedaGen);

    cout << "\nIngrese el director que desea buscar: ";
    getline(cin >> ws, busquedaDir);
    buscarPorDirector(catalogo, busquedaDir);

    return 0;
}

void registrarPeliculas(vector<Pelicula> &catalogo) 
{
    for (size_t i = 0; i < catalogo.size(); i++) 
    {
        cout << "\nPelicula #" << i + 1 << ":" << endl;
        cout << "Titulo: ";
        getline(cin >> ws, catalogo[i].titulo);
        cout << "Director: ";
        getline(cin, catalogo[i].director);
        cout << "Duracion (minutos): ";
        cin >> catalogo[i].duracion;
        cout << "Anio de estreno: ";
        cin >> catalogo[i].anio_estreno;
        cout << "Genero: ";
        getline(cin >> ws, catalogo[i].genero);
    }
}

void buscarPorGenero(const vector<Pelicula> &catalogo, const string &generoBusqueda) 
{
    cout << "\n--- RESULTADOS PARA EL GENERO: " << generoBusqueda << " ---" << endl;
    bool encontrado = false;
    for (const auto &p : catalogo) 
    {
        if (p.genero == generoBusqueda) 
        {
            mostrarPelicula(p);
            encontrado = true;
        }
    }
    if (!encontrado) cout << "No se encontraron peliculas de este genero." << endl;
}

void buscarPorDirector(const vector<Pelicula> &catalogo, const string &directorBusqueda) 
{
    cout << "\n--- RESULTADOS PARA EL DIRECTOR: " << directorBusqueda << " ---" << endl;
    bool encontrado = false;
    for (const auto &p : catalogo) 
    {
        if (p.director == directorBusqueda) 
        {
            mostrarPelicula(p);
            encontrado = true;
        }
    }
    if (!encontrado) cout << "No se encontraron peliculas de este director." << endl;
}

void mostrarPelicula(const Pelicula &p) 
{
    cout << "-> \"" << p.titulo << "\" (" << p.anio_estreno << ") | Dir: " << p.director << " | " << p.duracion << " min." << endl;
}
