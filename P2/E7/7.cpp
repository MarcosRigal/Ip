#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
				int n,i=1,p=0;
				cout<<"Este programa dice si un numero es primo o no"<<endl;
				cout<<"Introduzaca un numero:"<<endl;
				cin>>n;
				if(n==0){
								cout<<"El numero no es primo"<<endl;
								}
				if(n>0){
							i=n;
							while(i>0){
												if(n%i==0){
																	p++;
																	}
												i--;
												}
							if(p==2){
											cout<<"El numero es primo"<<endl;
											}
							else{
									cout<<"El numero no es primo"<<endl;
									}
							}
				if(n<0){
							i=n;
							while(i<0){
												if(n%i==0){
																	p++;
																	}
												i++;
												}
							if(p==2){
											cout<<"El numero es primo"<<endl;
											}
							else{
									cout<<"El numero no es primo"<<endl;
									}
							}
    			system("pause");
				}

