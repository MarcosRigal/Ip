#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;
int factorial(int v){
							int res,fact=1,aux;
							if(v==0 || v==1){
														res=1;
														}
							else{
									for(aux=v;aux>=1;aux--){
																			fact=fact*aux;
																			}
									res=fact;
									}
							return res;
							}

int main(){
				int n;
				cout<<"Este programa devuelve el factorial de un numero"<<endl;
				cout<<"Inserte un numero para calcular su factorial"<<endl;
				cin>>n;
				while(n<0){
									cout<<"Error no se puede calcular el factorial de un numero negativo"<<endl;
									cout<<"Introduzca otro numero"<<endl;
									cin>>n;
									}
				cout<<"El factorial de "<<n <<" equivale a "<<factorial(n)<<endl;
    system("pause");
}

