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
#include "InputData.h"
#include <iostream>
#include <sstream>
#include <stdlib.h>

using namespace std;

template <class T> class Array {
public:
    void print();    
    void fill();    
    T* getArray(void);
    void setArray(T* newArray);
    T getDimension(void);
    void setDimension(T);
    Array(int);
    
private:
    T* array;
    int dimension;
    void wax();
};

template <typename T> T* Array<T>::getArray() { return array; }

template <typename T> void Array<T>::setArray(T* newArray) { array = newArray; }

template <typename T> T Array<T>::getDimension() { return dimension; }

template <typename T> void Array<T>::setDimension(T newDimension) { dimension = newDimension; }

template <typename T> Array<T>::Array(int dimension) {
    this->dimension = dimension;
    array = new int[dimension];
    wax();
}

template <typename T> void Array<T>::wax() {
    for (int i = 0; i < getDimension(); i++)
        *(array + i) = 0;
}

template <typename T> void Array<T>::print() {
    for (int i = 0; i < getDimension(); i++)
        cout << *(array + i);
}

template <typename T> void Array<T>::fill() {
    InputData<T> enter;
    string str;
    int value;    
    for (int i = 0; i < getDimension(); i++) {
        value = atoi(enter.ingresar(i).c_str());
        *(array + i) = value;        
    }
}
#endif

