#include<iostream>
#include"Validaciones.h"
using namespace std;
class IngresoDatos{
	public:
		IngresoDatos();
		string ingresar(int i);
		string ingresar();
		string ingresar(int i, int j);
};
 IngresoDatos::IngresoDatos()
{
	
}
string IngresoDatos::ingresar(int i){
	Validaciones val;
 	string entrada;
 	cout<< "\nIngrese valor[" << i <<"]: " ;
 	cin >> entrada;
 	while (val.validar(entrada, 2))
 	{
 		cout << "\nIngreso herroneo: ";
 		cin >> entrada;
	 }
	 return entrada;
}
string IngresoDatos::ingresar(){
	Validaciones val;
 	string entrada;
 	cout<< "\nIngrese valor:"  ;
 	cin >> entrada;
 	while (val.validar(entrada, 2))
 	{
 		cout << "\nIngreso herroneo: ";
 		cin >> entrada;
	 }
	 return entrada;
}
string IngresoDatos::ingresar(int i, int j){
	Validaciones val;
 	string entrada;
 	cout<< "\nIngrese valor[" << i << "][ " << j <<"]: " ;
 	cin >> entrada;
 	while (val.validar(entrada, 2))
 	{
 		cout << "\nIngreso herroneo: ";
 		cin >> entrada;
	 }
	 return entrada;
}
