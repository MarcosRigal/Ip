#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int vocales(string cad){
									int contador=0;
									for(int i=0;i<cad.size();i++){
																				if(cad[i]=='a' || cad[i]=='e' || cad[i]=='i' || cad[i]=='o' || cad[i]=='u' || cad[i]=='A' || cad[i]=='E' || cad[i]=='I' || cad[i]=='O' || cad[i]=='U'){
																																																																			contador++;
																																																																			}
																				}
									return contador;
									}

int main(){
				string cad;
				int n;
				cout<<"Esta funcion devuelve el numero de vocales del texto introducido"<<endl;
				cout<<"Introduzca el texto: "<<endl;
				getline(cin,cad);
				n=vocales(cad);
				cout<<"El numero de vocales es: "<<n<<endl;
					
    system("pause");
}

