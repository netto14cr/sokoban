

// PilaCaja.h
// Autor: Néstor Leiva
// Definicio  de la clase pilaCaja


#include<stack>
#include<iostream>
#include<string>



//	Struct pila
struct Pila
{
	std::stack<char> insertar(char caja);
	void quitarCajaDeLaPila(std::stack<char>& pilaCaja);
	void borrarPila(std::stack<char>& pilaCaja);
};
