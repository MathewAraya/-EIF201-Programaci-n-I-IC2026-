#include "Invertido.h"
#include <iostream>

int main()
{

	const int Maximo = 20;
	int arregloOriginal[20];
	int arregloInverso[20];


	int valor = 0;
	do
	{
			std::cout << "ingrese los items del arreglo" << std::endl;
			std::cin >> valor;
			
	} while (valor > 20 || valor <= 0);

	
		for (int i = 0; i < valor; i++) {
			std::cin>>arregloOriginal[i];
		}
		invertirArreglo(arregloOriginal, arregloInverso, valor);
		mostrarArreglos(arregloInverso,valor);
		mostrarArreglos(arregloOriginal, valor);
		
	}

