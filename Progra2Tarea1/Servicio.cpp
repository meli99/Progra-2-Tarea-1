#include "Servicio.h"

Servicio::Servicio() {

}

Servicio::~Servicio() {

}

float Servicio::getPrecio() {
	return precio - (precio*porcentajeDescuento);
}