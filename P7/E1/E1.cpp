#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int espacios(string cad){
									int contador=0;
									for(int i=0;i<cad.size();i++){
																				if(cad[i]==' '){
																										contador++;
																										}
																				}
									return contador;
									}

int main(){
				int n;
				string cad;
				cout<<"Este programa devuelve el numero de espacios que tiene la cadena de texto introducida"<<endl;
				cout<<"Introduzca su texto"<<endl;
				getline(cin,cad);
				n=espacios(cad);
				cout<<"El numero de espacios es: "<<n<<endl;

    system("pause");
}

