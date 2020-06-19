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
/**@brief Plantilla generica*/
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
/**@brief Plantilla especifica int*/
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
/**@brief Plantilla especifica double*/
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
/**
*@brief get
*@param void
*@return Matriz.
*/
template <class T> T**  Matrix<T>::getMatrix(void) { return matrix; }
/**
*@brief set
*@param Generico**
*@return void
*/
template <class T> void Matrix<T>::setMatrix(T** matrix) { this->matrix = matrix; }
/**
*@brief get
*@param void
*@return dimension de la matriz
*/
template <class T> int  Matrix<T>::getDimension(void) { return dimension; }
/**
*@brief set
*@param int
*@return void
*/
template <class T> void Matrix<T>::setDimension(int dimension) { this->dimension = dimension; }
/**
*@brief get
*@param void
*@return Matriz.
*/
int**		Matrix<int>::getMatrix(void) { return this->matrix = matrix; }
/**
*@brief set
*@param int**
*@return void
*/
void		Matrix<int>::setMatrix(int** matrix) { this->matrix = matrix; }
/**
*@brief get
*@param void
*@return dimension de la matriz
*/
int			Matrix<int>::getDimension(void) { return dimension; }
/**
*@brief set
*@param int
*@return void
*/
void        Matrix<int>::setDimension(int dimension) { this->dimension = dimension; }
/**
*@brief get
*@param void
*@return matriz
*/
double**	Matrix<double>::getMatrix(void) { return this->matrix = matrix; }
/**
*@brief set
*@param double**
*@return void
*/
void        Matrix<double>::setMatrix(double** matrix) { this->matrix = matrix; }
/**
*@brief get
*@param void
*@return dimension de la matriz
*/
int			Matrix<double>::getDimension(void) { return dimension; }
/**
*@brief set
*@param int
*@return void
*/
void        Matrix<double>::setDimension(int dimension) { this->dimension = dimension; }
/**
*@brief Constructor
*@param dimension
*/
template <class T> Matrix<T>::Matrix(int dimension) {

	this->dimension = dimension;
	matrix = (T**)malloc(dimension * sizeof(T*));

	for (size_t i = 0; i < dimension; i++) {
		*(matrix + i) = (T*)malloc(dimension * sizeof(int));
	}

}
/**
*@brief Destructor
*@param void
*/
template <class T> Matrix<T>::~Matrix() {}
/**
*@brief Constructor
*@param dimension
*/
Matrix<int>::Matrix(int dimension) {

	this->dimension = dimension;
	matrix = (int**)malloc(dimension * sizeof(int*));

	for (size_t i = 0; i < dimension; i++) {
		*(matrix + i) = (int*)malloc(dimension * sizeof(int));
	}

}
/**
*@brief Destructor
*@param void
*/
Matrix<int>::~Matrix() {}
/**
*@brief Constructor
*@param dimension
*/
Matrix<double>::Matrix(int dimension) {

	this->dimension = dimension;
	matrix = (double**)malloc(dimension * sizeof(double*));

	for (size_t i = 0; i < dimension; i++) {
		*(matrix + i) = (double*)malloc(dimension * sizeof(double));
	}

}
/**
*@brief Destructor
*@param void
*/
Matrix<double>::~Matrix() {}
/**
*@brief LLena la matriz con un tipo de dato generico.
*/
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
/**@brief Imprime la matriz*/
template <class T> void Matrix<T>::print() {

	cout << "\nMatriz resultante:\n";

	for (size_t i = 0; i < getDimension(); i++) {
		for (size_t j = 0; j < getDimension(); j++) {
			cout << *(*(getMatrix() + i) + j) << " ";
		}
		cout << "\n";
	}

}
/**@brief encera la matriz*/
template <class T> void Matrix<T>::wax() {

	for (size_t i = 0; i < getDimension(); i++)
		for (size_t j = 0; j < getDimension(); j++)
			*(*(getMatrix() + i) + j) = 0;

}
/**@brief Llena la matriz con datos int.*/
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
/**@brief Imprime la matriz*/
void Matrix<int>::print() {

	cout << "\nMatriz resultante:\n";

	for (size_t i = 0; i < getDimension(); i++) {
		for (size_t j = 0; j < getDimension(); j++) {
			cout << *(*(getMatrix() + i) + j) << " ";
		}
			cout << "\n";
	}
}
/**@brief encera la matriz*/
void Matrix<int>::wax() {

	for (size_t i = 0; i < getDimension(); i++)
		for (size_t j = 0; j < getDimension(); j++)
			*(*(getMatrix() + i) + j) = 0;

}
/**@brief Llena la matriz con doubles*/
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
/**@brief Imprime la matriz*/
void Matrix<double>::print() {

	cout << "\nMatriz resultante:\n";

	for (size_t i = 0; i < getDimension(); i++) {
		for (size_t j = 0; j < getDimension(); j++) {
			cout << *(*(getMatrix() + i) + j) << " ";
		}
		cout << "\n";
	}
}
/**@brief Encera la matriz*/
void Matrix<double>::wax() {

	for (size_t i = 0; i < getDimension(); i++)
		for (size_t j = 0; j < getDimension(); j++)
			*(*(getMatrix() + i) + j) = 0;

}
#endif

