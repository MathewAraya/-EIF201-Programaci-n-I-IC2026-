#include "Matriz.h"
#include <iostream>
#include <iomanip>

const int filas = 3;
const int columnas = 3;


int datos[filas][columnas];

void leerMatriz()
{
	std::cout << "Ingrese los valores para llenar la matriz: " << std::endl;

	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < columnas; j++) {

			std::cin >> datos[i][j];

		}
	}

}

void imprimirMatriz()
{
	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < columnas; j++) {
			std::cout << std::setw(6) << datos[i][j];
		}
		std::cout << std::endl;
	}
}

int sumarFilas()
{

	for (int i = 0; i < filas; i++) {
		int suma = 0;
		for (int j = 0; j < columnas; j++) {
			suma = suma + datos[i][j];
		}
		std::cout << "El numero de fila " << i + 1 << " y su suma es " << suma << std::endl;
	}


	return 0;
}

int sumarColumnas()
{

	for (int j = 0; j < columnas; j++) {
		int suma = 0;
		for (int i = 0; i < filas ; i++) {
			suma = suma + datos[i][j];
		}
		std::cout << "El numero de columna " << j + 1 << " y su suma es " << suma << std::endl;
	}

	return 0;
}

int sumarDiagonal()
{
	int suma = 0;
	for (int i = 0; i < filas; i++) {
		suma = suma + datos[i][i];
	}
	std::cout << "la suma de la diagonal es " << suma;

	return 0;
}
