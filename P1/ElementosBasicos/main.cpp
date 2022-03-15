#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

// DECLARACION DE FUNCIONES CON FIRMAS
void suma(int a, int b);

int suma_regresoValor(int a, int b);

float suma_decimales(float a = 1.0, float b = 1.0);

int suma_decimales(int a, int b);

int main() {
    int consola; // Para evitar que se cierre la consola

    // Tipos de datos
    /*int miNumero;
    cin >> miNumero;
    cout << miNumero << endl;*/

/*  int entero = 5;
    float decimal_float = 5.5;
    double decimal_double = 5.6;
    bool booleano = true;
    char caracter = 'a';
    cout << entero << ", " << decimal_float << ", " << decimal_double << ", ";
    cout << booleano << ", " << caracter << endl << "\n";
    string cadena = "banana";
    cout << "Caso de strings" << "\n" << cadena;*/


    // Captura de datos cin
    /*int x;
    cout << "Escribe un numero: ";
    cin >> x;
    cout << "El numero ingresado es: " << x;*/


    // Manipulacion de decimales al imprimir en consola
    /*double float_value = 3.14159;
    cout << float_value << endl;
    cout << setprecision(4) << float_value << "\n";
    cout << setprecision(9) << float_value << "\n";
    cout << fixed;      // Pone los decimales después del punto REALES
    // También permite agregar cero a números que tengan menos decimales que los solicitados
    cout << setprecision(5) << float_value << "\n";
    cout << setprecision(10) << float_value << "\n";
    cin >> float_value;*/


    // Variables constantes para valores fijos no modificables, de solo lectura
    /*const float PI = 3.14156;
    float resultado = PI * 5;
    cout << resultado;*/


    // strings
    /* string comida = "banana";
     cout << comida[0]; // acceder a un caracter individual con el indice*/


    // Concatenacion
    /*string nombre = "Ulises";
    string apellido = "Baez";
    string nombreCompleto = nombre + " " + apellido;
    cout << nombreCompleto << endl;*/

    // Anexo
    /*string nombre = "Ulises";
    string apellido = "Baez";
    string nombreCompleto = nombre.append("" + apellido);
    cout << nombreCompleto;*/


    // Lenght o size --> tamaño del string
    /*string nombre = "Ulises";
    cout << "Palabra a evaluar: " << nombre << "\n";
    cout << "Uso de length: " << nombre.length() << endl;
    cout << "Uso de size: " << nombre.size() << endl;*/


    // Acceso a string (modificacion)
    /*string nombre = "Ulises";
    cout << "Palabra: " << nombre << endl;
    cout << "Posicion 3: " << nombre[2] << endl;
    nombre[2] = 'B';
    cout << "Palabra despues del cambio: " << nombre << endl;
    cout << "Posicion 3 despues del cambio: " << nombre[2] << endl;*/


    // Captura de string usando cin
    /* string nombre;
     cout << "Escribe tu nombre: ";
     cin >> nombre;
     getline(cin, nombre); // linea completa
     cout << "Tu nombre es: " << nombre << endl;*/

    // Matemáticas
    /*float a, b, res1, res2;
    a = 5.5;
    b = 4.4;
    res1 = min(a, b);
    res2 = max(a, b);
    cout << "Min: " << res1 << ", max: " << res2 << endl;*/

    // Matemáticas avanzadas
    /*float angulo = 90;
    float radianes = angulo * 0.0174533;
    float resultado = sin(radianes);
    cout << "Resultado: " << resultado << endl;
    cout << pow(2, 3) << endl;*/

    // Instrucciones de selección
    /*int num = 10;
    if (num < 10) {
        cout << "Menor a 10" << endl;
    } else if (num < 20) {
        cout << "Menor a 20" << endl;
    } else {
        cout << "Mayor a 10" << endl;
    }
    switch (num) {
        case 1:
            cout << "Numero igual a 1" << endl;
            break;
        default:
            cout << "Número no válido" << endl;
            break;
    }*/

    // If ternario, asignar valor a variable dependiendo de una condición
    /*int a, res;
    a = 10;
    // Condición ? true : false
    res = (a < 10) ? pow(a, 2) : pow(a, 1);
    cout << res << endl;*/


    // Instrucciones de repetición
    // WHILE
    /*int a = 0;
    int control = 0;*/

    /*while (control < 5) {
        a = control + 1;
        cout << a << endl;
        control++;
    }

    // FOR
    for (int i = 0; i < 5; ++i) {
        a = i + 1;
        cout << a << endl;
    }*/

    // DO WHILE
    /* do {
         a = control + 1;
         cout << a << endl;
     } while (control < 0);*/


    // BREAK Y CONTINUE
    // BREAK INTERRUMPE AHÏ
    /*for (int i = 0; i < 5; ++i) {
        a = i + 1;
        if (a == 4) {
            break;
        }
        cout << a << endl;
    }*/
    /*for (int i = 0; i < 10; ++i) {
        a = i + 1;
        if (a == 4) {
            continue;
        }
        cout << a << endl;
    }*/

    // LLAMADO DE FUNCIONES
    /*int val1, val2, resultado;
    val1 = 5;
    val2 = 6;

    suma(val1, val2);
    resultado = suma_regresoValor(val1, val2);
    cout << resultado << endl;*/
//    cout << suma_decimales(2) << endl;

    // Sobrecarga de funciones
    /*suma(1, 1);
    suma(1.1f, 1.1f);*/


    cin >> consola;
    return 0;
}

// DEFINICIÓN DE FUNCIONES
/*void suma(int a) {
    int res;
    res = a;
    cout << res << endl;
}

void suma(float a, float b) {
    float res;
    res = a + b;
    cout << res << endl;
}

float suma_decimales(float a, float b) {
    float res;
    res = a + b;
    return res;
}

int suma_decimales(int a, int b) {
    int res;
    res = a + b;
    return res;
}

int suma_regresoValor(int a, int b) {
    int res;
    res = a + b;
    return res;
}*/
