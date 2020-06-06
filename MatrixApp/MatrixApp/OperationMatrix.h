#pragma once
/******************************************************************
*            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE              *
* CARRERA: Ingenieria de Software                                 *
* SEMESTRE: Tercer semestre                                       *
* MATERIA: Estructura de Datos                                    *
* NRC: 6396                                                       *
******************************************************************/
/***********************************************************************
 * Module:  OperationMatrix.h
 * Author:  Charlie
 * Modified: Monday, June 1, 2020 15:51:29
 * Purpose: Declaration of the class OperationMatrix
 ***********************************************************************/

#if !defined(__Matrices_OperationMatrix_h)
#define __Matrices_OperationMatrix_h

#include "OperationMatrix.h"
#include "Matrix.h"

class OperationMatrix
{
public:
    Matrix multiplySameMatrix(Matrix, int);
	
protected:
private:

};
////////////////////////////////////////////////////////////////////////
// Name:      Matrix OperationMatrix::multiplySameMatrix(Matrix matrix, int times) 
// Purpose:    Implementation of  Matrix OperationMatrix::multiplySameMatrix(Matrix matrix, int times) 
// Parameters: Matrix matrix, int times
// Return:     Matrix
////////////////////////////////////////////////////////////////////////
Matrix OperationMatrix::multiplySameMatrix(Matrix matrix, int times) {

	Matrix matrixResult(matrix.getDimension());
	matrixResult.wax();
	if (times == 1) {
		matrixResult = matrix;
	}
	else {
		while (times != 1) {
			for (int i = 0; i < matrix.getDimension(); i++) {
				for (int j = 0; j < matrix.getDimension(); j++) {
					for (int h = 0; h < matrix.getDimension(); h++) {
						*(*(matrixResult.getMatrix() + i) + j) = *(*(matrixResult.getMatrix() + i) + j) + (*(*(matrix.getMatrix() + i) + h)) * (*(*(matrix.getMatrix() + h) + j));
					}
				}
			}
			times--;
		}

	}

	return matrixResult;
}

#endif
