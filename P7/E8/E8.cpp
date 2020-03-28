#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cctype>
using namespace std;

bool es_verdadero(string &DNI){
												if(DNI.size()!=9){return false;}
												for(int i=0;i<8;i++){
																				if(isdigit(DNI[i])==false){return false;}
																				}
												if(isdigit(DNI[8])==true){return false;}
												DNI[8]=toupper(DNI[8]);
												int numero=stoi(DNI);
												char letras[]="TRWAGMYFPDXBNJZSQVHLCKE";
												if(DNI[8]!=letras[(numero%23)]){return false;}
												return true;
											}

int main(){
				string DNI;
				cout<<"Este programa dice si un DNI es verdadero."<<endl;
				do{
					cout<<"Introduzca el DNI: "<<endl;
			    	cin>>DNI;
					if(es_verdadero(DNI)==false){cout<<"Error el DNI introducido no es valido"<<endl;}
					}while(es_verdadero(DNI)==false);
				cout<<"Si, el DNI: "<<DNI<<" es verdadero"<<endl;
    system("pause");
}

