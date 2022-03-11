#include <iostream>
#include <string>
#include <utility>
#include <vector>


#pragma warning(disable:4996)

using namespace std;

class Usuario {
public:
    Usuario(int, string);

    ~Usuario();

    string getName();

private:
    int _id;
    string _name;
};

class Estudiante : public Usuario {
public:
    Estudiante(int, string, string);

    ~Estudiante();

    string getProgram();
    //string getName();

private:
    string _program;
};


int main() {
    // Comentar Línea 30 y 80-84
    Usuario u1(0, "David");
    cout << u1.getName() << endl;
    cout << endl;
    Estudiante e1(0, "David", "Doctorado en Ciencias de Ingeniería");
    cout << e1.getName() << endl;
    cout << e1.getProgram() << endl;

    // Sobrecarga funciones clase hija (Des-comentar Línea 30 y 80-84)
    // Y correr nuevamente el programa


    return 0;
}

Usuario::Usuario(int id, string name) {
    _id = id;
    _name = std::move(name);
}

Usuario::~Usuario()
= default;

string Usuario::getName() {
    return _name;
}

Estudiante::Estudiante(int id, string name, string program) : Usuario(id, std::move(name)) {
    _program = std::move(program);
}

Estudiante::~Estudiante()
= default;

string Estudiante::getProgram() {
    return _program;
}

//string Estudiante::getName()
//{
//	string temp = "Soy " + Usuario::getName();
//	return temp;
//}