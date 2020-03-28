#include<iostream>
using namespace std;
int main(){
					cout<<"Este programa devuelve el menor de los 5 numeros introducidos por el usuario"<<endl;
					float mayor=-99999999999,valor;
					int i=0,c=0;
					while(i<5){
										cout<<"Introduzca un valor: "<<endl;
										cin>> valor;
										if(valor>mayor){
																	mayor=valor;
																	}
										else if(valor==mayor){
																			c++;
																			}
										i++;
										}
					if(c==4){
								cout<<"Son todos iguales."<<endl;
								}
					else{
							cout <<"El mayor de los numeros introducidos es: "<<mayor<<endl;
							}
					cin.ignore();
					cin.get();
					}