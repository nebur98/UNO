#pragma once
/*

** Autor: Rubén Pereira Ugalde 
** Localidad y Fecha: Costa Rica - Mayo 2019
** Justificación:
		Clase necesaria para implementar funcionalidad del juego, es
		precisamente aquí en dónde se implementará algoritmos y se 
		jugará en sí. Para comenzar un juego de UNO nada más 
		necesitaremos jugadores dispuestos y un mazo de cartas...
		Demás colecciones tales cómo los árboles de búsqueda para 
		simular una mini inteligencia artificial del computador se 
		encontrarán respectivamente en la clase Jugador, ya que 
		el computador es un jugador como tal...

*/

#include "Jugador.h"

class juego {
	juego(lista<jugador>*, lista<carta>*);
	~juego(); //Debe de borrar ambas colecciones, paso a paso.


private:
	lista<jugador> * _jugadores; //dos jugadores
	lista<carta> * _mazo; //Mazo con 108 cartas
};
