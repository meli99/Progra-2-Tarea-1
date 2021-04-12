#pragma once
#include <string>
using namespace std;

class IVendedor
{
public:
	virtual string getNombre() = 0;
	virtual string realizarCompra(string id, int cantidad, int montoPago) = 0;
	virtual string toString() = 0;
};

