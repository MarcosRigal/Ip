#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cassert>
using namespace std; 

float trace(float m[4][4]){
													float traza=0;
													for(int f=0; f<4;f++){
																								for(int c=0;c<4;c++){
																																				if(f==c){
																																									traza=traza+m[f][c];
																																									}
																																				}
																								}
													return traza;
													}
 
int test();//indica que la funcion test esta mas abajo
int main(){ 
		test();
		cout<<"Correcto"<<endl;
		system("pause");
		return 0;
}
//funcion de test
int test(){
	
	float m[4][4]={ {1,2,3,4},{1,2,3,4},{1,2,3,4},{1,2,3,4}};
	assert( trace(m)== 10 );
	return 0;
}	


