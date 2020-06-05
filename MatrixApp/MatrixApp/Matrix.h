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
#include "Ingreso.h"
#include "Validacion.h"
#include <sstream>
#include <iostream>
#include <stdlib.h>
#include "OperationMatrix.h"

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

	this->dimension = dimension;
	matrix = (int**)malloc(dimension * sizeof(int*));

	for (int i = 0; i < dimension; i++) {
		*(matrix + i) = (int*)malloc(dimension * sizeof(int));
	}

}

Matrix::~Matrix() {

	for (int i = 0; i < getDimension(); i++)
	{
		delete[]	*(getMatrix() + i);
	}

	delete[] getMatrix();

}

void Matrix::fill() {

	string str;
	Ingreso enter;
	int value;

	for (int i = 0; i < getDimension(); i++) {
		for (int j = 0; j < getDimension(); j++) {
			cout << "[" << i << "][" << j << "]";
			str = enter.leer("Ingrese un valor: ", 1);
			istringstream(str) >> value;
			*(*(getMatrix() + i) + j) = value;
		}
	}

}

void Matrix::print() {

	cout << "Matriz resultante:\n";

	for (int i = 0; i < getDimension(); i++) {
		for (int j = 0; j < getDimension(); j++) {
			cout << *(*(getMatrix() + i) + j) << " ";
		}
		cout << "\n";
	}

}

void Matrix::wax() {

	for (int i = 0; i < getDimension(); i++)
		for (int j = 0; j < getDimension(); j++)
			*(*(getMatrix() + i) + j) = 0;

}

#endif

