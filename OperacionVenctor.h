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
   void imprimirMaxMin(int* vector, int dim);
   void ingresarValores2(int* vector, int dim);


protected:
private:
   int minimo;
   int maximo;


};

  Vectores::Vectores(){
   	
   }
void Vectores::imprimirVector(int* vector, int dim)
{
	for (int i = 0; i < dim; i++){
		
		cout << <*(vector+i)<< ", " ;
	}
}
void Vectores:: encerarVector(int* vector, int dim)
{
	
}
void Vectores::ordenarVector(int* vector, int dim)
{
	
}
void Vectores::imprimirMaxMin(int* vector, int dim)
{
	
}
void Vectores::ingresarValores2(int *vector, int dim)
{
	cout<<"ingreso clase vector";
	IngresoDatos objIng;
	for (int i = 0; i < dim; i++){
		
		*(vector+i) = atoi(objIng.ingresar(i).c_str());	
	}
 	 
}



#endif
