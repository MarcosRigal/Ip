#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
				int i=1;
				float media,valor,suma=0;
				cout<<"Este programa pide numeros al usuario mientras la media de estos sea menor que 30"<<endl;
				do{
						cout<<"Introduzca un valor:"<<endl;
						cin>>valor;
						suma=valor+suma;
						media=suma/i;
						i++;											
						}while(media<30);
    system("pause");
}

