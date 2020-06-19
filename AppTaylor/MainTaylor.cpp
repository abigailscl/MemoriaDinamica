
#include <iostream>
#include "Trigonometry.h"
#include "IngresoDatos.h"
using namespace std;
int main()
{
    Trigonometry tr;
    float value;
    
    IngresoDatos enter;
    
    do{
    	value = atof(enter.ingresarFltDbl().c_str());
	}while(value <-6.3 || value > 6.3);
	cout<< "EL sin ("  << value<<  ") = "<<tr.sin(value)<<endl;
    cout<< "EL cos ("  << value<<  ") = "<<tr.cos(value)<<endl;
    cout<< "EL tan ("  << value<<  ") = "<<tr.tan(value)<<endl;
    //cout << "coseno de " << value << " es: " << tr.cos(value) << endl;
	return 0;
}

