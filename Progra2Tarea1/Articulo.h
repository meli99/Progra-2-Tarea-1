#pragma once
#include "Producto.h"
#include "Fecha.h"

class Articulo : public Producto
{
private:
	Fecha fechaVenta;

private:
	Articulo();
	~Articulo();

	float getPrecio();
};

