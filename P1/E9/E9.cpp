#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
				cout<<"Este programa da el numero del mes correspondiente al valor introducido por el usuario"<<endl;
				int mes;
				cout<<"Introduzca el numero del mes: "<<endl;
				cin>>mes;
				if(mes==1){
									cout<<"El 1 corresponde a enero que tiene 31 dias"<<endl;
									}		
				if(mes==2){
									cout<<"El 2 corresponde a febrero que tiene 28 dias excepto en los años bisiestos que tiene 29"<<endl;
									}
				if(mes==3){
									cout<<"El 3 corresponde a marzo que tiene 31 dias"<<endl;
									}
				if(mes==4){
									cout<<"El 4 corresponde a abril que tiene 30 dias"<<endl;
									}
				if(mes==5){
									cout<<"El 5 corresponde a mayo que tiene 31 dias"<<endl;
									}
				if(mes==6){
									cout<<"El 6 corresponde a junio que tiene 30 dias"<<endl;
									}
				if(mes==7){
									cout<<"El 7 corresponde a julio que tiene 31 dias"<<endl;
									}
				if(mes==8){
									cout<<"El 8 corresponde a agosto que tiene 31 dias"<<endl;
									}
				if(mes==9){
									cout<<"El 9 corresponde a septiembre que tiene 30 dias"<<endl;
									}
				if(mes==10){
									cout<<"El 10 corresponde a octubre que tiene 31 dias"<<endl;
									}
				if(mes==11){
									cout<<"El 11 corresponde a noviembre que tiene 30 dias"<<endl;
									}
				if(mes==12){
									cout<<"El 12 corresponde a diciembre que tiene 31 dias"<<endl;
									}
				else{
							cout<<"El numero introducido no se corresponde con ningun mes"<<endl;
							}
    system("pause");
}

