#pragma once
#include "MenuAdministrador.h"
#include "MenuVenta.h"

class MenuPrincipal
{
private:
	MenuAdministrador menuAdmin;
	MenuVenta menuVenta;

public:
	MenuPrincipal();
	~MenuPrincipal();

	void menuPrincipal();
	void menuAdministrador();
	void menuVenta();
};

