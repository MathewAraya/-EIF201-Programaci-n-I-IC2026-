#include "Estadisticas.h"
#include <iostream>

void Estadisticas::ingresarDatos() {
    for (int i = 0; i < 10; i++) {
        std::cout << "Ingrese el numero " << i << ": ";
        std::cin >> array[i];
    }
}

int Estadisticas::valorMayor(int array[], int tamaño) {
    int mayor = array[0];
    for (int i = 0; i < tamaño; i++) {
        if (array[i] > mayor) {
            mayor = array[i];
        }
    }
    return mayor;
}

int Estadisticas::valorMenor(int array[], int tamaño) {
    int menor = array[0];
    for (int i = 0; i < tamaño; i++) {
        if (array[i] < menor) {
            menor = array[i];
        }
    }
    return menor;
}

int Estadisticas::sumaTotal(int array[], int tamaño) {
    int suma = 0;
    for (int i = 0; i < tamaño; i++) {
        suma=suma + array[i];
    }
    return suma;
}

double Estadisticas::promedioAritmetico(int array[], int tamaño) {
    int suma = sumaTotal(array, tamaño);
    return (double)suma / tamaño;
}
