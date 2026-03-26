#include "Flota.h"
namespace UNA {

	Flota::Flota()
	{
		capacidad = 3;
		cantidad = 0;
		vehiculos = new Vehiculo * [capacidad];


	}

	Flota::~Flota()
	{

		for (int i = 0; i < cantidad; i++) {

			delete vehiculos[i];

		}
		delete[] vehiculos;


	}

	void Flota::agregar(Vehiculo* nuevo)
	{

		if (cantidad == capacidad) {

			Vehiculo** nuevoArreglo = new Vehiculo * [capacidad * 2];
			for (int i = 0; i < cantidad; i++) {
				nuevoArreglo[i] = vehiculos[i];
			}

			delete[] vehiculos;
			vehiculos = nuevoArreglo;
			capacidad = capacidad * 2;
		}

		vehiculos[cantidad] = nuevo;
		cantidad++;

	}

	Vehiculo* Flota::buscarPorPlaca(std::string placa)
	{

		for (int i = 0; i < cantidad; i++) {
			if (vehiculos[i]->getPlaca()==placa) {
				return vehiculos[i];
			}
		}

		return nullptr;
	}

	void Flota::mostrarPorMarca(std::string marca)
	{

		int conteo = 0;

		for (int i = 0; i < cantidad; i++){

			if (vehiculos[i]->getMarca() == marca) {

			vehiculos[i]->mostrar();
			conteo++;

			}
			
		}
		if (conteo == 0) {
			std::cout << "No hay vehiculos que mostrar " << std::endl;
		}
		else {
			std::cout << "El conteo de vehiculos es " << conteo << std::endl;;
		}


	}

	bool Flota::eliminar(std::string placa)
	{

		for (int i = 0; i < cantidad; i++) {
			if (vehiculos[i]->getPlaca() == placa) {
				if (vehiculos[i]->getActivo()) {
					std::cout << "Error: El vehiculo " << placa << " aun esta activo. Debe desactivarlo antes de darlo de baja.\n";
					return false;
				}
				delete vehiculos[i];

				for (int j = i; j < cantidad - 1; j++) {
					vehiculos[j] = vehiculos[j + 1];
				}
				cantidad--;
				std::cout << "Vehiculo " << placa << " eliminado de la flota.\n";
				return true;
			}
		}
		std::cout << "Error: No se encontro un vehiculo con placa \"" << placa << "\".\n";
		return false;



	}

	int Flota::contarActivos()const
	{
		int activos = 0;
		for (int i = 0; i < cantidad; i++) {
			if (vehiculos[i]->getActivo()) {
				activos++;
			}
		}
		return activos;
	}

	void Flota::mostrarTodos()const
	{
		if (cantidad == 0) {
			std::cout << "La flota esta vacia. No hay vehiculos registrados.\n";
			return;
		}
		std::cout << "--- FLOTA COMPLETA (" << cantidad << " vehiculos) ---\n";
		for (int i = 0; i < cantidad; i++) {
			vehiculos[i]->mostrar();
		}

	}


}
