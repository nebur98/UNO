#include "Jugador.h"

jugador::jugador(string nickname) : nickname(nickname), cartas(new lista<carta>()) {}

jugador::~jugador() {

	//Por el momento vac�o.. (Deber�a de borrar la lista)
}

string jugador::get_nickname() {
	return nickname;
}