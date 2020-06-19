#pragma once
/***********************************************************************
 * Module:  Operation.h
 * Author:  Charlie
 * Modified: Tuesday, June 2, 2020 03:13:32
 * Purpose: Declaration of the class Operation
 ***********************************************************************/

#if !defined(__unidimensional_UML_Operation_h)
#define __unidimensional_UML_Operation_h

#include "Operation.h"
#include "Unidimensional.h"

using namespace std;

class Operation{
public:
    template <typename T> T mcm(Array<T> array);
    template <typename T> T mcd(Array<T> array);
    Operation();

protected:
private:

};

Operation::Operation() {}

/** @fn Operation::mcm(Unidimensional array)
 * @brief calculate the minimum common multiple
 * @return Returns the minimun common multiple.
 */
template <typename T> T Operation::mcm(Array<T> array) {
	int aux = 1;
	for (size_t i = 0; i < array.getDimension(); i++) {
		aux *= *(array.getArray() + i);
	}
	return aux / mcd(array);
}

/**@fn Operation::mcd(Unidimensional array)
 * @brief calculate the greatest common divisor
 * @return Returns the greatest common divisor.
 */
template <typename T> T Operation::mcd(Array<T> array) {

	int mcd = 1, remainder, aux;

	for (size_t i = 0; i < array.getDimension(); i++) {
		aux = *(array.getArray() + i);
		if (i == 0) {
			mcd = aux;
		}
		else {
			do {

				remainder = mcd % aux;

				if (remainder != 0) {
					mcd = aux;
					aux = remainder;
				}
			} while (remainder != 0);
		}
	}
	return mcd;
}
#endif

