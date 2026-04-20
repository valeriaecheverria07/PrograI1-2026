#include <iostream>
#include <string>

using namespace std;

int main()
{
    string correo;
    cout << "Ingrese correo: ";
    cin >> correo;

    int contadorArroba = 0;
    int posicionArroba = -1;
    bool puntoDespues = false;

    for(int i = 0; i < correo.length(); i++)
    {
        if(correo[i] == '@')
        {
            contadorArroba++;
            posicionArroba = i;
        }
    }

    if(posicionArroba != -1)
    {
        for(int i = posicionArroba + 1; i < correo.length(); i++)
        {
            if(correo[i] == '.')
            {
                puntoDespues = true;
            }
        }
    }

    if(contadorArroba == 1 && puntoDespues)
    {
        cout << "Correo electronico valido" << endl;
    }
    else
    {
        cout << "Correo electronico invalido" << endl;
    }

    return 0;
}