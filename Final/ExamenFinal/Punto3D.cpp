#include "Punto3D.h"

#include <iostream>

using namespace std;

Punto3D::Punto3D(): Punto2D()
{
	this->z = 0.0;
}

Punto3D::Punto3D(Punto2D& p, double z_) : Punto2D(p.getX(), p.getY())
{
	this->z = z_;
}

Punto3D::~Punto3D()
= default;

void Punto3D::setZ(double z_)
{
	this->z = z_;
}

double Punto3D::getZ()
{
	return this->z;
}

double Punto3D::getMagnitude()
{
	const double res = sqrt(pow(getX(), 2) + pow(getY(), 2) + pow(z, 2));
	return res;
}

Punto3D Punto3D::operator+(Punto3D& p)
{
	Punto3D res;
	res.setX(this->getX() + p.getX());
	res.setY(this->getY() + p.getY());
	res.setZ(this->getZ() + p.getZ());
	return res;
}

Punto3D Punto3D::operator-(Punto3D& p)
{
	Punto3D res;
	res.setX(this->getX() - p.getX());
	res.setY(this->getY() - p.getY());
	res.setZ(this->getZ() - p.getZ());
	return res;
}

Punto3D Punto3D::operator*(double& k)
{
	Punto3D res;
	res.setX(this->getX() * k);
	res.setY(this->getY() * k);
	res.setZ(this->getZ() * k);
	return res;
}


ostream& operator <<(ostream& o, Punto3D& p)
{
	o << "(" << p.getX() << ", " << p.getY() << ", " << p.getZ() << ")";
	return o;
}

istream& operator >>(istream& i, Punto3D& p)
{
	double x, y;

	cout << "Introducir valores para X: ";
	i >> x;
	p.setX(x);
	i.ignore();

	cout << "Introducir valores para Y: ";
	i >> y;
	p.setY(y);
	i.ignore();

	cout << "Introducir valores para Z: ";
	i >> p.z;
	i.ignore();
	return i;
}
