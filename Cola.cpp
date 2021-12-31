#include "Cola.h"

Cola::Cola(int iCantElementos) : Array(iCantElementos)
{
	m_iPrimerElemento = m_iUltimoElemento;
}

Cola::~Cola(void)
{
}

bool Cola::Insertar(int iValor)
{
	if (m_iUltimoElemento == m_iPrimerElemento - 1 || (m_iUltimoElemento == LeerTam() - 1 && m_iPrimerElemento == 0))
	{
		return false;
	};

	if (FijarValor(m_iUltimoElemento, iValor))
	{
		m_iUltimoElemento++;

		if (m_iUltimoElemento == LeerTam())
		{
			m_iUltimoElemento = 0;

			return true;
		}
		else
		{
			return false;
		};
	}
}

bool Cola::Extraer(int& iValor)
{
	if (m_iPrimerElemento == m_iUltimoElemento)
	{
		return false;
	};

	if (LeerValor(m_iPrimerElemento, iValor))
	{
		m_iPrimerElemento++;

		if (m_iPrimerElemento == LeerTam())
		{
			m_iPrimerElemento = 0;

			return true;
		};
	}
	else
	{
		return false;
	};
}

void Cola::Vaciar()
{
	m_iPrimerElemento = m_iUltimoElemento = 0;
}

bool Cola::FijaTam(int iCantidadElementos)
{
	if (Array::FijaTam(iCantidadElementos))
	{
		Vaciar();

		return true;
	}
	else
	{
		return false;
	};
}