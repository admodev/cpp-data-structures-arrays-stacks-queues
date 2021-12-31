#pragma once

#include "Array.h"

class Cola : private Array
{
	// Indica por donde se insertan y extraen elementos
	int m_iPrimerElemento;
	int m_iUltimoElemento;
public:
	Cola(int iCantElementos);
	~Cola(void);

	bool Insertar(int iValor);
	bool Extraer(int& iValor);

	void Vaciar();

	bool FijaTam(int iCantElementos);
};