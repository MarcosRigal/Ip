#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
				cout<<"Este programa indica si el numero introducido es <, = o > que 0 "<<endl;
				int numero;
				cout<<"Introduzca un numero: "<<endl;
				cin>>numero;
				if(numero>0){
										cout<<"El numero introducido es mayor que 0 "<<endl;
										}
				else if(numero==0){
													cout<<"El numero introducido es 0 "<<endl;
													}
				else if(numero<0){
												cout<<"El numero introducido es menor que 0 "<<endl;
												}

    system("pause");
}

