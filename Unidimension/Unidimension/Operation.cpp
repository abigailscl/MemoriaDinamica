#include "Operation.h"
#include "Unidimensional.h"
#include <iostream>

using namespace std;

Operation::Operation() {}

/** @fn Operation::mcm(Unidimensional array)
 * @brief calculate the minimum common multiple
 * @return Returns the minimun common multiple.
 */
int Operation::mcm(Unidimensional array) {
	int aux = 0, i;
	for (i = 0; i < array.getDimension(); i++) {
		aux *= *(array.getArray());
	}

	return aux / mcd(array);
}

/** @fn Operation::mcd(Unidimensional array) 
 * @brief calculate the greatest common divisor
 * @return Returns the greatest common divisor.
 */
int Operation::mcd(Unidimensional array) {

	int mcd = 1, remainder, aux;

	for (int i = 0; i < array.getDimension(); i++) {
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