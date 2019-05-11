#pragma once

/*

** Autor: Rubén Pereira Ugalde
** Localidad y Fecha: Costa Rica - Mayo 2019
** Justificación:
		Clase sumamente necesaria, el mazo se compone de cartas, 
		exactamente 108, dónde tenemos 25 de cada color, 4 colores, y
		8 cartas comodín, (4 come cuatro y 4 cambio color)...
		El tipo de la carta (normal o comodín) se tratará como un 
		caracter, de igual forma ocurre con el color (Amarillo, Azul,
		Rojo, Verde), esto facilita enormemente el simular una 
		inteligencia artificial mediante árboles de búsqueda, 
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
	char tipo; // 'N' Normales -- 'C' Comodín
	char color;  // 'A' Amarillo, 'R' Rojo ...
};
