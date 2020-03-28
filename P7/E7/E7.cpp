#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

bool palindromo(string cad){
											for(int i=0; i<cad.size(); i++){
																						if(cad[i]!=cad[cad.size()-1-i]){return false;}
																						}
											return true;
											}

int main(){
				string cad;
				cout<<"Este programa indica si la cadena introducida es un palindromo o no."<<endl;
				cout<<"Introduzca la palabra"<<endl;
				getline(cin,cad);
				if(palindromo(cad)==true){cout<<"Si, "<<cad<<" es un palindromo"<<endl;}
				else if(palindromo(cad)==false){cout<<"No, "<<cad<<" no es un palindromo"<<endl;}
    system("pause");
}

