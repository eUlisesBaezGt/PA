#include <iostream>

using namespace std;

int main()
{
    // int numbers[10]; // Array de 10 elementos que no puede cambiar de tamaño
    int capacity = 5;
    int *numbers = new int[capacity]; // Array de 5 elementos que puede cambiar de tamaño
    int entries = 0;

    while (true)
    {
        cout << "Number: ";
        cin >> numbers[entries];
        if (cin.fail())
            break;
        entries++;
        ///////////////
        if (entries == capacity)
        {
            int *temp = new int[capacity * 2];
            for (int i = 0; i < capacity; i++)
                temp[i] = numbers[i];
            delete[] numbers;
            numbers = temp;
            capacity *= 2;
        }
        ///////////////
    }

    for (int i = 0; i < entries; i++)
        cout << numbers[i] << endl;

    delete[] numbers;
}
