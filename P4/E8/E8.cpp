#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

bool esperfecto(int v){
									int suma=0;
									bool respuesta;
									for(int aux=(v/2);aux>0;aux--){
																					if(v%aux==0){suma+=aux;}
																					}
									if(suma==v){respuesta=true;}
									else{respuesta=false;}
									return respuesta;
									}

int main(){
				int numero;
				cout<<"Este programa dice si el numero introducido es perfecto o no."<<endl;
				cout<<"Introduzca un numero:"<<endl;
				cin>>numero;
				if(numero>0){
										if(esperfecto(numero)==true){cout<<"Si, "<<numero<<" es un numero perfecto"<<endl;}
										else{cout<<"No, "<<numero<<" no es un numero perfecto"<<endl;}
										}
				else if(numero<0){
												numero=-numero;
												if(esperfecto(numero)==true){cout<<"Si, "<<-numero<<" es un numero perfecto"<<endl;}
												else{cout<<"No, "<<-numero<<" no es un numero perfecto"<<endl;}
												}
				else if(numero==0){cout<<"No, 0 no es un numero perfecto"<<endl;}
				
    system("pause");
}

