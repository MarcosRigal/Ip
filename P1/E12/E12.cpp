#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
				int numero;
				cout<<"Este programa indica el dia de la semana correspondiente al numero introducido"<<endl;
				cout<<"Introduzca el numero: "<<endl;
				cin>>numero;
				switch(numero){
											case 1:{
															cout<<"El 1 es el lunes, dia laborable"<<endl;
															}break;
											case 2:{
															cout<<"El 2 es el martes, dia laborable"<<endl;
															}break;
											case 3:{
															cout<<"El 3 es el miercoles, dia laborable"<<endl;
															}break;
											case 4:{
															cout<<"El 4 es el jueves, dia laborable"<<endl;
															}break;
											case 5:{
															cout<<"El 5 es el viernes, dia laborable"<<endl;
															}break;
											case 6:{
															cout<<"El 6 es el sabado, dia no laborable"<<endl;
															}break;
											case 7:{
															cout<<"El 7 es el domingo, dia no laborable"<<endl;
															}break;
											default:{
															cout<<"El numero introducido no se corresponde a ningun dia de la semana"<<endl;
															}
											}

    system("pause");
}

