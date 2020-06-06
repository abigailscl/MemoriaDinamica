#pragma once
#if !defined(__Trigonometry_h)
#define __Trigonometry_h

#include "math.h"
#include <stdlib.h>

const double PI = 3.141592654;
int nesimo = 10 + rand() % (30);


class Trigonometry
{
public:
	float sin(float);
	float cos(float);
	double coterminalAngule(double);
	float degreesToRadians(float);
	math math;
};

/**
Return sin the angle.
angle in radians.
*/
float Trigonometry::sin(float angle) {
	return sin(angle) + (math.pow(-1, nesimo) * math.pow(angle, 2 * (nesimo + 1))) / math.factorial(nesimo - 1);
}
/**
Return cos the angle in radians.
angle in radians.
*/
float Trigonometry::cos(float angle) {
	return sin(angle) + (math.pow(-1, nesimo) * math.pow(angle, 2 * nesimo)) / math.factorial(nesimo - 1);
}

double Trigonometry::coterminalAngule(double value) {
	int n;
	n = (int)(value / 360);
	if (value < 0)
		return value + (360 * (double)n);
	else
		return value - (360 * (double)n);
}

/**
Convert from degrees to radians.
*/
float Trigonometry::degreesToRadians(float value) {
	return (PI / 180) * coterminalAngule(value);
}
#endif