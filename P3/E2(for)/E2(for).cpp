#include<iostream>
using namespace std;
int main (){
						float numero,mayor;
						cout<<"Este programa devuelve el mayor de los numeros introducidos, pedira valores hasta que se introduzca un numero menor que 0"<<endl;
						cout<<"Introduzca un valor"<<endl;
						cin>>numero;
						mayor=numero;
						for(;numero>=0;){
																cout<<"Introduzca otro valor"<<endl;
																cin>>numero;
																if(numero>mayor){mayor=numero;}
																}
						cout<<"El mayor es: "<<mayor<<endl;
						cin.ignore();
						cin.get();
						}