/***********************************************************************
 * Module:  Vectores.h
 * Author:  Abigail Cabascango
 * Modified: lunes, 1 de junio de 2020 18:30:19
 * Purpose: Declaration of the class Vectores
 ***********************************************************************/

#if !defined(__ModeloMemoriaDinamica_Vectores_h)
#define __ModeloMemoriaDinamica_Vectores_h
#include "IngresoDatos.h"
#include <string> 
#include <stdio.h> 
 #include <cstdlib>
  
class Vectores
{
public:
   Vectores();
   int getMaximo(void);
   void setMaximo(int newMaximo);
   int getMinimo(void);
   void setMinimo(int newMinimo);
   void imprimirVector(int* vector, int dim);
   void encerarVector(int* vector, int dim);
   void ordenarVector(int* vector, int dim);
   void calcMCM(int* vector, int dim);
   void calcMCD(int* vector, int dim);
   void ingresarValores2(int* vector, int dim);


protected:
private:
	unsigned long int mcm(int *vector, int n);
	bool esDivisible(int *vector, int dim, int numero);
	int maxArr(int *vector, int dim);
   int menor;
   int mayor;


};

  Vectores::Vectores(){
   	
   }
void Vectores::imprimirVector(int* vector, int dim)
{
	for (int i = 0; i < dim; i++){
		
		cout << *(vector+i) << "; ";
	}
}
void Vectores:: encerarVector(int* vector, int dim)
{
	for (int i = 0; i < dim; i++){
		
		*(vector+i) = 0;
	}
}
void Vectores::ordenarVector(int* vector, int dim)
{
	
}
void Vectores::calcMCM(int* vector, int dim)
{
	cout << "\nMCM = " << mcm(vector,dim);
	
}
void Vectores::ingresarValores2(int *vector, int dim)
{
	cout<<"ingreso clase vector";
	IngresoDatos objIng;
	for (int i = 0; i < dim; i++){
		
		*(vector+i) = atoi(objIng.ingresar(i).c_str());	
	}
 	 
}

unsigned long int Vectores::mcm(int *vector, int dim){
	int i,len;
	unsigned long int intMcm = 1;
	i = 0;
	len = maxArr(vector,dim);
	for(int i = 2; i <= len; i++){
		while( esDivisible(vector,dim,i) ){
			intMcm *= i;
		}
	}
	return intMcm;
}

bool Vectores::esDivisible(int *vector, int dim, int numero){
	bool divisible = false;
	for(int i = 0; i < dim; i++){
		if( *(vector+i)%numero == 0){
			divisible = true;
			*(vector+i) = *(vector+i)/numero;
		}
	}
	return divisible;
}
int Vectores::maxArr(int *vector, int dim){
	int max = -1;
	if( dim > 1 ){
		max = *(vector+0);
		for(int i = 1; i < dim; i++){
			if ( max < *(vector+i))
				max = *(vector+i);
		}
	}
	return max;
}
#endif
