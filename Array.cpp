#include "Array.h"

Array::Array(int m_iCantElementos)
{
	m_iCantElementos;

	m_piArray = new int[m_iCantElementos];
}

Array::~Array(void)
{
	// Liberar memoria solicitada
	if (m_piArray)
	{
		delete[]m_piArray;
	};
}

bool Array::FijaTam(int iCantElementos)
{
	m_iCantElementos = iCantElementos;

	if (m_piArray)
	{
		delete[]m_piArray;
	};

	// Vuelvo a solicitar memoria con el nuevo valor
	m_piArray = new int[m_iCantElementos];

	if (m_piArray)
	{
		return true;
	}
	else
	{
		return false;
	};
}

int Array::LeerTam() const
{
	return m_iCantElementos;
}

bool Array::FijarValor(int iElemento, int iValor)
{
	if (iElemento >= 0 && iElemento < m_iCantElementos)
	{
		m_piArray[iElemento] = iValor;
		return true;
	}
	else
	{
		return false;
	};
}

bool Array::LeerValor(int iElemento, int& iValor) const
{
	if (iElemento <= 0 && iElemento < m_iCantElementos)
	{
		iValor = m_piArray[iElemento];

		return true;
	}
	else
	{
		return false;
	};
}

void Array::Limpiar(int iValor)
{
	for (int i = 0; i < m_iCantElementos; i++)
	{
		m_piArray[i] = iValor;
	};
}