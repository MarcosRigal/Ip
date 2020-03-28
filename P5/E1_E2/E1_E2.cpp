#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

void lee(float vector[],int longitud){
									int contador;
									for(contador=0;contador<longitud;contador++){
																cout<<"Inserte el valor para la posicion "<<contador<<" del vector."<<endl;
																cin>>vector[contador];
																}
									}

void imprime(float vector[],int longitud){
											int contador;
											cout<<"Los valores del vector son:"<<endl;
											for(contador=0;contador<longitud;contador++){
																		cout<<vector[contador]<<endl;
																		}
											}

int main(){
				cout<<"Este programa lee e imprime los elementos de un vector"<<endl;
				cout<<"Introduzca la longitud del vector:"<<endl;
				int longitud;
				cin>>longitud;
				float vector[longitud];
				lee(vector,longitud);
				imprime(vector,longitud);


    system("pause");
}

