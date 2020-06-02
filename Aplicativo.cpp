#include<iostream>
#include "OperacionVenctor.h"
#include <stdio.h>

 using namespace std;

 int main(int argc, char *argv[])
 {
	Vectores objVec;
	int* vec = new int [10];
	objVec.ingresarValores2(vec,10);
	objVec.ordenarVector(vec,10);
	objVec.imprimirVector(vec, 10);
	objVec.calcMCM(vec, 10);
	objVec.calcMCD(vec,10);
 	cout<<"\nEjecucion exitosa";
 	delete(vec);
	return 0;
 }
 
