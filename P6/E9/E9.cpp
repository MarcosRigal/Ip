#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cassert>
#include <cmath>
using namespace std; 

void stats(float m[4][4], float res[2]){
															float media=0,desviacion=0;
															for(int f=0;f<4;f++){
																							for(int c=0; c<4;c++){
																																media=media+m[f][c];
																																}
																							}
															res[0]=(media/16);
															for(int f=0;f<4;f++){
																							for(int c=0; c<4;c++){
																																desviacion= (desviacion+ ((m[f][c]-res[0])*(m[f][c]-res[0])));
																																}
																							}
															res[1]=(sqrt((desviacion/16)));
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
	
	float m[4][4]={ {1,1,1,1},{2,2,2,2},{3,3,3,3},{4,4,4,4}};
	float st[2];
	stats(m,st);
	assert( fabs( st[0]-2.5)<1e-3  && fabs(st[1]-1.11803)<1e-3);
	return 0;
}	


