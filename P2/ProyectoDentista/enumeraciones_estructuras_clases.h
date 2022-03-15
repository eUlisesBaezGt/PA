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

class Insumos {
public:
    string nombre;
    float costo;
    int id;

};
class Operaciones {
public:
    string nombre;
    float total;
    vector<Insumos> insum;
};

class Paciente {
public:
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
