
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	//	int arr1[5];
	//	arr1[0] = 1;
	//	int arr2[5] = {0}; // Todos los valores en 0
	//	int arr3[5] = {1, 2, 3, 4, 5}; // Inicializando todos los valores
	//	int arr4[5] = {1, 2, 3}; // Inicializando solo algunos

	//float parciales[2];   // Arreglos cuando sabemos cuantos son


	//float actividadesArr[20];
	//const int tamanio_arreglo = size(actividadesArr) << endl;  // Misma salida
	//cout << tamanio_arreglo;
	//const int tamanio_arr = sizeof actividadesArr / sizeof actividadesArr[0]; // Misma salida
	//cout << tamanio_arr << endl;

	//const vector<float> actividadesVect; // vectores
	//const int tamanio_vector = size(actividadesVect);
	//cout << tamanio_vector << endl;

	/*const int n = 4;
	float arr[n];
	const int tamanio_arr = size(arr);
	vector<float> vect;

	cout << "Captura los valores de un Arreglo " << endl;
	for (int i = 0; i < tamanio_arr; ++i)
	{
		cout << "Ingrese el valor del arreglo en la posicion " << i << ": ";
		cin >> arr[i];
		cin.ignore();
	}
	cout << "Valores en el arreglo" << endl;
	for (int i = 0; i < tamanio_arr; ++i)
		cout << arr[i] << " ";
	cout << endl;
	cout << "Captura de valores de un vector " << endl;
	cout << "Cuantos valores desea ingresar: " << endl;
	int tamanio_vect;
	cin >> tamanio_vect;
	cin.ignore();


	for (int i = 0; i < tamanio_vect; ++i)
	{
		int temp;
		cout << "Ingrese el valor del arreglo en la posicion " << i << ": " << endl;
		cin >> temp;
		cin.ignore();
		vect.push_back(temp);
	}
	int temp;
	cout << "Ingrese un valor adicional al vector: ";
	cin >> temp;
	cin.ignore();
	vect.push_back(temp);

	cout << "Vectores en el vector" << endl;
	for (int i = 0; i < vect.size(); ++i)
		cout << vect[i] << "";*/

	vector<float> calificaciones;
	if (calificaciones.empty() == true)
		cout << "vector vacio" << endl;
	else
		cout << "El vector no esta vacio" << endl;


	for (int i = 0; i < 3; i++)
	{
		float calf_aleatoria = rand() % 10;
		calificaciones.push_back(calf_aleatoria);
	}
	// Elementos en el vector
	cout << "Elementos en el vector: " << endl;
	for (int i = 0; i < calificaciones.size(); i++)
		cout << calificaciones[i] << " ";
	// Tamanio actual del vector
	cout << "\nTamanio: " << calificaciones.size() << endl;
	// Cantidad elementos maximas a contener
	cout << "Tamanio maximo de elementos: " << calificaciones.max_size() << endl;
	// El tamanio en memoria que el vector contiene actualmente
	cout << "Capacidad: " << calificaciones.capacity() << endl;

	// Cambiar el tamanio del contenedor para que contenga n elementos
	calificaciones.resize(2);
	
	cout << "\nElementos en el vector despues del resize: " << endl;
	for (int i = 0; i < calificaciones.size(); i++)
		cout << calificaciones[i] << " ";
	// Tamanio actual del vector
	cout << "\nTamanio: " << calificaciones.size() << endl;
	// Cantidad elementos maximas a contener
	cout << "Tamanio maximo de elementos: " << calificaciones.max_size() << endl;
	// El tamanio en memoria que el vector contiene actualmente
	cout << "Capacidad: " << calificaciones.capacity() << endl;
	calificaciones.shrink_to_fit(); // Puedes reducir memoria con esto

	if (calificaciones.empty() == true)
		cout << "vector vacio" << endl;
	else
		cout << "El vector no esta vacio" << endl;
}
