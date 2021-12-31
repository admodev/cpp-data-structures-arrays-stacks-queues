#pragma once

class Array
{
	int m_iCantElementos;

	int* m_piArray;

public:
	Array(int m_iCantElementos);
	~Array(void);

	bool FijaTam(int m_iCantElementos);

	int LeerTam() const;

	bool FijarValor(int iElemento, int iValor);

	bool LeerValor(int iElemento, int& iValor) const;

	void Limpiar(iValor);
};