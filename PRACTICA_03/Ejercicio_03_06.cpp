#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int N;
    int n1, n2, n3;
    int totalPanales;

    srand(time(0));

    cout << "Ingrese la cantidad total de niños: ";
    cin >> N;

    n1 = rand() % (N + 1);
    n2 = rand() % (N - n1 + 1);
    n3 = N - n1 - n2;

    cout << "Niños de 1 año: " << n1 << endl;
    cout << "Niños de 2 años: " << n2 << endl;
    cout << "Niños de 3 años: " << n3 << endl;

    totalPanales = (n1 * 6) + (n2 * 3) + (n3 * 2);

    cout << "Total de pañales por dia: " << totalPanales << endl;

    return 0;
}