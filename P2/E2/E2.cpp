#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
				int n,i=0,s=0;
				cout<<"Este programa calcula la suma de los n terminos precedentes y el termino n introducido por el usuario es decir para (n=3) 1+2+3=6"<<endl;
				cout<<"Introduzca un valor: "<<endl;
				cin>>n;
				if(n>0){
							while(i<n){
												i++;
												s=(s+(i*1));
												}
							}
				else if(n<0){
									while(n<i){
														i--;
														s=(s+(i*1));
														}
									}				
				cout<<"El resultado es: "<<s<<endl;
    			system("pause");
				}

