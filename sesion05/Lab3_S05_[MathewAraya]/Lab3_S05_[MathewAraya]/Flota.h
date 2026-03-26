#ifndef FLOTA_H
#define FLOTA_H
#include<string>
#include <iostream>
#include"Vehiculo.h"


namespace UNA {

	class Flota
	{

	private:

		Vehiculo** vehiculos;
		int cantidad;
		int capacidad;
	public:

		Flota();
		~Flota();
		void agregar(Vehiculo* nuevo);
		Vehiculo* buscarPorPlaca(std::string placa);
		void mostrarPorMarca(std::string marca);
		bool eliminar(std::string placa);
		int contarActivos()const;
		void mostrarTodos()const;
	};
}
#endif