#pragma once
/*

** Autor: Rub�n Pereira Ugalde 
** Localidad y Fecha: Costa Rica - Mayo 2019
** Justificaci�n:
		Clase necesaria para implementar funcionalidad del juego, es
		precisamente aqu� en d�nde se implementar� algoritmos y se 
		jugar� en s�. Para comenzar un juego de UNO nada m�s 
		necesitaremos jugadores dispuestos y un mazo de cartas...
		Dem�s colecciones tales c�mo los �rboles de b�squeda para 
		simular una mini inteligencia artificial del computador se 
		encontrar�n respectivamente en la clase Jugador, ya que 
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
