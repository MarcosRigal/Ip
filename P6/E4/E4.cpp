#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cassert>
using namespace std; 

void transpose(float m[4][4], float mt[4][4]){
																							for(int f=0; f<4;f++){
																																		for(int c=0;c<4;c++){
																																														mt[c][f]=m[f][c];
																																														}
																																		}
																							}

int test();//indica que la funcion test esta mas abajo
int main(){ 
		test();
		cout<<"Correcto"<<endl;
		system("pause");
		return 0;
}
//funcion de test
bool iguales(float m[4][4],float m2[4][4]){
		for(int i=0;i<4;i++)
			for(int j=0;j<4;j++)
				if (m[i][j]!=m2[i][j]) return false;
		return true;
}
int test(){
	
	float m[4][4]={ {1,2,3,4},{1,2,3,4},{1,2,3,4},{1,2,3,4}};
	float m2[4][4];
	float m3[4][4]={ {1,1,1,1},{2,2,2,2},{3,3,3,3},{4,4,4,4}};
	transpose(m,m2) ;
	assert(iguales(m2,m3));
	
	return 0;
}	

