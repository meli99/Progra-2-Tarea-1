#pragma once
#include <string>
#include <sstream>
using namespace std;

class Producto
{
protected:
	string nombre;
	float precio;
	int cantidad;

public:
	Producto();
	Producto(string nombre, float precio, int cantidad);
	~Producto();

	string getNombre();
	virtual float getPrecio() = 0;
	int getCantidad();

	void setNombre(string n);
	void setPrecio(float p);
	void setCantidad(int c);

	virtual string toString();
};

