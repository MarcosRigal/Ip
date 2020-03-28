#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;
bool esprimo(int v){
								int aux,divisores=0;
								bool res;
								if(v>1){
											for(aux=v/2;aux>0&&divisores<=1;aux--){
																												if(v%aux==0){divisores++;}
																												}
											if (divisores==1){
																		res=true;
																		return true;
																		}
											else{
													res=false;
													return false;
													}
											}
								}
void primos(int n){
							int aux=1,i;
							for(i=0;i<n;){
														aux=aux+1;
														if(esprimo(aux)==true){
																							cout<<aux<<", ";
																							i++;
																							}
														}
							}
int main(){
				int n;
				cout<<"Este programa devuelve tantos numeros primos como el usuario solicite"<<endl;
				cout<<"Cuantos numeros primos desea calcular:"<<endl;
				cin>>n;
				while(n<=0){
										cout<<"Error introduzca un numero mayor que 0"<<endl;
										cin>>n;
										}			
				cout<<"Los primeros "<<n<<" numeros primos son: ";
				primos(n);
				system("pause");
				}

