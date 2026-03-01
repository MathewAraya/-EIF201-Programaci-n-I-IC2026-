#include "Estadisticas.h"
#include <iostream>

int main() {
    Estadisticas stats;
    stats.ingresarDatos();

    std::cout << "Mayor: " << stats.valorMayor(stats.array, 10) << std::endl;
    std::cout << "Menor: " << stats.valorMenor(stats.array, 10) << std::endl;
    std::cout << "Suma: " << stats.sumaTotal(stats.array, 10) << std::endl;
    std::cout << "Promedio: " << stats.promedioAritmetico(stats.array, 10) << std::endl;

    return 0;
}


