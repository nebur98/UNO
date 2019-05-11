#pragma once

/*

** Autor: Rub�n Pereira Ugalde
** Localidad y Fecha: Costa Rica - Mayo 2019
** Justificaci�n:
		Clase sumamente necesaria, el mazo se compone de cartas, 
		exactamente 108, d�nde tenemos 25 de cada color, 4 colores, y
		8 cartas comod�n, (4 come cuatro y 4 cambio color)...
		El tipo de la carta (normal o comod�n) se tratar� como un 
		caracter, de igual forma ocurre con el color (Amarillo, Azul,
		Rojo, Verde), esto facilita enormemente el simular una 
		inteligencia artificial mediante �rboles de b�squeda, 
		comparaciones.

*/

#include <sstream>
using std::string;

class carta {
public:
	carta(string, char, char);
	string get_nombre() const;
	char get_tipo() const;
	char get_color() const;
	string toString();
private:
	string nombre;
	char tipo; // 'N' Normales -- 'C' Comod�n
	char color;  // 'A' Amarillo, 'R' Rojo ...
};
