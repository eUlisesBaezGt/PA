#include <iostream>
#include <stdlib.h>

using namespace std;

#include "P1.h"
#include  "P2.h"
#include  "P3.h"

void Limpiar_Consola();

int main()
{
	P1();
	cin.ignore();
	Limpiar_Consola();


	P2();
	cin.ignore();
	Limpiar_Consola();

	P3();
	cin.ignore();
	Limpiar_Consola();

	return 0;
}

void Limpiar_Consola()
{
	cout << "Presione Enter para continuar";
	cin.ignore();
#if defined(WIN32) || defined(_WIN32) || defined(__WIN32__) || defined(__NT__)
	system("cls");
#else // macOS y Linux
	system("clear)";
#endif
}
