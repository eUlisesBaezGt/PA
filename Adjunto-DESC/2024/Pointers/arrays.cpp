#include <iostream>

using namespace std;

int main()
{
    int numbers[] = {10, 20, 30};
    int *ptr = &numbers[size(numbers) - 1];
    cout << "Numero de elementos: " << size(numbers) << endl;

    while (ptr >= numbers)
    {
        cout << *ptr << endl;
        ptr--;
    }
    return 0;
}
