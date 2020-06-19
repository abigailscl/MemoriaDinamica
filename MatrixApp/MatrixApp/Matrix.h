#pragma once
/******************************************************************
*            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE              *
* CARRERA: Ingenieria de Software                                 *
* SEMESTRE: Tercer semestre                                       *
* MATERIA: Estructura de Datos                                    *
* NRC: 6396                                                       *
******************************************************************/
/***********************************************************************
 * Module:  Matrix.h
 * Author:  Carlos Romero 
 * Modified: Monday, June 1, 2020 15:51:29
 * Purpose: Declaration of the class Matrix
 ***********************************************************************/

#if !defined(__Matrices_Matrix_h)
#define __Matrices_Matrix_h

#include "Matrix.h"
#include "InputData.h"
#include <iostream>
#include <stdlib.h>	

using namespace std;
template <class T> class Matrix{
public:

    void fill();
    void print();
    void wax();    
    T**  getMatrix(void);
    void setMatrix(T**);
    int  getDimension();
    void setDimension(int);

    Matrix(int); 
	~Matrix();
  
private:
    T **matrix;
    int dimension;
};

template <class T> T**  Matrix<T>::getMatrix(void) { return matrix; }
template <class T> void Matrix<T>::setMatrix(T** matrix) { this->matrix = matrix; }
template <class T> int  Matrix<T>::getDimension(void) { return dimension; }
template <class T> void Matrix<T>::setDimension(int dimension) { this->dimension = dimension; }

template <class T> Matrix<T>::Matrix(int dimension) {

	this->dimension = dimension;
	matrix = (T**)malloc(dimension * sizeof(T*));

	for (size_t i = 0; i < dimension; i++) {
		*(matrix + i) = (T*)malloc(dimension * sizeof(int));
	}

}
template <class T> Matrix<T>::~Matrix() {}

template <class T> void Matrix<T>::fill() {

	string str;
	InputData<T> enter;
	int value;
	wax();
	for (size_t i = 0; i < getDimension(); i++) {
		for (size_t j = 0; j < getDimension(); j++) {
			value = atoi(enter.matrizInteger(i, j).c_str());
			*(*(getMatrix() + i) + j) = value;
		}
	}

}
template <class T> void Matrix<T>::print() {

	cout << "\nMatriz resultante:\n";

	for (size_t i = 0; i < getDimension(); i++) {
		for (size_t j = 0; j < getDimension(); j++) {
			cout << *(*(getMatrix() + i) + j) << " ";
		}
		cout << "\n";
	}

}
template <class T> void Matrix<T>::wax() {

	for (size_t i = 0; i < getDimension(); i++)
		for (size_t j = 0; j < getDimension(); j++)
			*(*(getMatrix() + i) + j) = 0;

}
#endif

