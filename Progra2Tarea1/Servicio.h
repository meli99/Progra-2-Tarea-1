#pragma once
#include "Producto.h"

class Servicio : public Producto
{
private:
	float porcentajeDescuento;

private:
	Servicio();
	~Servicio();
	float getPrecio();
};

