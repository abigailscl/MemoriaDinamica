#include<iostream>
#include"Validaciones.h"
using namespace std;
class IngresoDatos{
	public:
		string ingresar();
};
string IngresoDatos::ingresar(){
	Validaciones val;
 	string entrada;
 	cin >> entrada;
 	while (val.validar(entrada, 2))
 	{
 		cout << "Ingreso herroneo: ";
 		cin >> entrada;
	 }
	 return entrada;
}
