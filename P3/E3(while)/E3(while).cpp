#include<iostream>
using namespace std;
int main (){
						int numero,aux,divisores=0;
						cout<<"Este programa indica si un numero n es primo o no"<<endl;
						cout<<"Introduzca un numero"<<endl;
						cin>>numero;
						if (numero==0 || numero==1 || numero==-1){cout<<numero<< " es un numero especial no se considera ni primo ni compuesto"<<endl;}
						if(numero>1){
														aux=(numero/2);
														while(aux>0&&divisores<=1){
																														if(numero%aux==0){divisores++;}
																														aux--;
																														}										
														if(divisores==1){cout<<numero<<" es primo"<<endl;}
														else{cout<<numero<<" no es primo"<<endl;}
														}
						if(numero<-1){
														aux=(numero/2);
														while(aux<0&&divisores<=1){
																														if(numero%aux==0){divisores++;}
																														aux++;
																														}										
														if(divisores==1){cout<<numero<<" es primo"<<endl;}
														else{cout<<numero<<" no es primo"<<endl;}
														}
						cin.ignore();
						cin.get();
						}