#include<iostream>
#include"Validaciones.h"
using namespace std;
class IngresoDatos{
	public:
		string ingresar(int i);
		void ingresar();
		string ingresar(int i, int j);
};
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
void IngresoDatos::ingresar(){
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
