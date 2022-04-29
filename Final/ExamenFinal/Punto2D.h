#pragma once
#include <iostream>
#include <cmath>

using namespace std;

class Punto2D
{
private:
	double x, y; // coordenadas 'x' y 'y'
public:
	Punto2D();
	Punto2D(double, double);
	~Punto2D();
	void setX(double);
	void setY(double);
	double getX();
	double getY();
	double getMagnitude();

	Punto2D operator +(Punto2D&);
	Punto2D operator -(Punto2D&);
	Punto2D operator *(double&);
	friend ostream& operator <<(ostream&, Punto2D&);
	friend istream& operator >>(istream&, Punto2D&);
};
