#include <cstdio>
#include <cstdlib>
#include <iostream>
#include<cmath>
using namespace std;

int main(){
				int i,n,fact;
				cout<<"Este programa calcula el factorial de un numero dado"<<endl;
				cout<<"Introduzca un numero para calcular su factorial"<<endl;
				cin>>n;
				while(n<0){
									cout<<"Error no se puede hacer el factorial de numeros negativos, introduzca un numero mayor o igual que 0 para calcular su factorial"<<endl;
									cin>>n;
									}
				if(n==0||n==1){
											cout<<"El factorial de: "<<n<<" es: "<<1<<endl;
											}
				else if(n>1){
									fact=n;
									i=n;
									while(n>1){
														n--;
														fact=fact*n;
														}
									cout<<"El factorial de: "<<i<<" es: "<<fact<<endl;
									}
    			system("pause");
				}

