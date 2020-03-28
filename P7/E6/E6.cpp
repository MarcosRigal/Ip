#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

string concatena(string a,string b){
													return a+b;
													}

int main(){
				string cad1, cad2;
				cout<<"Este programa une dos cadenas de texto en una sola"<<endl;
				cout<<"Introduzca la primera cadena: "<<endl;
				getline(cin,cad1);
				cout<<"Introduzca la segunda cadena: "<<endl;
				getline(cin,cad2);
				cout<<concatena(cad1,cad2)<<endl;

    system("pause");
}

