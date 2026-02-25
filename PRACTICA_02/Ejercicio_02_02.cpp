// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carnet: 9870105
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 23/02/2026

#include <iostream>
using namespace std;
int main() 
{
    system ("cls");
    int num;
    int sumaTotal = 0;
    int sumaPares = 0;
    int sumaImpares = 0;
    int sumaPrimos = 0;
    
    do 
    {
        cout << "Ingrese un numero (0 para terminar): ";
        cin >> num;
        if(num != 0) {

            sumaTotal = sumaTotal + num;

            if(num % 2 == 0)
                sumaPares =sumaPares+ num;
            else
                sumaImpares =sumaImpares+ num;

            int contador = 0;

            for(int i = 1; i <= num; i++) 
            {
                if(num % i == 0)
                    contador++;
            }
            if(contador == 2)
                sumaPrimos =sumaPrimos+ num;
        }

    } while(num != 0);
    cout<< "Suma total: "<< sumaTotal<<endl;
    cout<< "Suma pares: "<< sumaPares<<endl;
    cout<< "Suma impares: "<< sumaImpares<< endl;
    cout<< "Suma primos: "<< sumaPrimos<<endl;

    return 0;
}