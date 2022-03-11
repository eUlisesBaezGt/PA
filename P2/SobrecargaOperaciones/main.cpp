#include <iostream>
#include <string>
#include <vector>


#pragma warning(disable:4996)

using namespace std;

class Punto2D {
public:
    Punto2D();

    Punto2D(float, float);

    ~Punto2D() = default;

    [[nodiscard]] float getX() const;

    void setX(float);

    [[nodiscard]] float getY() const;

    void setY(float);

    Punto2D &operator+(Punto2D &p);

    Punto2D &operator++();

    friend ostream &operator<<(ostream &o, Punto2D &p);

    friend istream &operator>>(istream &i, Punto2D &p);

private:
    float _x;
    float _y;
};

Punto2D::Punto2D() {
    _x = 0.0f;
    _y = 0.0f;
}

Punto2D::Punto2D(float x, float y) {
    _x = x;
    _y = y;
}


float Punto2D::getX() const {
    return _x;
}

void Punto2D::setX(float x) {
    _x = x;
}

float Punto2D::getY() const {
    return _y;
}

void Punto2D::setY(float y) {
    _y = y;
}

Punto2D &Punto2D::operator+(Punto2D &p) {
    this->_x += p._x;
    this->_y += p._y;
    return *this;
}

Punto2D &Punto2D::operator++() {
    this->_x++;
    this->_y++;
    return *this;
}

ostream &operator<<(ostream &o, Punto2D &p) {
    o << "(" << p.getX() << ", " << p.getY() << ")";
    return o;
}

istream &operator>>(istream &i, Punto2D &p) {
    cout << "Introducir valores para X :";
    i >> p._x;
    cout << "Introducir valores para Y :";
    i >> p._y;
    i.ignore();
    return i;
}


int main() {

    Punto2D P(1, 1);
    Punto2D Q(5, 5);

    cout << "Punto P: " << P.getX() << ", " << P.getY() << endl;
    cout << "Despues de sumar Q a P" << endl;
    Punto2D C;
    C = P + Q;
    P = P + Q;
    cout << "Punto P: " << P.getX() << ", " << P.getY() << endl;
    cout << "Punto C: " << C.getX() << ", " << C.getY() << endl;

    Punto2D D;
    cout << P << endl;
    cin >> D;
    cout << D << endl;

    return 0;
}

