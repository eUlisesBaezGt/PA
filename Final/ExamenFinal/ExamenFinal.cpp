#include <iostream>
#include <vector>

#include "Punto2D.h"
#include "Punto3D.h"

using namespace std;

Punto3D herencia(vector<Punto2D> puntos)
{
	Punto3D punto3D;
	Punto2D punto2D;
	double z;

	if (puntos.empty())
	{
		cout << "No hay puntos guardados" << endl;
		cin >> punto3D;
	}
	else
	{
		for (int i = 0; i < puntos.size(); ++i)
		{
			cout << (i + 1) << ")" << puntos[i] << endl;
		}
		cout << "Ingrese el punto 2D a usar para inicializar este punto: ";
		int posicion;
		cin >> posicion;

		if (posicion <= puntos.size() && posicion > 0)
		{
			punto2D = puntos[posicion - 1];
			cout << "Ingrese la coordenada Z: ";
			cin >> z;
		}
		else
		{
			cout << "Posicion invalida" << endl;
			cin >> punto3D;
		}
		punto3D = Punto3D(punto2D, z);
	}
	return punto3D;
}

void Menu2D(vector<Punto2D>& puntos)
{
	system("cls");
	cout << "--- MENU 2D ---" << endl;
	cout << "\nPunto A: " << endl;
	Punto2D a, b;
	cin >> a;
	cout << "\nPunto B: " << endl;
	cin >> b;
	cout << "\nEscalar: ";
	double k;
	cin >> k;
	cout << "----------------" << endl;
	cout << "Punto A --> " << a << endl;
	cout << "Magnitud A --> " << a.getMagnitude() << endl;
	cout << "Punto B --> " << b << endl;
	cout << "Magnitud B --> " << b.getMagnitude() << endl;
	Punto2D ak = a * k;
	cout << "Escalar * A --> " << ak << endl;
	Punto2D bk = b * k;
	cout << "Escalar * B --> " << bk << endl;
	Punto2D ab = a + b;
	cout << "A + B --> " << ab << endl;
	Punto2D kab = ab * k;
	cout << "Escalar * (A + B) --> " << kab << endl;
	ab = a - b;
	cout << "A - B --> " << ab << endl;
	kab = ab * k;
	cout << "Escalar * (A - B) --> " << kab << endl;
	puntos.push_back(a);
	puntos.push_back(b);
}

void Menu3D(const vector<Punto2D> puntos)
{
	int opcion;
	Punto3D a, b;
	system("cls");
	cout << "--- MENU 3D ---" << endl;
	cout << "\nPunto A: " << endl;
	cout << "1) Usar puntos guardados" << endl;
	cout << "2) Ingresar nuevos puntos" << endl;
	cout << "Opcion: ";
	cin >> opcion;
	switch (opcion)
	{
	case 1:
		a = herencia(puntos);
		break;
	case 2:
		cin >> a;
		break;
	default:
		cout << "Opcion invalida" << endl;
		break;
	}


	cout << "----------------" << endl;
	cout << "\nPunto B: " << endl;
	cout << "1) Usar puntos guardados" << endl;
	cout << "2) Ingresar nuevos puntos" << endl;
	cout << "Opcion: ";
	cin >> opcion;
	switch (opcion)
	{
	case 1:
		b = herencia(puntos);
		break;
	case 2:
		cin >> b;
		break;
	default:
		cout << "Opcion invalida" << endl;
		break;
	}

	cout << "\nEscalar: ";
	double k;
	cin >> k;
	cout << "----------------" << endl;
	cout << "Punto A --> " << a << endl;
	cout << "Magnitud A --> " << a.getMagnitude() << endl;
	cout << "Punto B --> " << b << endl;
	cout << "Magnitud B --> " << b.getMagnitude() << endl;
	Punto3D ak = a * k;
	cout << "Escalar * A --> " << ak << endl;
	Punto3D bk = b * k;
	cout << "Escalar * B --> " << bk << endl;
	Punto3D ab = a + b;
	cout << "A + B --> " << ab << endl;
	Punto3D kab = ab * k;
	cout << "Escalar * (A + B) --> " << kab << endl;
	ab = a - b;
	cout << "A - B --> " << ab << endl;
	kab = ab * k;
	cout << "Escalar * (A - B) --> " << kab << endl;
}

int main()
{
	vector<Punto2D> puntos;
	int opt;
	while (true)
	{
		cout << "\n--- MENU PRINCIPAL ---" << endl;
		cout << "1) Operaciones Punto 2D" << endl;
		cout << "2) Operaciones Punto 3D" << endl;
		cout << "3) Salir" << endl;
		cout << "Ingrese una opcion: ";
		cin >> opt;
		if (opt < 1 || opt > 3) cout << "Opcion invalida" << endl;
		if (opt == 3)
		{
			cout << "\nSALIENDO....\n";
			break;
		}
		switch (opt)
		{
		case 1: Menu2D(puntos);
			break;
		case 2: Menu3D(puntos);
			break;
		}
	}
	return 0;
}
