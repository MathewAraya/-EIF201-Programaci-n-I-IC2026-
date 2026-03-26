#include "Vehiculo.h"

namespace UNA {

	Vehiculo::Vehiculo(std::string placa, std::string marca, int anio, double kilometraje)
	{
		
		this->placa = placa;
		this->marca = marca;
		this->anio = anio;
		this->kilometraje = kilometraje;
		this->activo = true;

	}

	std::string Vehiculo::getPlaca() const
	{
		return placa;
	}

	std::string Vehiculo::getMarca() const
	{
		return marca;
	}

	int Vehiculo::getAnio() const
	{
		return anio;
	}

	double Vehiculo::getKilometraje() const
	{
		return kilometraje;
	}

	bool Vehiculo::getActivo() const
	{
		return activo;
	}

	void Vehiculo::registrarKilometros(double km)
	{

		if (this->activo == true) {
			if (km > 0) {
				this->kilometraje = this->kilometraje + km;
			}
			
		}
		else {
			std::cout << "Error. El carro no esta activo";
		}
		

	}

	void Vehiculo::desactivar()
	{
		
		if (this->activo == false) {
			std::cout << "Esta fuera de servicio";
		}
		else {
			this->activo = false;
		}

	}

	void Vehiculo::reactivar()
	{
		if (this->activo == true) {
		
			std::cout << "El vehiculo esta activo";
		}

		else {
			this-> activo = true;
		}



	}

	void Vehiculo::mostrar() const
	{

		std::cout<<" Placa: " << this->placa << std::endl;
		std::cout<<"Marca: " << this->marca << std::endl;
		std::cout<<"Anio: " << this->anio << std::endl;
		std::cout<<"Kilometraje: " << this->kilometraje << std::endl;
		if (this->activo == true) {
			std::cout << "ACTIVO" << std::endl;
		}
		else {
			std::cout << "FUERA DE SERVICIO"<<std::endl;
		}
	}

}
