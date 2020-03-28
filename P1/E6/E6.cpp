#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
				cout<<"Este programa calcula la media entre los 4 numeros introducidos."<<endl;
				float n1,n2,n3,n4,resultado;
				cout<<"Inserte 4 numeros para calcular su media: "<<endl;
				cin>>n1;
				cin>>n2;
				cin>>n3;
				cin>>n4;
				resultado = ((n1+n2+n3+n4)/4);
				cout<<"La media es: "<<resultado<<endl;

    system("pause");
}

