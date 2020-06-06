#include "math.h"
#include <cmath>



long int math::factorial(int value) {
	if (value == 0)
		return 1;
	else
		return value * factorial(value - 1);
}

int math::pow(int base, int exponent) {
	int power;
	if(exponent==1)
	{
	}else{
		power = base * pow(base,exponent-1);
	}
	return power;
	
}
