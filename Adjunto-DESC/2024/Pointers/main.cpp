#include <iostream>

using namespace std;

int main()
{
     // int a = 10;
     // cout << "a = " << a << endl;
     // cout << "Dir Address of a = " << &a << endl;

     // // Address-of operator
     // int *ptr = &a;
     // cout << "\nptr = " << ptr << endl;
     // cout << "Dir Address of ptr = " << &ptr << endl;

     // // Dereference operator
     // *ptr = 20;
     // cout << "\na = " << a << endl;

     int x = 10;
     int y = 20;
     int *ptr = &x;
     *ptr *= 2;
     ptr = &y;
     *ptr *= 3;

     cout << "x = " << x << endl;
     cout << "y = " << y << endl;
     cout << "ptr = " << ptr << endl;
     cout << "*ptr = " << *ptr << endl;

     return 0;
}
