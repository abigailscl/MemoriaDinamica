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
 * Purpose: Validar datos ingresados por consola
 ***********************************************************************/
#include<iostream>
#include <ctype.h>
#include <string.h>

using namespace std;
class Matrices;
class Validaciones
{
	public:
		Validaciones();
		bool validar(string , int );
	
};
Validaciones::Validaciones()
{
	
}
bool Validaciones::validar(string cadena, int tipo) {
int contador = 0;
	try {
		for (int i = 0; i < cadena.length(); i++) {
			if (isalpha(cadena[i])) {
				throw 1;
			}
			if (!isdigit(cadena[i]) && tipo == 1) {
				throw 1;
			}
			if (cadena[i] == '.' || tipo == 1) {
				contador++;
			}
			if (cadena[i] == '.' && tipo == 2) {
				throw 1;
			}
			if (cadena[i] == '-' && tipo == 3) {
				throw 1;
			}
			if (cadena[i] == '.' && tipo == 3) {
				throw 1;
			}
			if (cadena[i] == '0' && tipo == 3) {
				throw 1;
			}
			if ((isdigit(cadena[i]) == 0 && cadena[i] != '.' && cadena[i] != '-') || (contador>1)) {				
				throw 1;
			}			
		}	
	}
	catch (int e) {
		return true;
	}	
	return false;
}
