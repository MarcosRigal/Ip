#include <cstdio>
#include <cstdlib>
#include<cctype>
#include <iostream>
using namespace std;

int digitos(string cad){
									int contador=0;
									for(int i=0;i<cad.size();i++){
																				if(isdigit(cad[i])==true){
																														contador++;
																														}
																				}
										return contador;
									}

int main(){
				string cad;
				int n;
				cout<<"Este programa devuelve el numero de digitos que tiene un texto"<<endl;
				cout<<"Introduzca su texto"<<endl;
				getline(cin,cad);
				n=digitos(cad);
				cout<<"El numero de digitos del texto es: "<<n<<endl;
    system("pause");
}

