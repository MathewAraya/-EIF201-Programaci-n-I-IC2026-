#pragma once
class Estadisticas
{
public:
    int array[10];
    void ingresarDatos();
    int valorMayor(int array[], int tamaño);
    int valorMenor(int array[], int tamaño);
    int sumaTotal(int array[], int tamaño);
    double promedioAritmetico(int array[], int tamaño);
};
