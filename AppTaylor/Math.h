
#if !defined(__math_h)
#define __math_h
#include <iostream>
using namespace std;
template <class T>
class Math
{
public:
	Math();
	T pow(T, T);
	T factorial(T);
};

template <class T>
Math<T>::Math()
{
}

template <class T>
T Math<T>::factorial(T value) {
	 if (value <= 1) 
    	return 1;
  	else 
    	return value * factorial (value - 1);
}
template <class T>
T Math<T>::pow(T base, T exponent) {
	if (exponent==0)
     	return 1;
 	else
     	return base*(pow(base,exponent-1));
}
#endif
