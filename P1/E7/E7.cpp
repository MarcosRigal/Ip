#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
				cout<<"Este programa calcula la nota media de un alumno dados los siguientes parametros de ponderaciom:"<<endl;
				cout<<"Nota de las practicas 25%"<<endl;
				cout<<"Nota de las parcial 25%"<<endl;
				cout<<"Nota de examen final 50%"<<endl;
				float npractica,nparcial,nefinal,nmedia;
				cout<<"Introduzca la nota de las practicas: "<<endl;
				cin>>npractica;
				if(npractica<0 || npractica>10){
																cout<<"Error valor no valido"<<endl;
																system("pause");
																return 0;
																}
				cout<<"Introduzca la nota del parcial: "<<endl;
				cin>>nparcial;
				if(nparcial<0 || nparcial>10){
																cout<<"Error valor no valido"<<endl;
																system("pause");
																return 0;
																}
				cout<<"Introduzca la nota del examen final: "<<endl;
				cin>>nefinal;
				if(nefinal<0 || nefinal>10){
																cout<<"Error valor no valido"<<endl;
																system("pause");
																return 0;
																}
				nmedia= ((npractica*0.25)+(nparcial*0.25)+(nefinal*0.5));
				cout<< "La nota media del alumno es: "<<nmedia<<endl;

    system("pause");
}

