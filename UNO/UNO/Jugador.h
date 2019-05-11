#pragma once
#include <sstream>
#include "Lista.h"
#include "Carta.h"
using std::string;


class jugador {

public:
	jugador(string);
    ~jugador();
	string get_nickname();
	//void penaliza_come(int); //Come 2, Come 4 u acumulado...
	//void come_normal(); //No tiene el color u el número...

private:
	string nickname;
	lista<carta> * cartas;
};