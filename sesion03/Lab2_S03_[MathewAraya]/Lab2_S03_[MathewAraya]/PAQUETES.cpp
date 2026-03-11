#include "PAQUETES.h"
#include <iostream> 

double* crearRegistro(int& cantidad)
{

	do
	{
		std::cout << "Ingresa el numero de paquetes: " << std::endl;
		std::cin >> cantidad;

	} while (cantidad<=0);
	double* pesos = new double[cantidad];


	return pesos;
}

void ingresarPesos(double* pesos, int cantidad)
{

	for (int i = 0; i < cantidad; i++) {
		do
		{
		std::cout << "Ingrese el peso de cada paquete " << i+1<<":";
		std::cin >> pesos[i];
		} while (pesos[i]<=0);
		
	}

}

double calcularPesoTotal(const double* pesos, int cantidad)
{
	double total = 0.0;
	for (int i = 0; i < cantidad; i++) {

		total = total + pesos[i];
	}

	return total;
}

int contarSobreLimite(const double* pesos, int cantidad, double limite)
{

	int contador = 0;

	for (int i = 0; i < cantidad; i++) {
		if (pesos[i] > limite) {
			contador++;
		}
	}




	return contador;
}

const double* buscarMasPesado(const double* pesos, int cantidad)
{

	const double* pesoMax= &pesos[0];
	for (int i = 0; i < cantidad; i++) {
	
		if (pesos[i] > *pesoMax) {
			pesoMax = &pesos[i];
		}
	}

	return pesoMax;
}
