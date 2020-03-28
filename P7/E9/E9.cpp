#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int cuanto_sale_b(string cadena1,string cadena2){
		int contador=0;
		for(int i=0;i<cadena1.size();i++){
				bool aux=true;
				if(cadena1[i]==cadena2[0]){
						int aux2=0;
						while(aux==true&&aux2<cadena2.size()){
								if(cadena1[i+aux2]!=cadena2[aux2]){aux=false;}
								aux2++;																						
								}
						if(aux2==cadena2.size()){
								contador++;
								}
						}
				}
		return contador;
		}

int find(string cadena1, string cadena2, int &n){
		while(n<cadena1.size()){
				bool aux=true;
				if(cadena1[n]==cadena2[0]){
						int aux2=0;
						while(aux==true&&aux2<cadena2.size()){
								if(cadena1[n+aux2]!=cadena2[aux2]){aux=false;}
								aux2++;																						
								}
						if(aux2==cadena2.size()){
								n++;
								return n;
								}
						}
				n++;
				}
		}

int main(){
				int n=0;
				string cadena1, cadena2;	
				cout<<"Este programa busca una cadena dentro de otra."<<endl;
				cout<<"Introduzca la cadena en la que desea buscar: "<<endl;
				getline(cin,cadena1);
				cout<<"Introduzca la cadena que desea buscar"<<endl;
				getline(cin,cadena2);
				if(cuanto_sale_b(cadena1,cadena2)==0){
																				cout<<"La cadena: "<<cadena2<<", no aparece en la primera cadena"<<endl;
																				}
				else{
						cout<<"La cadena: "<<cadena2<<", aparece en la primera cadena en las siguientes posiciones: ";
						int i=0;
						while(i<cuanto_sale_b(cadena1,cadena2)){
																							cout<<find(cadena1,cadena2,n);
																							i++;
																							if(i<cuanto_sale_b(cadena1,cadena2)){cout<<", ";}
																							}
						cout<<"."<<endl;
						}

    system("pause");
}

