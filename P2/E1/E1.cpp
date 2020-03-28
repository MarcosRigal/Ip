#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
				float d,m=0;//d es la variable del dato introducido, m es la de la media, c sirve para saber entre cuanto hay que dividir.
				int c=1;
				cout<<"Este programa calcula la media de los datos introducidos por el usuario hasta que el dato sea menor o igual a 0: "<<endl;	
				cout<<"Introduzca un valor:"<<endl;
				cin>> d;
				m=d;
				while(d>0){			
									cout<<"Introduzca otro valor para hacer la media"<<endl;
									cin>>d;
									m=m+d;
									c++;
									}
				m=m/c;
				cout<<"La media es: "<<m<<endl;
    			system("pause");
				}

