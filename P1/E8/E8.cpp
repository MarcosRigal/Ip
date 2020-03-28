#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
				int a,b,c;
				cout<<"Este programa imprime en pantalla el mayor de los tres numeros previamente introducidos por el usuario"<<endl;
				cout<<"Introduzca el valor de A: "<<endl;
				cin>>a;
				cout<<"Introduzca el valor de B: "<<endl;
				cin>>b;				 
				cout<<"Introduzca el valor de C: "<<endl;
				cin>>c;
				if(a>c && a>b){
											cout<<"El valor mas alto es: "<<a<<endl;
											}
				else if(b>a && b>c){
													cout<<"El valor mas alto es: "<<b<<endl;
													}
				else if(c>a && c>b){
													cout<<"El valor mas alto es: "<<c<<endl;
													}
    system("pause");
}

