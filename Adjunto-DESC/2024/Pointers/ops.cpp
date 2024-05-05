#include <iostream>

using namespace std;

int main()
{
    int numbers[] = {10, 20, 30};
    int *ptr = numbers;
    // cout << *ptr << endl;
    // ptr++; // Aumenta el puntero en n bytes, dependiendo del tipo de dato
    // cout << *ptr << endl;
    // cout << *(ptr + 1) << endl; // Traemos el segundo valor del array con el puntero

    int x = 10;
    int y = 10;

    int *ptrX = &x;
    int *ptrY = &y;

    if (*ptrX == *ptrY)
        cout << "Son iguales los valores" << endl;
    else
    {
        cout << "No son iguales los valores" << endl;
    }

    if (ptrX == ptrY)
        cout << "Son iguales los punteros" << endl;
    else
    {
        cout << "No son iguales los punteros" << endl;
    }
}
