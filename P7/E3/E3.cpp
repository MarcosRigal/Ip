#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

void convierte_a_mayuscula(string& cad){
																for(int i=0;i<cad.size();i++){
																												cad[i]=toupper(cad[i]);
																												}
																}

int main(){
				string cad;
				cout<<"Este programa transforma el texto introducido a mayusculas"<<endl;
				cout<<"Introduzca su texto: "<<endl;
				getline(cin,cad);
				convierte_a_mayuscula(cad);
				cout<<cad<<endl;

    system("pause");
}

