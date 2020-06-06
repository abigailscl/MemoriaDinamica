#pragma once
/******************************************************************
*            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE              *
* CARRERA: Ingenieria de Software                                 *
* SEMESTRE: Tercer semestre                                       *
* MATERIA: Estructura de Datos                                    *
* NRC: 6396                                                       *
******************************************************************/

#if !defined(__unidimensional_UML_Unidimensional_h)
#define __unidimensional_UML_Unidimensional_h

#include "Unidimensional.h"
#include "IngresoDatos.h"
#include <iostream>
#include <sstream>
#include <stdlib.h>

using namespace std;

class Unidimensional
{
public:
    void print();
    void wax();
    void fill();    
    int* getArray(void);
    void setArray(int* newArray);
    int getDimension(void);
    void setDimension(int);
    Unidimensional(int);
    
protected:
private:
    int* array;
    int dimension;


};

////////////////////////////////////////////////////////////////////////
// Name:       Unidimensional::getArray()
// Purpose:    Implementation of Unidimensional::getArray()
// Return:     int*
////////////////////////////////////////////////////////////////////////
int* Unidimensional::getArray() { return array; }
////////////////////////////////////////////////////////////////////////
// Name:       Unidimensional::setArray(int* newArray)
// Purpose:    Implementation of Unidimensional::setArray()
// Parameters:
// - newArray
// Return:     void
////////////////////////////////////////////////////////////////////////
void Unidimensional::setArray(int* newArray) { array = newArray; }
////////////////////////////////////////////////////////////////////////
// Name:       Unidimensional::getDimension()
// Purpose:    Implementation of Unidimensional::getDimension()
// Return:     int
////////////////////////////////////////////////////////////////////////
int Unidimensional::getDimension() { return dimension; }
////////////////////////////////////////////////////////////////////////
// Name:       Unidimensional::setDimension(int newDimension)
// Purpose:    Implementation of Unidimensional::setDimension()
// Return:     int
////////////////////////////////////////////////////////////////////////
void Unidimensional::setDimension(int newDimension) { dimension = newDimension; }

/** @fn Unidimensional::Unidimensional(int dimension)
 * @brief Reserve memory for the array
 * @param dimension size of array
 * @return Returns the pointer to the array.
 */
Unidimensional::Unidimensional(int dimension) {
    this->dimension = dimension;
    array = new int[dimension];
}

/** @fn Unidimensional::wax(int dimension)
 * @brief wax the array
 * @param dimension size of array
 */
void Unidimensional::wax() {
    for (int i = 0; i < getDimension(); i++)
        *(array + i) = 0;
}

/** @fn Unidimensional::printArray(int dimension)
 * @brief Print the array
 * @param dimension size of array
 */
void Unidimensional::print() {
    for (int i = 0; i < getDimension(); i++)
        cout << *(array + i);
}

/** @fn Unidimensional::fillArray(int dimension)
 * @brief fill the array with entered data.
 * @param dimension size of array
 */
void Unidimensional::fill() {
    IngresoDatos enter;
    string str;
    int value;
    wax();
    for (int i = 0; i < getDimension(); i++) {
        value = atoi(enter.ingresar(i).c_str());
        *(array + i) = value;
    }

}
#endif

