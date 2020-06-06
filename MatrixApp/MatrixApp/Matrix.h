#pragma once
/***********************************************************************
 * Module:  Matrix.h
 * Author:  Charlie
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

int** Matrix::getMatrix(void) { return matrix; }
void Matrix::setMatrix(int** newMatrix) { matrix = newMatrix; }
int Matrix::getDimension(void) { return dimension; }
void Matrix::setDimension(int newDimension) { dimension = newDimension; }

Matrix::Matrix(int dimension) {

	IngresoDatos enter;
	this->dimension = dimension;
	matrix = (int**)malloc(dimension * sizeof(int*));

	for (size_t i = 0; i < dimension; i++) {
		*(matrix + i) = (int*)malloc(dimension * sizeof(int));
	}

}

Matrix::~Matrix() {}

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

void Matrix::print() {

	cout << "Matriz resultante:\n";

	for (size_t i = 0; i < getDimension(); i++) {
		for (size_t j = 0; j < getDimension(); j++) {
			cout << *(*(getMatrix() + i) + j) << " ";
		}
		cout << "\n";
	}

}

void Matrix::wax() {

	for (size_t i = 0; i < getDimension(); i++)
		for (size_t j = 0; j < getDimension(); j++)
			*(*(getMatrix() + i) + j) = 0;

}

#endif

