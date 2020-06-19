#if !defined(__Trigonometry_h)
#define __Trigonometry_h
#include <iostream>
#include "Math.h"
#include <stdlib.h>
#define  N 100
using namespace std;


class Trigonometry
{
	public:
	double sin(float);
	double cos(float);
	double tan(float);
	//int generateRandom();
	private:
	float angle; 
};
double Trigonometry::sin(float ang)
{
	Math<long int> math;
	Math<double> math1;
    double sum = 0; 
    double angulo = (double)ang;
    for (double i = 0; i < N; i++)
    {

        sum = sum + ((math1.pow(-1,i) * math1.pow(angulo,2*i+1) )/math1.factorial(2*i+1));
    }
    //cout<< sum<< endl;
    return sum;
}
double Trigonometry::cos(float ang)
{
	Math<double> math;
    double sum = 0; 
    double angulo = (double)ang;
    for (double i = 0; i < N; i++)
    {

         sum = sum + (math.pow(-1, i) * math.pow(angulo, 2 * i ))/ (math.factorial(2 * i));
    }
    //cout<< sum<< endl;
    return sum;
}
double Trigonometry::tan(float ang)
{
    double sum = 0; 
		sum = sin(ang)/cos(ang);
		return sum;
}

#endif
