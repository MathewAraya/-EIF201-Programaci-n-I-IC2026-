#include "Ejercicio4.h"




std::string extraccionNombre(std::string nombreCompleto)
{
	std::string saveName;
	char M=' ';
	for (int i = 0; i < nombreCompleto.length(); i++) {
		M = nombreCompleto[i];
		if (M == ' ') {
			return saveName;

		}
		else {
			saveName = saveName + M;
		}

	}

	return saveName;
};

std::string extraccionApellido(std::string apellido)
{
	std::string saveApellido;
	char M = ' ';
	for (int i = 0; i < apellido.length(); i++) {
		M = apellido[i];
		if (M == ' ') {
			for (int j = i+1; j < apellido.length(); j++) {

				M = apellido[j];
				if (M == ' ') {
					return saveApellido;
				}

		else {
			saveApellido = saveApellido + M;
		}
			}
			
		}
		
	}

	return saveApellido;
	
}

void cantidadVocales(std::string nombreCompleto)
{

	int contador = 0;


	std::string saveName;
	char M = ' ';
	for (int i = 0; i < nombreCompleto.length(); i++) {
		M = nombreCompleto[i];
		if (M == 'A'||M=='E'||M=='I'||M=='O'||M=='U') {
			contador = contador + 1;

		}if (M=='a'||M=='e'||M=='i'||M=='o'||M=='u') {
			contador = contador + 1;
		}
		
	}
	std::cout <<"La cantidad de vocales es: "<< contador << std::endl;
};




std::string nombreMayusculas(std::string nombreCompleto)
{

	for (int i = 0; i < nombreCompleto.length(); i++) {
		nombreCompleto[i] = toupper(nombreCompleto[i]);
	}


	return nombreCompleto;
}
int longitudTotal(std::string nombreCompleto)
{
	int conteo = 0;
	for (int i = 0; i < nombreCompleto.length(); i++) {
		if (nombreCompleto[i] != ' ') {
			conteo = conteo + 1;
		}
	}


	return conteo;
}
