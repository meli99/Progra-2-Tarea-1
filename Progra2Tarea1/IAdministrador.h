#pragma once
#include <string>
#include "Producto.h"
using namespace std;

class IAdministrador
{
public:
	virtual int getIdentificador() = 0;
	virtual string getNombre() = 0;
	virtual void setNombre(string) = 0;
	virtual string toString() = 0;
	virtual void insertar(Producto) = 0;
	virtual void agregarCantidades(string idProducto, int cantidad) = 0;
	virtual void disminuirCantidades(string idProducto, int cantidad) = 0;
	virtual void borrar(string id) = 0;
	virtual Producto consultar(string id) = 0;
	virtual void ingresarDinero() = 0;
	virtual void retirarDinero(int cantidad) = 0;
};

