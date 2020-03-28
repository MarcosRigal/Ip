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

int combinaciones(int n, int k){
										int res;
										res=((factorial(n))/((factorial(k))*(factorial(n-k))));
										return res;
										}

int main(){
				int n,k,res;
				cout<<"Este programa devuelve las combinaciones posibles de a sobre b"<<endl;
				cout<<"Inserte dos numeros para calcular sus combinaciones"<<endl;
				cin>>n>>k;
				while(n<0 || k<0 || k>n){
														if(n<0){
																	cout<<"Error no se puede calcular el factorial de un numero negativo"<<endl;
																	cout<<"Vuelva a introducir el primer valor"<<endl;
																	cin>>n;
																	}
														else if(k<0){
																			cout<<"Error no se puede calcular el factorial de un numero negativo"<<endl;
																			cout<<"Vuelva a introducir el segundo valor"<<endl;
																			cin>>k;
																			}
														else if(k>n){
																			cout<<"Error n debe ser siempre mayor que k"<<endl;
																			cout<<"Introduzca otra otros numeros que cumplan esa norma"<<endl;
																			cin>>n>>k;
																			}
														}
				res=combinaciones(n,k);
				cout<<"Las combinaciones de "<<n<<" sobre "<<k<<" son: "<<res<<endl;
    			system("pause");
				}

