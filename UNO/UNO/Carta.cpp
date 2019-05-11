#include "Carta.h"

carta::carta(string nombre, char tipo, char color) : nombre(nombre), tipo(tipo), color(color) {}

string carta::get_nombre() const {
	return nombre;
}

char carta::get_tipo() const {
	return tipo;
}

char carta::get_color() const {
	return color;
}

string carta::toString() {
	std::stringstream s;
	s << nombre << tipo << color << "\n";
	/*s << "=============== \n";
	s << "=             = \n";
	s << "=             = \n";
	s << "=             = \n";
	s << "=             = \n";
	s << "=             = \n";
	s << "=             = \n";
	s << "=             = \n";
	s << "=============== \n";*/
	return s.str();

}