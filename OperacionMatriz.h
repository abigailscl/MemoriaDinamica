/******************************************************************
*            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE              *
* CARRERA: Ingenieria de Software                                 *
* SEMESTRE: Tercer semestre                                       *
* MATERIA: Estructura de Datos                                    *
* NRC: 6396                                                       *
******************************************************************/
/***********************************************************************
 * Module:  Matrices.h
 * Author:  Abigail Cabascango
 * Modified: lunes, 1 de junio de 2020 18:49:56
 * Purpose: Declaration of the class Matrices
 ***********************************************************************/

#if !defined(__ModeloMemoriaDinamica_Matrices_h)
#define __ModeloMemoriaDinamica_Matrices_h
#include <iostream>
#include "stdio.h"
#include "stdlib.h"
#include "conio.h"
#include <string> 
#include <cstdlib>
using namespace std;
class Matrices
{
public:
   Matrices( );
   int** getMatrizResult(void);
   void setMatrizResult(int** newMatrizResult);
   int ** segmentarMemoria(int dim);
   int** multiplicarMatriz(int** matriz, int dim, int potencia);
   void encerarMatriz(int** matriz, int dim);	
   void imprimirMatriz(int** matriz, int dim);

protected:
private:
   int** matrizResult ;
   int dimen;


};
////////////////////////////////////////////////////////////////////////
// Name:        Matrices::Matrices( )
// Purpose:    Constructor of  class   Matrices
// Parameters: 
////////////////////////////////////////////////////////////////////////
Matrices::Matrices( )
{
	
}

////////////////////////////////////////////////////////////////////////
// Name:     Matrices::segmentarMemoria(int dim)
// Purpose:    Implementation of Matrices::segmentarMemoria(int dim)
// Parameters:	int dim
// Return:     int**
////////////////////////////////////////////////////////////////////////
int** Matrices::segmentarMemoria(int dim)
{
	int **m , j;
    m =(int **)malloc(dim*sizeof(int *));
    matrizResult = (int **)malloc(dim*sizeof(int *));
    for(j=0;j<dim;j++){
	
        *(m+j)=(int *)malloc(dim*sizeof(int));
        *(matrizResult+j)=(int *)malloc(dim*sizeof(int));
    }
	return m;
}

////////////////////////////////////////////////////////////////////////
// Name:     Matrices::encerarMatriz(int** matriz, int dim) 
// Purpose:    Implementation of  Matrices::encerarMatriz(int** matriz, int dim) 
// Parameters:	int** matriz, int dim
// Return:     void
////////////////////////////////////////////////////////////////////////
void Matrices::encerarMatriz(int** matriz, int dim) 
{
		for(int i=0;i<dim;i++)
	{
		for(int j=0;j<dim;j++)
		{
			(*(*(matriz+i)+j)) = 0;
			(*(*(matrizResult+i)+j)) = 0;
		}
	}
	
}

////////////////////////////////////////////////////////////////////////
// Name:     Matrices::multiplicarMatriz(int** matriz, int dim, int potencia)
// Purpose:    Implementation of  Matrices::multiplicarMatriz(int** matriz, int dim, int potencia)
// Parameters:	int** matriz, int dim, int potencia
// Return:     int**
////////////////////////////////////////////////////////////////////////
int** Matrices::multiplicarMatriz(int** matriz, int dim, int potencia)
{
	if(potencia == 1){
		matrizResult = matriz;
	}else{
			while(potencia!=1){
			for(int i=0;i<dim;i++){
			for(int j=0;j<dim;j++){
			for(int h=0;h<dim;h++){
				*(*(matrizResult+i)+j)=*(*(matrizResult+i)+j)+(*(*(matriz+i)+h))*(*(*(matriz+h)+j));
				}
			}
		}
		potencia --;
	}
	}

	
	return matrizResult;
}

////////////////////////////////////////////////////////////////////////
// Name:     Matrices::imprimirMatriz(int**matriz, int dim)
// Purpose:    Implementation of  Matrices::imprimirMatriz(int**matriz, int dim) 
// Parameters:	int** matriz, int dim
// Return:     void
////////////////////////////////////////////////////////////////////////
void Matrices::imprimirMatriz(int**matriz, int dim)
{
		for(int i=0;i<dim;i++){
		for(int j=0;j<dim;j++)
		{
			cout << (*(*(matriz+i)+j)) << " ";
		}
		cout <<"\n";
	}
}
#endif
