#include <iostream>

using namespace std;

#include "Pila.h"

int main()
{
	Pila p1(10);

	for (int i = 0; i < 10; i++)
	{
		if (p1.Insertar(i))
		{
			cout << "Inserto valor: " << i << "(ok)" << endl;
		}
		else
		{
			cout << "Inserto valor: " << i << "(err)" << endl;
		};

		int iValor;

		for (int j = 0; j < 5; j++)
		{
				if (p1.Extraer(iValor))
				{
					cout << "Extraigo valor: " << j << " : " << iValor << endl;
				}
				else
				{
					cout << "Extraigo valor: " << j << " : #err " << endl;
				};
		};
	};

	return 0;
}