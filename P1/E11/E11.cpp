#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
				int a,b,c;
				cout<<"Este programa intercambia los valores de las variables introducidas para que a almacene el menor y b el mayor "<<endl;
				cout<<"Introduzca el valor de a:"<<endl;
				cin>> a;
				cout<<"Introduzca el valor de b"<<endl;
				cin>>b;
				if(a>b){
							c=a;
							a=b;
							b=c;
							cout<<"El valor de a es:" <<a <<", el valor de b es: "<<b<<endl;
							}
				else{
						cout<<"El valor de a es:" <<a <<", el valor de b es: "<<b<<endl;
						}

    system("pause");
}

