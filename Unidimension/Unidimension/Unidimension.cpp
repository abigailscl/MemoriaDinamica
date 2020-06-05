// Unidimension.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <sstream>
#include "Ingreso.h"
#include "Unidimensional.h"
#include "Operation.h"

int main()
{
    Ingreso enter;
    
    Operation operation;
    string str;
    int dimension;

    str = enter.leer("Ingrese el tamaño del arreglo: ", 1);
    istringstream(str) >> dimension;
    Unidimensional arr(dimension);
        
    arr.wax();
    arr.fill();
    arr.print();
    cout << "\nEl minimo comun multiplo es: " << operation.mcm(arr) << endl;
    cout << "El maximo comun divisor es: " << operation.mcd(arr) << endl;
    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
