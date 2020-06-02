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
 		cout << "\nIngreso herroneo vuelva a ingresar: ";
 		cin >> entrada;
	 }
	 return entrada;
}
string IngresoDatos::ingresar(){
	Validaciones val;
 	string entrada;
 	cout<< "\nIngrese dimendion:"  ;
 	cin >> entrada;
 	while (val.validar(entrada, 3))
 	{
 		cout << "\nIngreso herroneo vuelva a ingresar: ";
 		cin >> entrada;
	 }
	 return entrada;
}
string IngresoDatos::ingresar(string mensage){
	Validaciones val;
 	string entrada;
 	cout<< mensage ;
 	cin >> entrada;
 	while (val.validar(entrada, 3))
 	{
 		cout << "\nIngreso herroneo vuelva a ingresar: ";
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
 		cout << "\nIngreso herroneo vuelva a ingresar: ";
 		cin >> entrada;
	 }
	 return entrada;
}
