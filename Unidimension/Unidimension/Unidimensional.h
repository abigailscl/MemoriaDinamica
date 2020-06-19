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
    void wax();
    T*   getArray(void);
    void setArray(T*);
    int  getDimension(void);
    void setDimension(int);
    Array(int);
    
private:
    T* array;
    int dimension;    
};

template <> class Array<int> {
public:
    void print();
    void fill();
    void wax();
    int* getArray(void);
    void setArray(int*);
    int  getDimension(void);
    void setDimension(int);
    Array(int);

private:
    int* array;
    int dimension;
};

template <> class Array<float> {
public:
    void print();
    void fill();
    void wax();
    float* getArray(void);
    void setArray(float*);
    int  getDimension(void);
    void setDimension(int);
    Array(int);

private:
    float* array;
    int dimension;
};

template <typename T> T*   Array<T>::getArray() { return array; }
template <typename T> void Array<T>::setArray(T* array) { this->array = array; }
template <typename T> int  Array<T>::getDimension() { return dimension; }
template <typename T> void Array<T>::setDimension(int dimension) { this->dimension = dimension; }

int* Array<int>::getArray() { return array; }
void Array<int>::setArray(int* array) { this->array = array; }
int  Array<int>::getDimension() { return dimension; }
void Array<int>::setDimension(int dimension) { this->dimension = dimension; }

float*  Array<float>::getArray() { return array; }
void    Array<float>::setArray(float* array) { this->array = array; }
int     Array<float>::getDimension() { return dimension; }
void    Array<float>::setDimension(int dimension) { this->dimension = dimension; }

template <typename T> Array<T>::Array(int dimension) {
    this->dimension = dimension;
    array = new T[dimension];
    wax();
}
Array<int>::Array(int dimension) {
    this->dimension = dimension;
    array = new int[dimension];
    wax();
}

template <typename T> void Array<T>::wax() {
    for (int i = 0; i < getDimension(); i++)
        *(array + i) = 0;
}
template <typename T> void Array<T>::print() {

    cout << "\nVector resultante: ";

    for (int i = 0; i < getDimension(); i++)
        cout << *(array + i);
}
template <typename T> void Array<T>::fill() {
    InputData<T> enter;
    int value;    
    for (int i = 0; i < getDimension(); i++) {
        value = atoi(enter.ingresar(i).c_str());
        *(array + i) = value;        
    }
}

void Array<int>::wax() {
    for (int i = 0; i < getDimension(); i++)
        *(array + i) = 0;
}
void Array<int>::print() {

    cout << "\nVector resultante: " << endl;

    for (int i = 0; i < getDimension(); i++)
        cout << *(array + i);
}
void Array<int>::fill() {
    InputData<int> enter;    
    int value;
    for (int i = 0; i < getDimension(); i++) {
        value = atoi(enter.integerArray(i).c_str());
        *(array + i) = value;
    }
}

void Array<float>::wax() {
    for (int i = 0; i < getDimension(); i++)
        *(array + i) = 0;
}
void Array<float>::print() {

    cout << "\nVector resultante: " << endl;

    for (int i = 0; i < getDimension(); i++)
        cout << *(array + i);
}
void Array<float>::fill() {
    InputData<float> enter;
    int value;
    for (int i = 0; i < getDimension(); i++) {
        value = atoi(enter.realArray(i).c_str());
        *(array + i) = value;
    }
}
#endif

