#include "Invertido.h"





void mostrarArreglos(int arregloOriginal[], int tamanio)
{
	for (int i = 0; i < tamanio; i++) {
		std::cout <<" "<< arregloOriginal[i];
	}

}

void invertirArreglo(int arregloOriginal[], int arregloInverso[], int tamanio)
{
	int j = 0;
	for (int i = tamanio - 1; i >= 0; i--) {
		arregloInverso[j] = arregloOriginal[i];
		j++;
	}
}
