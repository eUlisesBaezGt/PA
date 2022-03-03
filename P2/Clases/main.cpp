#include <string>

using namespace std;

class Animal {
public:
    string nombre;
    int edad{};

    static void establecer_tipo(string Tipo);

    void establecer_genero(char gen);

    string obtener_tipo();

    char obtener_genero();


private:
    int id{};
    string Tipo;
    char genero{};
};

void Animal::establecer_tipo(string Tipo) {
    Tipo = Tipo;
}

void Animal::establecer_genero(char gen) {
    genero = gen;
}

string Animal::obtener_tipo() {
    return Tipo;
}

char Animal::obtener_genero() {
    return genero;
}


int main() {
    Animal a;
    a.nombre = "Perro";
    a.edad = 5;
    a.establecer_tipo("Perro");
    a.establecer_genero('F');
}


