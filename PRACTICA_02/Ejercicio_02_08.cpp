// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carnet: 9870105
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 25/02/2026

#include <iostream>
using namespace std;
int main ()
{
    system ("cls");
    int n;
    float precio;
    float total = 0;
    float iva;
    float descuento;
    cout<<"Cuantos productos vendio?: ";
    cin>>n;
    int i = 1;
    while(i <= n)
    {
        cout<<"Precio del producto "<< i <<": ";
        cin>>precio;
        total = total + precio;
        i = i + 1;
    }
    iva = total * 0.13;
    if(total > 2500)
    {
        descuento = total * 0.05;
        total = total - descuento;
    }
    cout<<"Total de ventas: "<<total<<endl;
    cout<<"IVA a pagar: "<<iva<<endl;
    return 0;
}
