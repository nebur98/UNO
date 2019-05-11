#include "Jugador.h"

jugador::jugador(string nickname) : nickname(nickname), cartas(new lista<carta>()) {}

jugador::~jugador() {

	//Por el momento vacío.. (Debería de borrar la lista)
}

string jugador::get_nickname() {
	return nickname;
}