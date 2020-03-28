#include <cstdio>
#include <cstdlib>
#include <iostream>
#include<ctime>
using namespace std;

void fijaValorAleatorio(int vector[],int longitud,int maximo){
																							int segundos=time(0);
																							srand(segundos);
																							for(int contador=0; contador<longitud;contador++){
																																											int numero=rand()%maximo;
																																											vector[contador]=numero;
																																											}
																							}
void imprime(int vector[],int longitud){
															cout<<"El vector es:"<<endl;
															for(int contador=0;contador<longitud;contador++){
																																		cout<<vector[contador]<<endl;
																																		}
															}	

int main(){
				int longitud, maximo;
				cout<<"Este programa pone todos los elementos del vector a valores aleatorios entre el 0 y el maximo introducido por el usuario"<<endl;
				do{
				cout<<"Introduzca la longitud del vector"<<endl;
				cin>>longitud;
					}while(longitud<1);
				do{
						cout<<"Introduzca el maximo para los numeros aleatorios"<<endl;
						cin>>maximo;
						}while(maximo<1);
				int vector[longitud];
				fijaValorAleatorio(vector,longitud,maximo);
				imprime(vector,longitud);

    system("pause");
}

