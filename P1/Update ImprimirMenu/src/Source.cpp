#include <iostream>
#include <string>
#include <vector>

using namespace std;

enum Modo_Menu
{
	principal,
	altaProducto
};

struct Producto
{
	int id;
	string nombre_producto;
	float costo;
	float costo_venta;
	int inventario;
};

struct Empresa
{
	int id;
	string nombre;
	vector<Producto> catalogo_productos;
};

//void Imprimir_Menu(Modo_Menu opcion);
Producto Imprimir_Menu(Modo_Menu opcion);
void Ingresar_Productos(vector<Producto>& catalogo);
void Ingresar_Productos(Empresa& empresa);

int main()
{
	// Acercamiento 1) Declararion de vectores en main
	vector<Producto> catalogo_productos;
	// Acercamiento 2) Uso de estructuras
	Empresa empresa = {0, "Pfizer"};
	const bool correr_programa = true;
	int opcion;
	while (correr_programa)
	{
		Imprimir_Menu(principal);
		cin >> opcion;
		cin.ignore();
		switch (opcion)
		{
		case 1:
			Ingresar_Productos(empresa); // Ingresar_Productos(catalogo_productos);
			break;
		default:
			break;
		}
	}


	return 0;
}

//void Imprimir_Menu(Modo_Menu opcion) {
//	switch (opcion)
//	{
//	case principal:
//		cout << "Menu" << endl;
//		cout << "1) Ingresar Producto" << endl;
//		cout << "2) Salir" << endl;
//		break;
//	case altaProducto:
//		cout << "Alta Producto" << endl;
//		break;
//	default:
//		break;
//	}
//
//}

Producto Imprimir_Menu(Modo_Menu opcion)
{
	Producto temp;
	switch (opcion)
	{
	case principal:
		cout << "Menu" << endl;
		cout << "1) Ingresar Producto" << endl;
		cout << "2) Salir" << endl;
		temp = {0, "", 0.0f, 0.0f, 0};
		break;
	case altaProducto:
		cout << "Alta Producto" << endl;
		cout << "Ingrese el ID del producto: ";
		cin >> temp.id;
		cout << "Ingrese el nombre del producto: ";
		getline(cin, temp.nombre_producto);
		cout << "Ingrese el precio de compra del producto: ";
		cin >> temp.costo;
		cin.ignore();
		cout << "Ingrese el precio de venta del producto: ";
		cin >> temp.costo_venta;
		cin.ignore();
		cout << "Ingrese el inventario del producto: ";
		cin >> temp.costo_venta;
		cin.ignore();
		break;
	default:
		break;
	}
	return temp;
}

void Ingresar_Productos(vector<Producto>& catalogo)
{
	Producto producto_temp = Imprimir_Menu(altaProducto);
	catalogo.push_back(producto_temp);
}

void Ingresar_Productos(Empresa& empresa)
{
	Producto producto_temp = Imprimir_Menu(altaProducto);
	empresa.catalogo_productos.push_back(producto_temp);
}
