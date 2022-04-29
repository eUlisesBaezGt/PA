#pragma once
#include <iostream>
#include "Punto2D.h"

using namespace std;

class Punto3D : public Punto2D
{
private:
	double z; // coordenada 'z'
public:
	Punto3D();
	Punto3D(Punto2D&, double);
	~Punto3D();
	void setZ(double);
	double getZ();
	double getMagnitude();

	Punto3D operator +(Punto3D&);
	Punto3D operator -(Punto3D&);
	Punto3D operator *(double&);
	friend ostream& operator <<(ostream&, Punto3D&);
	friend istream& operator >>(istream&, Punto3D&);
};
