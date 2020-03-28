#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
				int n,s=0,i;
				cout<<"Este programa calcula la suma de los numeros que son divisibles por 2 o 3 hasta el numero n indicado por el usuario"<<endl;
				cin>>n;
				i=n;
				if(n==0){
								cout<<"No hay numeros divisibles por 2 o 3"<<endl;
								}
				else if(n>0){
									while(n>0){
														if(n%2==0 && n%3==0){
																								s=s+n;
																								}
														else if(n%2==0 && n%3>0){
																									s=s+n;
																									}
														else if(n%2>0 && n%3==0){
																									s=s+n;
																									}
														n--;
														}
									cout<<"La suma de los numeros divisibles por 2 o 3 hasta el numero: "<<i<<" es: "<<s<<endl;
									}
				else if(n<0){
									n=-n;
									while(n>0){
														if(n%2==0 && n%3==0){
																								s=s+n;
																								}
														else if(n%2==0 && n%3>0){
																										s=s+n;
																										}
														else if(n%2>0 && n%3==0){
																										s=s+n;
																										}
														n--;
														}
									cout<<"La suma de los numeros divisibles por 2 o 3 hasta el numero: "<<i<<" es: "<<-s<<endl;
									}				
    			system("pause");
				}

