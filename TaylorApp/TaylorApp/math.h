#pragma once

#if !defined(__math_h)
#define __math_h

class math
{
public:
	int pow(int, int);
	long int factorial(int);
};

long int math::factorial(int value) {
	if (value == 0)
		return 1;
	else
		return value * factorial(value - 1);
}

int math::pow(int base, int exponent) {

	if (exponent == 1)
		return base;
	else
		return base * pow(base, exponent - 1);

}
#endif