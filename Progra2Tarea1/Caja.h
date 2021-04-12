#pragma once
#include <string>
using namespace std;

class Caja
{
private:
	int dinero;

public:
	Caja();
	Caja(float);
	~Caja();

	string desgloceVuelto(string&);
	void setDinero(int dinero);
	int getDinero();

	string toString();
};

