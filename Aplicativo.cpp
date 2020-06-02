/******************************************************************
*            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE              *
* CARRERA: Ingenieria de Software                                 *
* SEMESTRE: Tercer semestre                                       *
* MATERIA: Estructura de Datos                                    *
* NRC: 6396                                                       *
******************************************************************/
#include<iostream>
#include "OperacionVenctor.h"
#include "OperacionMatriz.h"
#include "IngresoDatos.h"
#include <stdio.h>

using namespace std;
void ingresarValoresVec(int* vector, int dim);
int dimensionarVec(int dim);
int dimensionarMatriz(int dim);
void ingresarValoresMat(int** matriz, int dim);


 int main(int argc, char *argv[])
 {
 	int dimension = 0;
 	
	Vectores objVec;
/*	dimension = dimensionarVec(dimension);
	int* vec = new int [dimension];
	ingresarValoresVec(vec,dimension);
	objVec.ordenarVector(vec,dimension);
	objVec.imprimirVector(vec, dimension);
	objVec.calcMCM(vec, dimension);
	objVec.calcMCD(vec,dimension);
	*/
	Matrices objMatriz;
	dimension = dimensionarMatriz(dimension);
	 int ** matriz;
	 objMatriz.encerarMatriz(matriz, dimension);
	matriz = objMatriz.segmentarMemoria(dimension);
		cout<< "ingreso matrices";
	ingresarValoresMat(matriz,  dimension);
 	cout<<"\nEjecucion exitosa";
 //	delete(vec);
	return 0;
 }
 void ingresarValoresMat(int** matriz, int dim)
{
	cout<< "ingreso matrices";
		IngresoDatos objIng;

	for(int i=0;i<dim;i++)
	{
		for(int j=0;j<dim;j++)
		{
			(*(*(matriz+i)+j)) =atoi(objIng.ingresar(i, j).c_str());
		}
	}
	
}
int dimensionarMatriz(int dim)
{
	IngresoDatos objIng;
	dim = atoi(objIng.ingresar().c_str());
	return dim;
}
void ingresarValoresVec(int *vector, int dim)
{
	IngresoDatos objIng;
	for (int i = 0; i < dim; i++){
		
		*(vector+i) = atoi(objIng.ingresar(i).c_str());	
	}
 	 
}
int dimensionarVec(int dim)
{
	IngresoDatos objIng;
	dim = atoi(objIng.ingresar().c_str());	
	return dim;
 } 
