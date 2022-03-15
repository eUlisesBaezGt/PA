#include <iostream>
#include <string>

using namespace std;

//1. Un cliente les pide realizar un programa donde se necesita encontrar números de Armstrong(o narcisistas) entre 1 y n,
//donde n es un numero ingresado por el usuario.Un numero Armstrong es aquel que es igual a la suma de sus dígitos elevados a
//la potencia de su número de cifras :
// 8208 = 84 + 24 + 04 + 84 = 4096 + 16 + 0 + 4096 = 8208
// 153 = 13 + 53 + 33 = 1 + 125 + 27 = 153

int n, cifras, suma, vamos;
float vuelta;
string numero;
char v;


int main()
{
	do
	{
		cout << "Ingrese el valor del numero n: ";
		cin >> n;
		cout << "-------------------" << endl;
		if (n < 2)
		{
			cout << "Ingrese un numero mayor o igual a 2: ";
			cin >> n;
			cout << "-------------------\n" << endl;
		}
	}
	while (n < 2);

	cout << "Numeros Armstrong:" << endl;
	cout << "-------------------" << endl;

	for (int i = 2; i <= n; ++i)
	{
		numero = to_string(i);
		cifras = static_cast<int>(numero.size());
		suma = 0;

		for (int j = 1; j <= cifras; ++j)
		{
			v = numero[j - 1];
			vamos = v - '0'; // Así podemos parsear el caracter "V" a un entero, - '0' para quitar ASCII
			vuelta = pow(static_cast<float>(vamos), static_cast<float>(cifras));
			suma += static_cast<int>(vuelta);
		}

		if (i == suma)
			cout << i << " es un numero Armstrong" << endl;
	}
	return 0;
}
