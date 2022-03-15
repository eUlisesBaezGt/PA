#pragma once
#include <string>

//3.	Escriba un programa para calcular e imprimir la factura de electricidad de un cliente determinado.El usuario debe de ingresar su número de cliente,
//su nombre y la cantidad energía consumida.De acuerdo con la siguiente tabla :

//	Unidad	Costo
//hasta 199	@1.20
//Entre 200 y 400	@1.50
//Entre 400 y 600	@1.80
//Mayor a 600	@2.00

//Adicionalmente si la factura excede a 300, se cobrará un adicional del 15 % adicional del total del consumo, y si el consumo es menor a 100,
//el total a pagar debe ser de 100 por la tarifa correspondiente.

string id, costo;
double consumo, total, total_s = 0, valor;

void SolicitarDatos();
void MostrarDatos();
void ChecarCosto();
void Registro();


inline int P3()
{
	SolicitarDatos();
	MostrarDatos();
	return 0;
}

inline void SolicitarDatos()
{
	cout << "ID: ";
	getline(cin, id);
	cout << "Nombre: ";
	getline(cin, nombre);
	cout << "Consumo: ";
	cin >> consumo;
}

inline void MostrarDatos()
{
	cout << "\n\n";
	cout << "ID:\t\t\t\t\t" << id << endl;
	cout << "Nombre:\t\t\t\t\t" << nombre << endl;
	Registro();
}

inline void Registro()
{
	ChecarCosto();

	cout << "Consumo:\t\t\t\t" << consumo << endl;
	cout << "Total por consumo @Rs." << costo << " por unidad:\t" << total << endl;
	cout << "Total por sobrecarga:\t\t\t" << total_s << endl;
	cout << "Total a pagar:\t\t\t\t" << total + total_s << endl;
}

inline void ChecarCosto()
{
	if (consumo < 0)
		cout << "Consumo invalido" << endl;

	if (consumo < 100)
	{
		costo = "1.20";
		valor = 1.2;
		total = consumo * valor;
	}
	else
	{
		if (consumo <= 199)
		{
			costo = "1.20";
			valor = 1.2;
		}
		else if (consumo > 199 && consumo < 400)
		{
			costo = "1.50";
			valor = 1.5;
		}
		else if (consumo >= 400 && consumo < 600)
		{
			costo = "1.80";
			valor = 1.8;
		}
		else if (consumo >= 600)
		{
			costo = "2.00";
			valor = 2;
		}
		total = consumo * valor;

		if (total > 300)
			total_s = 0.15 * total;
	}
}
