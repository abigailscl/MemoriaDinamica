/***********************************************************************
 * Module:  Vectores.h
 * Author:  Abigail Cabascango
 * Modified: lunes, 1 de junio de 2020 18:30:19
 * Purpose: Declaration of the class Vectores
 ***********************************************************************/

#if !defined(__ModeloMemoriaDinamica_Vectores_h)
#define __ModeloMemoriaDinamica_Vectores_h
#include<iostream>
#include <string> 
#include <stdio.h> 
 #include <cstdlib>
using namespace std;
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


protected:
private:
	unsigned long int mcm(int *vector, int n);
	bool esDivisible(int *vector, int dim, int numero);
	int maxArr(int *vector, int dim);
   int menor;
   int mayor;
};

////////////////////////////////////////////////////////////////////////
// Name:        Vectores::Vectores()
// Purpose:    Constructor of  class    Vectores
// Parameters: 
////////////////////////////////////////////////////////////////////////
  Vectores::Vectores(){
   	
   }
////////////////////////////////////////////////////////////////////////
// Name:      Vectores::imprimirVector(int* vector, int dim)
// Purpose:    Implementation of  Vectores::imprimirVector(int* vector, int dim)
// Parameters: int* vector, int dim
// Return:     void
////////////////////////////////////////////////////////////////////////
void Vectores::imprimirVector(int* vector, int dim)
{
	cout<< "\nEl vector ordenado es: ";
	for (int i = 0; i < dim; i++){
		
		cout << *(vector+i) << " ";
	}
}
////////////////////////////////////////////////////////////////////////
// Name:      Vectores:: encerarVector(int* vector, int dim)
// Purpose:    Implementation of Vectores::encerarVector(int* vector, int dim)
// Parameters: int* vector, int dim
// Return:     void
////////////////////////////////////////////////////////////////////////
void Vectores:: encerarVector(int* vector, int dim)
{
	for (int i = 0; i < dim; i++){
		
		*(vector+i) = 0;
	}
}
////////////////////////////////////////////////////////////////////////
// Name:      Vectores::ordenarVector(int* vector, int dim)
// Purpose:    Implementation of Vectores::ordenarVector(int* vector, int dim)
// Parameters: int* vector, int dim
// Return:     void
////////////////////////////////////////////////////////////////////////
void Vectores::ordenarVector(int* vector, int dim)
{
	 int i, j, aux;
	for(i = 0; i < dim; i++)
    {
        for (j = i + 1; j < dim; j++)
    	{
            if(*(vector+i)> *(vector+j))
            {
                aux = *(vector+i);
                *(vector+i) = *(vector+j);
                *(vector+j) = aux;
            }
    	}	
    }
	mayor = *(vector+dim-1);
	menor = *(vector+0);   
	cout<< "\n Numero mayor: "<< mayor;
	cout<<"\n Numero menor: "<< menor;
}
////////////////////////////////////////////////////////////////////////
// Name:      Vectores::calcMCM(int* vector, int dim)
// Purpose:    Implementation of Vectores::calcMCM(int* vector, int dim)
// Parameters: int* vector, int dim
// Return:     void
////////////////////////////////////////////////////////////////////////
void Vectores::calcMCM(int* vector, int dim)
{
	cout << "\nMCM = " << mcm(vector,dim);
	
}
////////////////////////////////////////////////////////////////////////
// Name:      Vectores::calcMCD(int* vector, int dim)
// Purpose:    Implementation of  Vectores::calcMCD(int* vector, int dim)
// Parameters: int* vector, int dim
// Return:     void
////////////////////////////////////////////////////////////////////////
void Vectores::calcMCD(int* vector, int dim)
{
	int cont = 0, j =0;
	int mcd = 0, res = 0;
	for(int i = 1; i <= dim; i++)
	{
		
		cont = *(vector+i-1);
		
		cout<< "holi "<<cont;
		if(i == 1){
			mcd = cont ;	
		}
		
		do{
			res = mcd%cont;
			mcd = cont;
			cont = res;
			
		}while(res!=0);
		
	
	}
	
	cout<< "\nMCD = "<< mcd;
}
////////////////////////////////////////////////////////////////////////
// Name:      Vectores::mcm(int *vector, int dim)
// Purpose:    Implementation of Vectores::mcm(int *vector, int dim)
// Parameters: int* vector, int dim
// Return:    unsigned long int
////////////////////////////////////////////////////////////////////////
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
////////////////////////////////////////////////////////////////////////
// Name:      Vectores::esDivisible(int *vector, int dim, int numero)
// Purpose:    Implementation of Vectores::esDivisible(int *vector, int dim, int numero)
// Parameters: int *vector, int dim, int numero
// Return:     bool
////////////////////////////////////////////////////////////////////////
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

////////////////////////////////////////////////////////////////////////
// Name:      Vectores::maxArr(int *vector, int dim)
// Purpose:    Implementation of Vectores::maxArr(int *vector, int dim)
// Parameters: int* vector, int dim
// Return:     int
////////////////////////////////////////////////////////////////////////
int Vectores::maxArr(int *vector, int dim)
{
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
