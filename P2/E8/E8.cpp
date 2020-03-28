#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
				int n,i=0,a=1,b=1,c;
				cout<<"Este programa calcula los los n primeros terminos de la sucesion de fibonacci"<<endl;
				cout<<"Introduzca el termino hasta el que desea calcular"<<endl;
				cin>>n;
				while(n<1){
									cout<<"Error introduzca un numero mayor que 0"<<endl;
									cin>>n;
									}
				if(n==1){cout<<"0"<<endl;}
				else if(n==2){cout<<"0, 1"<<endl;}
				else if(n==3){cout<<"0, 1, 1"<<endl;}
				else if(n>3){
									n=n-3;
									cout<<"0, 1, 1, ";
									while(n>i){
														c=a+b;
														cout<<c<<", ";
														a=b;
														b=c;
														i++;
													}
										}
    			system("pause");
				}

