#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
				cout<<"Este programa devuelve el dia de la semana asociado al valor introducido siempre que sea posible."<<endl;
				int numero;
				cout <<"Introduzca un numero: "<<endl;
				cin >> numero;
				if (numero >=1 && numero<=7){
												if(numero ==1){
																			cout<<"El numero 1 equivale al lunes, un dia laborable"<<endl;		
																			}
												if(numero ==2){
																			cout<<"El numero 2 equivale al martes, un dia laborable"<<endl;
																			}
												if(numero ==3){
																			cout<<"El numero 3 equivale al miercoles, un dia laborable"<<endl;
																			}
												if(numero ==4){
																			cout<<"El numero 4 equivale al jueves, un dia laborable"<<endl;
																			}
												if(numero ==5){
																			cout<<"El numero 5 equivale al viernes, un dia laborable"<<endl;
																			}
												if(numero ==6){
																			cout<<"El numero 6 equivale al sabado, fin de semana"<<endl;
																			}
												if(numero ==7){
																			cout<<"El numero 7 equivale al domingo, fin de semana"<<endl;																	
																			}
												}
				else{
						cout<<"Error el numero no se corresponde a ningun dia de la semana."<<endl;
						}
    system("pause");
	return 0;
}

