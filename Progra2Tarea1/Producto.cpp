#include "Producto.h"

Producto::Producto() {

}

Producto::Producto(string nombre, float precio, int cantidad) {

}

Producto::~Producto() {

}

string Producto::getNombre() {
	return nombre;
}

int Producto::getCantidad() {
	return cantidad;
}

void Producto::setNombre(string n) {
	nombre = n;
}

void Producto::setPrecio(float p) {
	precio = p;
}

void Producto::setCantidad(int c) {
	cantidad = c;
}

string Producto::toString() {

}