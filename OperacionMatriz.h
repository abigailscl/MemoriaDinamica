/***********************************************************************
 * Module:  Matrices.h
 * Author:  Abigail
 * Modified: lunes, 1 de junio de 2020 18:49:56
 * Purpose: Declaration of the class Matrices
 ***********************************************************************/

#if !defined(__ModeloMemoriaDinamica_Matrices_h)
#define __ModeloMemoriaDinamica_Matrices_h

class Matrices
{
public:
   Matrices();
   int** getMatrizResult(void);
   void setMatrizResult(int** newMatrizResult);
   int ** segmentarMemoria(int** matriz, int dim);
   void ingresarValores(int** matriz, int dim);
   int** multiplicarMatriz(int** matriz, int dim, int potencia);
   void encerarMatriz(int** matriz, int dim);

protected:
private:
   int** matrizResult;


};
int** Matrices::segmentarMemoria(int** matriz, int dim)
{
	return matriz;
}

void Matrices::encerarMatriz(int** matriz, int dim) 
{
	
}
void Matrices::ingresarValores(int** matriz, int dim)
{
	
}
int** Matrices::multiplicarMatriz(int** matriz, int dim, int potencia)
{
	
	return matrizResult;
}
#endif
