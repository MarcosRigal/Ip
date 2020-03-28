#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

void divisores(int v){
								int aux;
								if(v==0){cout<<"todos los reales excepto el 0"<<endl;}									
								else{
										if(v>0){
													for(aux=v;aux>0;aux--){
																							if(v%aux==0){cout<<aux<<", "<<-aux<<", ";}
																							}
													}
											else{
													for(aux=v;aux<0;aux++){
																							if(v%aux==0){cout<<aux<<", "<<-aux<<", ";}
																							}
													}
										cout<<"0."<<endl;		
										}
								}


int main(){
				int n;
				cout<<"Este programa devuelve los divisores del numero introducido"<<endl;
				cout<<"Introduca un numero"<<endl;
				cin>>n;
				cout<<"Los divisores son: ";
				divisores(n);
    			system("pause");
				}