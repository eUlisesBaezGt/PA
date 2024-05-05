#include <iostream>
using namespace std;

void aumentaPrecio(double *precio)
{
    *precio *= 1.2;
}

/* Implement the swap function for swapping two variables using pointers.
void swap(int* first, int* second)
*/
void swap(int *first, int *second)
{
    int temp = *first;
    *first = *second;
    *second = temp;
}

int main()
{
    double precio = 100;
    aumentaPrecio(&precio);
    cout << precio << endl;
    ////////////////////////////////
    int a = 10;
    int b = 20;
    swap(&a, &b);
    cout << a << " " << b << endl;
    return 0;
}
