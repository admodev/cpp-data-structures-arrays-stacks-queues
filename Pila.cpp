#include "Pila.h"

Pila::Pila(int iCantElementos) : Array(iCantElementos)
{
	m_iUltimoElemento = 0;
}

Pila::~Pila(void)
{
}

bool Pila::Insertar(int iValor)
{
	// Fijo el valor de un elemento en el ultimo elemento
	if (FijarValor(m_iUltimoElemento, iValor))
	{
		m_iUltimoElemento++;

		return true;
	}
	else
	{
		return false;
	};
}

bool Pila::Extraer(int& iValor)
{
	if (LeerValor(m_iUltimoElemento - 1, iValor))
	{
		m_iUltimoElemento--;

		return true;
	}
	else
	{
		return false;
	};
}

void Pila::Vaciar()
{
	m_iUltimoElemento = 0;
}

bool Pila::FijaTam(int iCantElementos)
{
	if (Array::FijaTam(iCantElementos))
	{
		Vaciar();

		return true;
	}
	else
	{
		return false;
	};
}