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
								if(v<-1){
											for(aux=v/2;aux<0&&divisores<=1;aux++){
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
int main(){
				int n;
				cout<<"Este programa dice si un numero introducido es primo o no"<<endl;
				cout<<"Introduzca un numero:"<<endl;
				cin>>n;
				if(n==0 ||  n==1 || n==-1){cout<<"El numero "<<n<<" no es considerado ni primo ni compuesto"<<endl;}
				else{
						if (esprimo(n)==true){cout<<"El numero es primo"<<endl;}
						else{cout<<"El numero no es primo"<<endl;}
						}
				system("pause");
				}

