#pragma once

// 2. Escriba un programa de inventario de un libro usando funciones. El programa te pide que ingreses un libro con
// los siguientes datos: nombre del libro, autor del libro, edición del libro, editorial del libro, ubicación de la
// editorial. El programa, mediante el uso de un menú te permite: modificar su inventario, cambiar el libro almacenado,
// modificar valores del libro existente, ver su editorial y salir del programa.

inline string autor;
inline string nombre;
inline string editorial;
inline string ubicacion;
inline int edicion;
inline int inventario;

void Menu();
void Libro();
void ModificarInventario();
void CambiarLibro();
void ModificarValores();
void VerEditorial();


inline int P2()
{
	Menu();
	return 0;
}


inline void Menu()
{
	Libro();

	int opcion;
	do
	{
		cout << "\n\nOpciones: " << endl;
		cout << "1. Modificar inventario" << endl;
		cout << "2. Cambiar libro" << endl;
		cout << "3. Modificar valores" << endl;
		cout << "4. Ver editorial" << endl;
		cout << "5. Salir" << endl;
		do
		{
			cout << "\nIngrese una opcion: ";
			cin >> opcion;
			if (opcion < 1 || opcion > 5)
			{
				cout << "Opcion invalida " << endl;
			}
				
		}
		while (opcion < 1 || opcion > 5);
		switch (opcion)
		{
		case 1:
			ModificarInventario();
			break;
		case 2:
			CambiarLibro();
			break;
		case 3:
			ModificarValores();
			break;
		case 4:
			VerEditorial();
			break;
		default:
			break;
		}
	}
	while (opcion != 5);
	cout << "Saliendo..." << endl;
}


inline void Libro()
{
	cout << "Registrando libro: \n\n------------------" << endl;
	cout << "Nombre: ";
	getline(cin, nombre);
	cout << "\nAutor: ";
	getline(cin, autor);
	cout << "\nEdicion: ";
	cin >> edicion;
	cin.ignore();
	cout << "\nEditorial: ";
	getline(cin, editorial);
	cout << "\nUbicacion: ";
	getline(cin, ubicacion);
	cout << "\nInventario: ";
	cin >> inventario;
}


inline void ModificarInventario()
{
	cout << "Modificar inventario: ";
	cin >> inventario;
}


inline void CambiarLibro()
{
	cout << "Cambiar Libro" << endl;
	cout << "Nuevo Libro" << endl;
	Libro();
}


inline void ModificarValores()
{
	cout << "Modificar valores" << endl;
	cout << "\nEdicion: ";
	cin >> edicion;
	cout << "\nEditorial: ";
	cin >> editorial;
	cout << "\nUbicacion: ";
	cin >> ubicacion;
	cout << "\nInventario: ";
	cin >> inventario;
}


inline void VerEditorial()
{
	cout << "Ver editorial" << endl;
	cout << "Editorial: " << editorial << endl;
}
