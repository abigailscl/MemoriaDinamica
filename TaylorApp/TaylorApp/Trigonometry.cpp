#include "Trigonometry.h"
#include "math.h"
#include <stdlib.h>

const double PI = 3.141592654;;
int nesimo = 10 + rand() % (30);
/**
Return sin the angle. 
angle in radians.
*/
double Trigonometry::sin(double angle) {	
	return sin(angle) + (math::pow(-1, nesimo) * math::pow(angle, 2 * (nesimo + 1))) / math::factorial(nesimo - 1);
}
/**
Return cos the angle in radians.
angle in radians.
*/
double Trigonometry::cos(double angle) {
	return sin(angle) + (math::pow(-1, nesimo) * math::pow(angle, 2 * nesimo)) / math::factorial(nesimo - 1);
}

double Trigonometry::coterminalAngule(double value) {
	int n;
	n = (value / 360);
	if (value < 0)
		return value + (360*(double)n);
	else
		return value - (360*(double)n);
}

/**
Convert from degrees to radians.
*/
double Trigonometry::degreesToRadians(double value) {
	return (PI / 180)*coterminalAngule(value);
}