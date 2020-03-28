#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
				int n,i=1,r=0;
				cout<<"Este programa calcula el resultado de la suma de los numeros impares hasta el numero introducido"<<endl;
				cout<<"Introduzca un numero impar: "<<endl;
				cin>>n;
				while(n%2==0){
											cout<<"Error introduzca un numero impar:"<<endl;
											cin>>n;
											}
				if(n>0){
							while(n>=i){
												r=r+i;
												i=i+2;
												}
							}
				else if(n<0){
									i=-1;
									while(n<=i){
														r=r+i;
														i=i-2;
														}
									}
				cout<<"El resultado de la suma es: "<<r<<endl;
    			system("pause");
				}

