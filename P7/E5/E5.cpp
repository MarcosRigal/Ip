#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

void replace(string &cad,char a,char b){
															for(int i=0; i<cad.size(); i++){
																											if(cad[i]==a){cad[i]=b;}
																											}
															}

int main(){
				char a,b;
				string cad;
				cout<<"Este programa reemplaza en el texto el caracter seleccionado por el indicado"<<endl;
				cout<<"Introduzca el texto: "<<endl;
				getline(cin,cad);
				cout<<"Introduzca el caracter que desea sustituir: "<<endl;
				cin>>a;
				cout<<"Introduzca el caracter que desea que lo reemplace"<<endl;
				cin>>b;
				replace(cad,a,b);
				cout<<cad<<endl;
    system("pause");
}

