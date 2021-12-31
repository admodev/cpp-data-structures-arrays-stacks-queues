#pragma once

#include "Array.h"

class Pila : private Array
{
	int m_iUltimoElemento;
public:
	Pila(int iCantElementos);
	~Pila(void);

	bool Insertar(int iValor);

	bool Extraer(int& iValor);

	void Vaciar();

	bool FijaTam(int iCantElementos);
};