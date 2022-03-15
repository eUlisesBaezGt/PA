#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Punto2D
{
	string nombre;
	float x;
	float y;
};

struct Punto3D
{
	string nombre;
	float coord[3];
};

struct Libro
{
	int id;
	string nombre;
};

struct Libreria
{
	int id_sucursal;
	string nombre_sucursal;
	vector<Libro> catalogo_sucursal;
};

void SumaPuntos(Punto2D a, Punto2D b);
void SumaPuntos(Punto2D a, Punto2D b, Punto2D res);
void Suma_Puntos(Punto2D& a, Punto2D& b, Punto2D& res);
Punto2D Suma_Puntos(Punto2D a, Punto2D b);

int main()
{
	// Estructuras - Nos permiten tener tipos de datos que combinan
	// diferentes tipos de variables
	/*Punto2D p;
	p.nombre = "p";
	p.x = 0.0f;
	p.y = 0.0f;

	Punto2D q = { "q", 0.0f, 1.0f };

	cout << p.nombre << " = (" << p.x << ", " << p.y << ")" << endl;
	cout << q.nombre << " = (" << q.x << ", " << q.y << ")" << endl;

	Punto3D p3d;
	p3d.nombre = "p 3D";

	p3d.coord[0] = 0.0f;
	p3d.coord[1] = 0.0f;
	p3d.coord[2] = 0.0f;

	Punto3D q3d = { "q 3D", {0.0f, 1.0f, 0.0f} };

	cout << p3d.nombre << " = (" << p3d.coord[0] << ", " << p3d.coord[1] << ", " << p3d.coord[2] << ")" << endl;
	cout << q3d.nombre << " = (" << q3d.coord[0] << ", " << q3d.coord[1] << ", " << q3d.coord[2] << ")" << endl;*/

	// Vectores - Enfoque de cada variable tiene su propio vector
	/*vector<int> id_libro;
	vector<string> nombre_libro;
	int cantidad_libros;
	cout << "Ingrese la cantidad de libros a almacenar" << endl;
	cin >> cantidad_libros;
	cin.ignore();

	for (int i = 0; i < cantidad_libros; i++)
	{
		string temp;
		cout << "Ingrese el nombre del libro #" << i + 1 << " a almacenar" << endl;
		getline(cin, temp);
		id_libro.push_back(i);
		nombre_libro.push_back(temp);
	}

	for (int i = 0; i < id_libro.size(); i++)
	{
		cout << id_libro[i] << " - " << nombre_libro[i] << endl;
	}*/

	// Vectores - Enfoque de estructuras
	/*vector<Libro> libreria;
	int cantidad_libros;
	cout << "Ingrese la cantidad de libros a almacenar" << endl;
	cin >> cantidad_libros;
	cin.ignore();
	for (int i = 0; i < cantidad_libros; i++)
	{
		Libro temp;
		temp.id = i;
		cout << "Ingrese el nombre del libro #" << i + 1 << " a almacenar" << endl;
		getline(cin, temp.nombre);
		libreria.push_back(temp);
	}
	for (int i = 0; i < libreria.size(); i++)
	{
		cout << libreria[i].id << " - " << libreria[i].nombre << endl;
	}*/

	// Vectores Enfoque de Estructuras Anidadas
	/*Libreria ghandi_bellas_artes;
	ghandi_bellas_artes.id_sucursal = 0;
	ghandi_bellas_artes.nombre_sucursal = "Bellas Artes";

	int cantidad_libros;
	cout << "Ingrese la cantidad de libros a almacenar" << endl;
	cin >> cantidad_libros;
	cin.ignore();

	for (int i = 0; i < cantidad_libros; i++)
	{
		Libro temp;
		temp.id = i;
		cout << "Ingrese el nombre del libro #" << i + 1 << " a almacenar" << endl;
		getline(cin, temp.nombre);
		ghandi_bellas_artes.catalogo_sucursal.push_back(temp);
	}

	cout << "\n" << ghandi_bellas_artes.id_sucursal << " - ";
	cout << ghandi_bellas_artes.nombre_sucursal << endl;
	cout << " - Catalogo - " << endl;

	for (int i = 0; i < ghandi_bellas_artes.catalogo_sucursal.size(); i++)
	{
		cout << ghandi_bellas_artes.catalogo_sucursal[i].id << " - ";
		cout << ghandi_bellas_artes.catalogo_sucursal[i].nombre << endl;
	}*/

	// Estructuras con Funciones void
	/*Punto2D p = { "p", 0.0f, 1.0f};
	Punto2D q = { "q", 1.0f, 0.0f };

	cout << p.nombre << " = (" << p.x << ", " << p.y << ")" << endl;
	cout << q.nombre << " = (" << q.x << ", " << q.y << ")" << endl;
	cout << endl;
	SumaPuntos(p, q);*/

	// Estructuras con funciones return
	/*Punto2D p = { "p", 0.0f, 1.0f };
	Punto2D q = { "q", 1.0f, 0.0f };
	Punto2D res;

	cout << p.nombre << " = (" << p.x << ", " << p.y << ")" << endl;
	cout << q.nombre << " = (" << q.x << ", " << q.y << ")" << endl;
	cout << endl;
	res = Suma_Puntos(p, q);
	cout << res.nombre << " = (" << res.x << ", " << res.y << ")" << endl;*/


	// Al tratar de mandar una variable como parametro para que se actualice
	// con la operacion de la funcion, esta no recupera el valor
	/*Punto2D p = { "p", 0.0f, 1.0f };
	Punto2D q = { "q", 1.0f, 0.0f };
	Punto2D res;

	cout << p.nombre << " = (" << p.x << ", " << p.y << ")" << endl;
	cout << q.nombre << " = (" << q.x << ", " << q.y << ")" << endl;
	cout << endl;
	SumaPuntos(p, q, res);
	cout << res.nombre << " = (" << res.x << ", " << res.y << ")" << endl;*/

	// Lo anterior se puede solucionar al usar referencias!
	Punto2D p = {"p", 0.0f, 1.0f};
	Punto2D q = {"q", 1.0f, 0.0f};
	Punto2D res;

	cout << p.nombre << " = (" << p.x << ", " << p.y << ")" << endl;
	cout << q.nombre << " = (" << q.x << ", " << q.y << ")" << endl;
	cout << endl;
	Suma_Puntos(p, q, res);
	cout << res.nombre << " = (" << res.x << ", " << res.y << ")" << endl;

	return 0;
}

void SumaPuntos(Punto2D a, Punto2D b)
{
	Punto2D res;
	res.nombre = a.nombre + "+" + b.nombre;
	res.x = a.x + b.x;
	res.y = a.y + b.y;
	cout << res.nombre << " = (" << res.x << ", " << res.y << ")" << endl;
}

void SumaPuntos(Punto2D a, Punto2D b, Punto2D res)
{
	res.nombre = a.nombre + "+" + b.nombre;
	res.x = a.x + b.x;
	res.y = a.y + b.y;
	cout << res.nombre << " = (" << res.x << ", " << res.y << ")" << endl;
	cout << endl;
}

void Suma_Puntos(Punto2D& a, Punto2D& b, Punto2D& res)
{
	res.nombre = a.nombre + "+" + b.nombre;
	res.x = a.x + b.x;
	res.y = a.y + b.y;
	cout << res.nombre << " = (" << res.x << ", " << res.y << ")" << endl;
	cout << endl;
}

Punto2D Suma_Puntos(Punto2D a, Punto2D b)
{
	Punto2D res;
	res.nombre = a.nombre + "+" + b.nombre;
	res.x = a.x + b.x;
	res.y = a.y + b.y;
	cout << res.nombre << " = (" << res.x << ", " << res.y << ")" << endl;
	cout << endl;
	return res;
}
