#include <iostream>
#include "PAQUETES.h"



int main()
{
	int cantidad = 0;
	double limite = 0;
	double* pesos = crearRegistro(cantidad);

	ingresarPesos(pesos, cantidad);
	double total = calcularPesoTotal(pesos, cantidad);
	double promedio = total / cantidad;
	std::cout << "El peso total es: " << total << std::endl;
	std::cout << "El promedio es: " <<promedio<< std::endl;

	std::cout << "Ingrese el limite de peso: " << std::endl;
	std::cin >> limite;

	int sobrelimite = contarSobreLimite(pesos, cantidad, limite);
	std::cout << "Paquetes sobre el limite: " << sobrelimite << std::endl;
	const double* masPesado = buscarMasPesado(pesos, cantidad);
	std::cout << "el mas pesado es: " << *masPesado << std::endl;
	delete[]pesos;
	return 0;


}


