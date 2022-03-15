//
// Created by draco on 3/13/22.
//

#ifndef DENTISTA_METHODS_H
#define DENTISTA_METHODS_H

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <fstream>
#include<sstream>
#include <utility>

#include "enums structs class.h"

//FUNCIONES DECLARADAS
void menu();

void RegistrarCliente(vector<Paciente> &list_u, int id);

void EliminarClientes(Dental &dental, int &id);

void SubmenuClientes(Dental &dental, int buscar);

void OpcionesSubmenuClientes();

void ListaDatosGenerales(vector<Paciente> &app, int buscar);

void AgregarOp(vector<Paciente> paciente, int id_cliente);

void OpcionesOp();


//IMPRESION DE MENU PRINCIPAL
void menu() {
    cout << "======== CONSULTORIO DENTAL ========" << endl;
    cout << "1) \tAlta de Cliente" << endl;
    cout << "2) \tBaja de Cliente" << endl;
    cout << "3) \tDatos Clientes" << endl;
    cout << "4) \tVer Clientes del Sistema" << endl;
    cout << "5) \tSalir\n" << endl;
    cout << "Ingrese la opcion deseada: ";

}

//REGISTRAR CLIENTES EN EL SISTEMA
void RegistrarCliente(vector<Paciente> &list_u, int id) {
    string nombre, correo, sexo, telefono;
    int edad, alergias;
    cout << "\nIngrese su nombre completo: ";
    getline(cin, nombre);
    cout << "Ingrese su numero telefonico: ";
    getline(cin, telefono);
    cout << "Ingrese su correo: ";
    getline(cin, correo);
    cout << "Ingrese su edad: ";
    cin >> edad;
    cin.ignore();
    cout << "Ingrese su sexo (M/F): ";
    cin >> sexo;
    cin.ignore();
    cout << "Ingrese el numero de Alergias que tiene el paciente: ";
    cin >> alergias;
    cin.ignore();


    string line, col_name;
    vector<string> headers;
    string value;
    ifstream myFileInput("Pacientes.csv");
    if (!myFileInput.is_open()) throw runtime_error("Could not open file");
    if (myFileInput.good()) {
        // Extract the first line in the file
        getline(myFileInput, line);

        // Create a string stream from line
        stringstream ss(line);

        // Extract each column name
        while (getline(ss, col_name, ',')) {
            headers.push_back(col_name);
        }
    }

    for (int i = 0; i < headers.size(); i++) {
        if (i != headers.size() - 1) {
            cout << "" << headers[i];
        } else {
            cout << "" << headers[i] << endl;
        }
    }

    while (getline(myFileInput, line)) {
        // Create a string stream of the current line
        stringstream ss(line);

        int colIdx = 0;
        int _id;
        string _nombre;
        int _edad, _alergias;
        string _sexo;
        string _telefono;
        string _correo;
        bool _status;
        while (getline(ss, value, ',')) {
            switch (colIdx) {
                case 0:
                    _id = stoi(value);
                    break;
                case 1:
                    _nombre = value;
                    break;
                case 2:
                    _telefono = value;
                    break;
                case 3:
                    _correo = value;
                    break;
                case 4:
                    _edad = stoi(value);
                    break;
                case 5:
                    _sexo = value;
                    break;
                case 6:
                    _alergias = stoi(value);
                default:
                    break;
            }

            // Si el siguiente token es una coma, ignora y se mueve al siguiente elemento
            if (ss.peek() == ',') ss.ignore();
            colIdx++;
        }
        cout << "" << _id << "" << _nombre << "" << _telefono << "" << _correo << "" << _edad << "" << _sexo << ""
             << _alergias << endl;
    }
    myFileInput.close();
    for (int i = 0; i < list_u.size(); i++) {
        if (list_u[i].id != 0) {
            id = (list_u[i].id + 1);
            i = int(list_u.size());
        }

    }
    Paciente temporal = {id, nombre, telefono, correo, edad, sexo, alergias};
    list_u.push_back(temporal);


    ofstream myFileOutput("Pacientes.csv");
    myFileOutput << "id,nombre,telefono,correo,edad,sexo,alergias\n";
    myFileOutput << temporal.id << "," << temporal.nombre << "," << temporal.telefono << "," << temporal.correo << ","
                 << temporal.edad << "," << temporal.sexo << "," << temporal.alergias << endl;
    myFileOutput.close();


}

//ELIMINAR USUARIOS
void EliminarClientes(Dental &dental, int &id) {
    int encontro = 0;
    Dental temporal;
    for (int i = 0; i < dental.lista_pacientes.size(); i++) {
        if (dental.lista_pacientes[i].id == id) {
            dental.lista_pacientes.erase(dental.lista_pacientes.begin() + i);
            ofstream myFileOutput("Pacientes.csv");
            myFileOutput << "id,nombre,telefono,correo,edad,sexo,alergias\n";
            myFileOutput << temporal.lista_pacientes[i].id << "," << temporal.lista_pacientes[i].nombre << ","
                         << temporal.lista_pacientes[i].telefono << "," << temporal.lista_pacientes[i].correo << ","
                         << temporal.lista_pacientes[i].edad << "," << temporal.lista_pacientes[i].sexo << ","
                         << temporal.lista_pacientes[i].alergias << endl;
            myFileOutput.close();

            encontro = 1;
        }

    }
    if (encontro == 0) {
        cout << "No se encontró al paciente" << endl;
    }


}

//SUBMENU VER USUARIOS
void SubmenuClientes(Dental &dental, int buscar) {
    bool CorrerPrograma = true;
    int opcion;
    while (CorrerPrograma) {
        OpcionesSubmenuClientes();
        cin >> opcion;
        cin.ignore();
        system("cls");
        switch (opcion) {

            case VerDatosGenerales: {
                system("cls");
                cout << "====== DATOS GENERALES ======\n" << endl;
                ListaDatosGenerales(dental.lista_pacientes, buscar);
                system("cls");
                break;
            }
            case AgregarOperacion: {
                system("cls");
                AgregarOp(dental.lista_pacientes, buscar);
                break;
            }
            case HacerTicket: {
                break;
            }
            case Salir: {
                cout << "Regresando al menu Principal" << endl;
                CorrerPrograma = false;
                break;
            }
            default: {
                cout << "Opcion no valida" << endl;
            }
        }
    }
}

void OpcionesSubmenuClientes() {
    system("cls");
    cout << "====== MENU DE SISTEMA ======\n" << endl;
    cout << "1)Ver datos generales" << endl;
    cout << "2)Agregar Operacion" << endl;
    cout << "3)Hacer tickets" << endl;
    cout << "4)Salir\n" << endl;
    cout << "Ingrese la opcion deseada: ";
}

void ListaDatosGenerales(vector<Paciente> &app, int buscar) {
    if (app.empty()) {
        cout << "\nNo hay pacientes registrados...\n";
    }
    for (auto &i: app) {
        if (buscar == i.id) {
            cout << "Nombre del paciente: " << i.nombre << endl;
            cout << "Sexo del Paciente: " << i.sexo << endl;
            cout << "Telefono del paciente: " << i.telefono << endl;
            cout << "id del paciente: " << i.id << endl;
            cout << "Correo del paciente: " << i.correo << endl;
            cout << "Edad del paciente: " << i.edad << endl;
        } else {
            cout << "No se encontro el paciente" << endl;
        }
    }
    cout << "\nPresione enter para continuar...";
    cin.get();
    cin.ignore();
}

void AgregarOp(vector<Paciente> paciente, int id_cliente) {
    bool CorrerPrograma = true;
    int opcion;
    while (CorrerPrograma) {
        OpcionesOp();
        cin >> opcion;
        cin.ignore();
        system("cls");
        switch (opcion) {
            case Brackets: {
                cout << "El paciente " << paciente[id_cliente].nombre << " desea una operacion de brackets" << endl;
                paciente[id_cliente].operacion[0].nombre = "Colocacion de Brackets";

                break;
            }
            case Salir: {
                cout << "Regresando al menu Principal" << endl;
                CorrerPrograma = false;
                break;
            }
            default: {
                cout << "Opcion no valida" << endl;
            }
        }
    }
}

void OpcionesOp() {

    system("cls");
    cout << "====== MENU DE Operaciones ======\n" << endl;
    cout << "1) Colocar Brackets" << endl;
    cout << "2) Limpieza Bucal" << endl;
    cout << "3) Blanqueamiento" << endl;
    cout << "4) Remover Muela" << endl;
    cout << "5) Colocar Corona Dental" << endl;
    cout << "6) Disenar Sonrisa" << endl;
    cout << "7) Salir\n" << endl;
    cout << "Ingrese la opcion deseada: ";

}

#endif //DENTISTA_METHODS_H
