/***********************************************************************
 * Module:  Vectores.h
 * Author:  Abigail Cabascango
 * Modified: lunes, 1 de junio de 2020 18:30:19
 * Purpose: Declaration of the class Vectores
 ***********************************************************************/

#if !defined(__ModeloMemoriaDinamica_Vectores_h)
#define __ModeloMemoriaDinamica_Vectores_h
#include "IngresoDatos.h"
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
   void ingresarValores(int* vector, int dim);

   Matrices** matrices;

protected:
private:
   int minimo;
   int maximo;


};
void Vectores::imprimirVector(int* vector, int dim)
{
	
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
void Vectores::ingresarValores(int* vector, int dim)
{
	IngresoDatos objIng;
	for (int i = 0; i < dim)
 	 objIng.ingresar(i);
}




#endif
