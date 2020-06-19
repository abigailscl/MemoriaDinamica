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

#if !defined(__OperationMatrix_h)
#define __OperationMatrix_h

#include "Matrix.h"
/**@brief Plantilla generica*/
template <class T> class OperationMatrix {
public:
	
    Matrix<T> multiplySameMatrix(Matrix<T>, int);	
	OperationMatrix();	
	~OperationMatrix();
};
/**@brief Constructor*/
template <class T> OperationMatrix<T>::OperationMatrix(){}
/**@brief Destructor*/
template <class T> OperationMatrix<T>::~OperationMatrix(){}
/**@brief Realiza la multiplicación de la misma matriz
		@param matrix generica, número de veces a realizar la multiplicación.
	*/
template <class T> Matrix<T> OperationMatrix<T>::multiplySameMatrix(Matrix<T> matrix, int times) {

	Matrix<T> matrixResult(matrix.getDimension());
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
