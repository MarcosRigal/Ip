#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
int Ndivisores(int numero){
										if(numero==0){
																return 0;
																}
										int contador = 0;
										if(numero<0){
																numero=-numero;
																}
										for(int i=1; i<numero+1;i++){
																						if(numero%i==0){
																													contador ++;
																													}
																						}
										return contador;
										}
int main(){
				
				cout<<"Este programa devuelve el numero de divisores del numero introducido"<<endl;
				int numero;
				cout<<"Introduzca un numero: ";
				cin>>numero;
				cout<<numero<<" tiene "<<Ndivisores(numero)<<" divisores."<<endl;
    			system("pause");
				}

