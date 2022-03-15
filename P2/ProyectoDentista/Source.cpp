#include "enumeraciones estructuras y clases.h"
#include "Metodos.h"

//MENU PRINCIPAL

int main()
{
	Dental empresa;
	Paciente paciente;
	int id_cliente = rand() % 100;
	bool CorrerPrograma = true;
	int opcion, temp, buscar, encontro = 0;
	Clientes(empresa.lista_pacientes);
	while (CorrerPrograma)
	{
		menu();
		cin >> opcion;
		cin.ignore();
		system("cls");
		switch (opcion)
		{
		case AltaCliente:
			system("cls");
			cout << "====== ALTA DE CLIENTE ======\n" << endl;
			RegistrarCliente(empresa.lista_pacientes, id_cliente);
			id_cliente++;
			cout << "\nPresione enter para continuar...";
			cin.get();
			system("cls");
			break;

		case BajaCliente:
			system("cls");
			int resp;
			resp = Menu_Eliminar();
			if (resp == 1)
			{
				cout << "Ingrese el id del cliente:";
				cin >> temp;
				EliminarClientes(empresa, temp);
			}
			else if (resp == 2)
			{
				EliminarTodos(empresa.lista_pacientes);
			}
			else
			{
				cout << "Invalido" << endl;
			}
			cout << "\nPresione enter para continuar...";
			cin.get();
			system("cls");
			break;

		case MenuVerCliente:
			encontro = 0;
			while (encontro == 0)
			{
				cout << "Escriba el id del cliente que quiere buscar: ";
				cin >> buscar;
				cin.ignore();
				for (auto& lista_paciente : empresa.lista_pacientes)
				{
					if (buscar == lista_paciente.id)
					{
						cout << "Se encontro al paciente " << lista_paciente.nombre;
						encontro = 1;
					}
				}
				if (encontro == 0)
				{
					cout << "No se encontro al paciente, intente nuevamente";
					encontro = 1;
				}
			}
			SubmenuClientes(empresa, buscar);
			break;

		case VerClientes:
		{
			system("cls");
			VerTodos(empresa.lista_pacientes);
			cout << "\nPresione enter para continuar...";
			cin.get();
			system("cls");
			break;
		}

		case SalirPrograma:
			CorrerPrograma = false;
			cout << "Vuelva Pronto.";
			break;
		default:
			cout << "Opcion no valida. Vuelva a intentarlo...";
			system("cls");
			break;
		}
	}
	return 0;
}