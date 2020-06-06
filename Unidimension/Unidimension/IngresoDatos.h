/******************************************************************
*            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE              *
* CARRERA: Ingenieria de Software                                 *
* SEMESTRE: Tercer semestre                                       *
* MATERIA: Estructura de Datos                                    *
* NRC: 6396                                                       *
******************************************************************/
/***********************************************************************
 * Module:  IngresoDatos.h
 * Author:  Abigail Cabascango
 * Modified: domingo, 28 de mayo de 2020 17:51:04
 * Purpose: Ingresar datos por consola
 ***********************************************************************/
#if !defined(__IngresoDatos_h)
#define __IngresoDatos_h

#include<iostream>
#include"Validaciones.h"
using namespace std;
class IngresoDatos{
	public:
		IngresoDatos();
		string ingresar(int i);
		string ingresar();
		string ingresar(string mensage);
		string ingresar(int i, int j);
};
////////////////////////////////////////////////////////////////////////
// Name:       IngresoDatos::IngresoDatos()
// Purpose:    Constructor of  class IngresoDatos
// Parameters: 
////////////////////////////////////////////////////////////////////////
 IngresoDatos::IngresoDatos()
{
	
}

////////////////////////////////////////////////////////////////////////
// Name:      string IngresoDatos::ingresar(int i)
// Purpose:    Implementation of  IngresoDatos::ingresar(int i)
// Parameters: int i
// Return:     string
////////////////////////////////////////////////////////////////////////

string IngresoDatos::ingresar(int i){
	Validaciones val;
 	string entrada;
 	cout<< "\nIngrese valor[" << i <<"]: " ;
 	cin >> entrada;
 	while (val.validar(entrada, 2))
 	{
 		cout << "\nIngreso herroneo vuelva a ingresar: ";
 		cin >> entrada;
	 }
	 return entrada;
}
////////////////////////////////////////////////////////////////////////
// Name:      string IngresoDatos::ingresar(int i)
// Purpose:    Implementation of  IngresoDatos::ingresar()
// Parameters: 
// Return:     string
////////////////////////////////////////////////////////////////////////
string IngresoDatos::ingresar(){
	Validaciones val;
 	string entrada;
 	cout<< "\nIngrese dimension:"  ;
 	cin >> entrada;
 	while (val.validar(entrada, 3))
 	{
 		cout << "\nIngreso equivocado vuelva a ingresar: ";
 		cin >> entrada;
	 }
	 return entrada;
}
////////////////////////////////////////////////////////////////////////
// Name:      string IngresoDatos::ingresar(int i)
// Purpose:    Implementation of  IngresoDatos::ingresar(string mensage)
// Parameters: string mensage
// Return:     string
////////////////////////////////////////////////////////////////////////
string IngresoDatos::ingresar(string mensage){
	Validaciones val;
 	string entrada;
 	cout<< mensage ;
 	cin >> entrada;
 	while (val.validar(entrada, 4))
 	{
 		cout << "\nIngreso equivocado vuelva a ingresar: ";
 		cin >> entrada;
	 }
	 return entrada;
}
////////////////////////////////////////////////////////////////////////
// Name:      IngresoDatos::ingresar(int i, int j)
// Purpose:    Implementation of  IngresoDatos::ingresar(int i, int j)
// Parameters: int i, int j
// Return:     string
////////////////////////////////////////////////////////////////////////
string IngresoDatos::ingresar(int i, int j){
	Validaciones val;
 	string entrada;
 	cout<< "\nIngrese valor[" << i << "][ " << j <<"]: " ;
 	cin >> entrada;
 	while (val.validar(entrada, 2))
 	{
 		cout << "\nIngreso herroneo vuelva a ingresar: ";
 		cin >> entrada;
	 }
	 return entrada;
}
#endif