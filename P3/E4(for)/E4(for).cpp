#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
				int n,i;
				cout<<"Este programa devuelve los divisores de un numero en orden ascendente"<<endl;
				cout<<"Introduzaca un numero:"<<endl;
				cin>>n;
				if(n==0){
								cout<<"Los divisores de 0 son todos los reales excepto el 0"<<endl;
								}
				if(n>0){
							cout<<"Los divisores son: ";
							for(i=1;n>=i;i++){
															if(n%i==0){
																				cout<<i<<", "<<-i<<", ";
																				}
														}
							}
				if(n<0){
							cout<<"Los divisores son: ";
							for(i=-1;n<=i;i--){
														if(n%i==0){
																			cout<<i<<", "<<-i<<", ";
																			}
														}
							}
    			system("pause");
				}

