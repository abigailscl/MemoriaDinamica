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

template <> class Matrix<int> {
public:
	void fill();
	void wax();
	void print();
	int** getMatrix(void);
	void setMatrix(int**);
	int  getDimension();
	void setDimension(int);
	Matrix(int);
	~Matrix();
private:
	int** matrix;
	int dimension;
};

template <> class Matrix<double> {
public:
	void fill();
	void wax();
	void print();
	double** getMatrix(void);
	void setMatrix(double**);
	int  getDimension();
	void setDimension(int);
	Matrix(int);
	~Matrix();
private:
	double** matrix;
	int dimension;
};

template <class T> T**  Matrix<T>::getMatrix(void) { return matrix; }
template <class T> void Matrix<T>::setMatrix(T** matrix) { this->matrix = matrix; }
template <class T> int  Matrix<T>::getDimension(void) { return dimension; }
template <class T> void Matrix<T>::setDimension(int dimension) { this->dimension = dimension; }
int**		Matrix<int>::getMatrix(void) { return this->matrix = matrix; }
void		Matrix<int>::setMatrix(int** matrix) { this->matrix = matrix; }
int			Matrix<int>::getDimension(void) { return dimension; }
void        Matrix<int>::setDimension(int dimension) { this->dimension = dimension; }
double**	Matrix<double>::getMatrix(void) { return this->matrix = matrix; }
void        Matrix<double>::setMatrix(double** matrix) { this->matrix = matrix; }
int			Matrix<double>::getDimension(void) { return dimension; }
void        Matrix<double>::setDimension(int dimension) { this->dimension = dimension; }

template <class T> Matrix<T>::Matrix(int dimension) {

	this->dimension = dimension;
	matrix = (T**)malloc(dimension * sizeof(T*));

	for (size_t i = 0; i < dimension; i++) {
		*(matrix + i) = (T*)malloc(dimension * sizeof(int));
	}

}
template <class T> Matrix<T>::~Matrix() {}
Matrix<int>::Matrix(int dimension) {

	this->dimension = dimension;
	matrix = (int**)malloc(dimension * sizeof(int*));

	for (size_t i = 0; i < dimension; i++) {
		*(matrix + i) = (int*)malloc(dimension * sizeof(int));
	}

}
Matrix<int>::~Matrix() {}
Matrix<double>::Matrix(int dimension) {

	this->dimension = dimension;
	matrix = (double**)malloc(dimension * sizeof(double*));

	for (size_t i = 0; i < dimension; i++) {
		*(matrix + i) = (double*)malloc(dimension * sizeof(double));
	}

}
Matrix<double>::~Matrix() {}

template <class T> void Matrix<T>::fill() {

	string str;
	InputData<double> enter;
	int value;
	wax();
	for (size_t i = 0; i < getDimension(); i++) {
		for (size_t j = 0; j < getDimension(); j++) {
			value = atoi(enter.matrixFloatDouble(i, j).c_str());
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
void Matrix<int>::fill() {

	string str;
	InputData<int> enter;
	int value;
	wax();
	for (size_t i = 0; i < getDimension(); i++) {
		for (size_t j = 0; j < getDimension(); j++) {
			value = atoi(enter.matrixInteger(i, j).c_str());
			*(*(getMatrix() + i) + j) = value;
		}
	}
}
void Matrix<int>::print() {

	cout << "\nMatriz resultante:\n";

	for (size_t i = 0; i < getDimension(); i++) {
		for (size_t j = 0; j < getDimension(); j++) {
			cout << *(*(getMatrix() + i) + j) << " ";
		}
			cout << "\n";
	}
}
void Matrix<int>::wax() {

	for (size_t i = 0; i < getDimension(); i++)
		for (size_t j = 0; j < getDimension(); j++)
			*(*(getMatrix() + i) + j) = 0;

}
void Matrix<double>::fill() {

	string str;
	InputData<double> enter;
	int value;
	wax();
	for (size_t i = 0; i < getDimension(); i++) {
		for (size_t j = 0; j < getDimension(); j++) {
			value = atoi(enter.matrixFloatDouble(i, j).c_str());
			*(*(getMatrix() + i) + j) = value;
		}
	}
}
void Matrix<double>::print() {

	cout << "\nMatriz resultante:\n";

	for (size_t i = 0; i < getDimension(); i++) {
		for (size_t j = 0; j < getDimension(); j++) {
			cout << *(*(getMatrix() + i) + j) << " ";
		}
		cout << "\n";
	}
}
void Matrix<double>::wax() {

	for (size_t i = 0; i < getDimension(); i++)
		for (size_t j = 0; j < getDimension(); j++)
			*(*(getMatrix() + i) + j) = 0;

}
#endif

