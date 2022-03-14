#include <iostream>
#include <string>
#include <vector>

#include "enums structs class.h"
#include "Methods.h"


//MENU PRINCIPAL
int main() {
    Dental empresa;
    Paciente paciente;
    int id_cliente = 0;
    bool CorrerPrograma = true;
    int opcion, temp, buscar, encontro = 0;
    while (CorrerPrograma) {
        menu();
        cin >> opcion;
        cin.ignore();
        system("cls");
        switch (opcion) {
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
                cout << "====== BAJA DE CLIENTE ======\n" << endl;
                cout << "Ingrese el id del cliente:";
                cin >> temp;
                EliminarClientes(empresa, temp);
                break;
            case MenuVerCliente:
                encontro = 0;
                while (encontro == 0) {
                    cout << "Escriba el id del cliente que quiere buscar: ";
                    cin >> buscar;
                    cin.ignore();
                    for (auto &lista_paciente: empresa.lista_pacientes) {
                        if (buscar == lista_paciente.id) {
                            cout << "Se encontro al paciente " << lista_paciente.nombre;
                            encontro = 1;
                        }
                    }
                    if (encontro == 0) {
                        cout << "No se encontro al paciente, intente nuevamente";
                        encontro = 1;
                    }
                }
                SubmenuClientes(empresa, buscar);
                break;

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