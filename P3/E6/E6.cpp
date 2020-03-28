#include<cstdio>
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main(){
				cout<<"Este programa genera un numero secreto aleatorio entre 0 y 1000 y el usuario tiene que acertarlo"<<endl;
				std::srand(time(0));
				int secreto=rand()%1000,valor;
				cout<<"Inserte un valor"<<endl;
				cin>>valor;
				while(valor<secreto || valor>secreto){
																			cout<<"Error el numero introducido es ";
																			if(valor<secreto){
																										cout<<"menor que el numero secreto"<<endl;
																										}
																			else if(valor>secreto){
																												cout<<"mayor que el numero secreto"<<endl;
																												}
																			cout<<"Introduzca otro valor"<<endl;
																			cin>>valor;
																			}
				cout<<"Enhorabuena has acertado"<<endl;				
    system("pause");
}

