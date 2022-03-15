//
// Created by draco on 3/13/22.
//

#ifndef DENTISTA_ENUMS_STRUCTS_CLASS_H
#define DENTISTA_ENUMS_STRUCTS_CLASS_H

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <fstream>
#include<sstream>
#include <utility>

using namespace std;

//OPCIONES MENU PRINCIPAL
enum Opciones {
    AltaCliente = 1,
    BajaCliente,
    MenuVerCliente,
    VerClientes,
    SalirPrograma
};

enum OpcionesDeOperaciones {
    Brackets = 1,
    Limpieza,
    Blanqueamiento,
    Remover_Muela,
    Corona_Dental,
    Disenio_Sonrisas
};

//OPCIONES MENU CLIENTE
enum OpcionesCliente {
    VerDatosGenerales = 1,
    AgregarOperacion,
    HacerTicket,
    Salir
};

//ESTRUCTURAS

struct Insumos {
    string nombre;
    float costo;
    int id;

};
struct Operaciones {
    string nombre;
    float total;
    vector<Insumos> insum;
};

struct Paciente {
    int id;
    string nombre;
    string telefono;
    string correo;
    int edad;
    string sexo;
    int alergias;
    vector<Operaciones> operacion;
};

struct Dental {
    vector<Paciente> lista_pacientes;
};
#endif //DENTISTA_ENUMS_STRUCTS_CLASS_H
