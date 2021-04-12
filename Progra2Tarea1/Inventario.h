#pragma once
#include <string>
#include "Producto.h"
#include "Caja.h"
#include "IVendedor.h"
#include "IAdministrador.h"

class Inventario : public IVendedor, public IAdministrador
{
private:
	int identificador;
	string nombre;
	Producto* coleccionDeProductos;
	Caja caja;

public:
	Inventario();
	Inventario(int id, string nom, Producto* p, Caja c);
	~Inventario();

	int getIdentificador();
	string getNombre();
	Producto* getColeccionDeProductos();
	Caja getCaja();

	void setIdentificador(int);
	void setNombre(string);
	void setColeccionDeProductos(Producto*);
	void setCaja(Caja);

	string Inventario::IVendedor::toString();
	string Inventario::IAdministrador::toString();
};

