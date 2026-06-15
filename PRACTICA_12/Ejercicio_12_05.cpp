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

struct Producto 
{
    string nombre;
    double precio;
};

vector<Producto> cargarProductos(const string& nombreArchivo, bool& exito) 
{
    vector<Producto> lista;
    ifstream archivo(nombreArchivo);
    
    if (!archivo.is_open()) 
    {
        exito = false;
        return lista;
    }
    
    Producto p;

    while (archivo >> p.nombre >> p.precio) {
        lista.push_back(p);
    }
    
    archivo.close();
    exito = true;
    return lista;
}

void guardarProductos(const string& nombreArchivo, const vector<Producto>& lista) 
{
    ofstream archivo(nombreArchivo);
    
    for (const auto& p : lista) 
    {
        archivo << p.nombre << " " << p.precio << endl;
    }
    
    archivo.close();
}

bool actualizarPrecio(vector<Producto>& lista, const string& productoBuscar, double nuevoPrecio) 
{
    for (auto& p : lista) 
    {
        if (p.nombre == productoBuscar) 
        {
            p.precio = nuevoPrecio;
            return true; // Encontrado y actualizado
        }
    }
    return false; // No existe
}

int main() 
{
    string nombreArchivo = "productos.txt";
    bool archivoAbierto = false;
    
    vector<Producto> inventario = cargarProductos(nombreArchivo, archivoAbierto);
    
    if (!archivoAbierto) 
    {
        cerr << "Error: No se pudo abrir el archivo " << nombreArchivo << " o está vacío." << endl;
        return 1;
    }
    
    string productoModificar;
    double precioNuevo;
    
    cout << "Ingrese el nombre del producto a actualizar: ";
    cin >> productoModificar;
    cout << "Ingrese el nuevo precio: ";
    cin >> precioNuevo;
    
    if (actualizarPrecio(inventario, productoModificar, precioNuevo)) 
    {
        guardarProductos(nombreArchivo, inventario);
        cout << "El precio de '" << productoModificar << "' se actualizó con éxito." << endl;
    }
     else 
    {
        cout << "Error: El producto '" << productoModificar << "' no existe en el registro." << endl;
    }
    
    return 0;
}
