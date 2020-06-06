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
#include "IngresoDatos.h"
#include <sstream>
#include <iostream>
#include <stdlib.h>	

using namespace std;

class Matrix{
public:

    void fill();
    void print();
    void wax();    
    int** getMatrix(void);
    void setMatrix(int**);
    int getDimension();
    void setDimension(int);

    Matrix(int); 
	~Matrix();
    
protected:
  
private:
    int **matrix;
    int dimension;
};
////////////////////////////////////////////////////////////////////////
// Name:      gett and setters
// Purpose:    get and set atributes
// Parameters: int dimension, int ** matrix
// Return:     int** void
////////////////////////////////////////////////////////////////////////
int** Matrix::getMatrix(void) { return matrix; }
void Matrix::setMatrix(int** newMatrix) { matrix = newMatrix; }
int Matrix::getDimension(void) { return dimension; }
void Matrix::setDimension(int newDimension) { dimension = newDimension; }

////////////////////////////////////////////////////////////////////////
// Name:      Matrix::Matrix(int dimension)
// Purpose:    Constructor of Matrix::Matrix(int dimension)
// Parameters: int dimension
// Return:     
////////////////////////////////////////////////////////////////////////
Matrix::Matrix(int dimension) {

	IngresoDatos enter;
	this->dimension = dimension;
	matrix = (int**)malloc(dimension * sizeof(int*));

	for (size_t i = 0; i < dimension; i++) {
		*(matrix + i) = (int*)malloc(dimension * sizeof(int));
	}

}

Matrix::~Matrix() {}
////////////////////////////////////////////////////////////////////////
// Name:      void Matrix::fill()
// Purpose:    Implementation of  void Matrix::fill()
// Parameters: 
// Return:    void
////////////////////////////////////////////////////////////////////////
void Matrix::fill() {

	string str;
	IngresoDatos enter;
	int value;
	wax();
	for (size_t i = 0; i < getDimension(); i++) {
		for (size_t j = 0; j < getDimension(); j++) {
			value = atoi(enter.ingresar(i, j).c_str());
			*(*(getMatrix() + i) + j) = value;
		}
	}

}
////////////////////////////////////////////////////////////////////////
// Name:       Matrix::print()
// Purpose:    Implementation of  void Matrix::print()
// Parameters: 
// Return:    void
////////////////////////////////////////////////////////////////////////
void Matrix::print() {

	cout << "Matriz resultante:\n";

	for (size_t i = 0; i < getDimension(); i++) {
		for (size_t j = 0; j < getDimension(); j++) {
			cout << *(*(getMatrix() + i) + j) << " ";
		}
		cout << "\n";
	}

}
////////////////////////////////////////////////////////////////////////
// Name:      Matrix::wax() 
// Purpose:    Implementation of  void Matrix::wax() 
// Parameters: 
// Return:    void
////////////////////////////////////////////////////////////////////////
void Matrix::wax() {

	for (size_t i = 0; i < getDimension(); i++)
		for (size_t j = 0; j < getDimension(); j++)
			*(*(getMatrix() + i) + j) = 0;

}

#endif

