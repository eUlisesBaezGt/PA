#include "Punto2D.h"

#include <iostream>

using namespace std;

Punto2D::Punto2D()
{
	this->x = 0.0;
	this->y = 0.0;
}

Punto2D::Punto2D(double x_, double y_)
{
	this->x = x_;
	this->y = y_;
}

Punto2D::~Punto2D() = default;

void Punto2D::setX(double x_)
{
	this->x = x_;
}

void Punto2D::setY(double y_)
{
	this->y = y_;
}

double Punto2D::getX()
{
	return this->x;
}

double Punto2D::getY()
{
	return this->y;
}

double Punto2D::getMagnitude()
{
	const double res = sqrt(pow(x, 2) + pow(y, 2));
	return res;
}

Punto2D Punto2D::operator+(Punto2D& p)
{
	Punto2D res;
	res.setX(x + p.x);
	res.setY(y + p.y);
	return res;
}

Punto2D Punto2D::operator-(Punto2D& p)
{
	Punto2D res;
	res.setX(x - p.x);
	res.setY(y - p.y);
	return res;
}

Punto2D Punto2D::operator*(double& k)
{
	Punto2D res;
	res.setX(x * k);
	res.setY(y * k);
	return res;
}

ostream& operator <<(ostream& o, Punto2D& p)
{
	o << "(" << p.getX() << ", " << p.getY() << ")";
	return o;
}

istream& operator >>(istream& i, Punto2D& p)
{
	cout << "Introducir valores para X: ";
	i >> p.x;
	i.ignore();

	cout << "Introducir valores para Y: ";
	i >> p.y;
	i.ignore();

	return i;
}
