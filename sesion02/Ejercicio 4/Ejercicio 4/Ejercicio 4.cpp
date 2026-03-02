#include <iostream>
#include<string>
#include"Ejercicio4.h"

int main()
{
	std::string solicitudDeNombre;
	std::cout << "Ingrese el nombre completo: " << std::endl;
	std::getline(std::cin, solicitudDeNombre);

	std::cout<< extraccionNombre(solicitudDeNombre)<<std::endl;
std::cout << extraccionApellido(solicitudDeNombre)<<std::endl;
cantidadVocales(solicitudDeNombre);
std::cout << nombreMayusculas(solicitudDeNombre) << std::endl;
std::cout<<longitudTotal(solicitudDeNombre);
}

