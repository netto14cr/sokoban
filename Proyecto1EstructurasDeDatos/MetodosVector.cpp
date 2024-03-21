// main.cpp
// Autor: Néstor Leiva
// Implementacion de de metodos del vector



#include"repeticionPartida.h"



// Metodo que inserta en el vector la repticion de la partida.
std::vector<std::string> VectorRepeticion::insertar(std::string jugada) {

	std::vector<std::string> repeticionJugada;

	repeticionJugada.push_back(jugada);

	return repeticionJugada;
}

// Meotodo que elmina el vector existente.
void VectorRepeticion::borrarVector(std::vector<std::string>& vector) {

	if (!vector.empty())
	vector.clear();
}
