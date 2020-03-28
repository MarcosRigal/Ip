#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cassert>
using namespace std; 

void sum(float m[4][4], float m2 [4][4]){
																				for(int f=0; f<4;f++){
																															for(int c=0;c<4;c++){
																																											m[f][c]=m[f][c]+m2[f][c];
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
int test(){
	
	float m[4][4]={ {1,2,3,4},{1,2,3,4},{1,2,3,4},{1,2,3,4}};
	float m2[4][4]={ {1,2,3,4},{1,2,3,4},{1,2,3,4},{1,2,3,4}};	
	sum(m,m2);	
	for(int i=0;i<4;i++)
		for(int j=0;j<4;j++)
			assert( m[i][j]==2*m2[i][j]);
	return 0;
}	


