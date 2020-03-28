#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cassert>
#include <cmath>
using namespace std; 

void pausa(){
	#ifdef _WIN32
		system("pause");
	#else
		std::cin.ignore(1024, '\n');
		std::cout<<"Presione enter para salir"<<endl;
		std::cin.get();
	#endif
}

double integral(double (*func)(double), double init, double end){
	double sumatorio=0;
	for(int i=1; i<1000;i++){
		sumatorio=sumatorio+2*func(init+i*((end-init)/1000));
	}
	return (((end-init)/1000)/2)*(func(init)+sumatorio+func(end));
}

int test();//indica que la funcion test esta mas abajo
int main(){ 
		test();
		cout<<"Correcto"<<endl;
		pausa();
		return 0;
}
//funcion de test
double const_f(double x){return x;}

int test(){
	assert(fabs( integral(const_f,0,1)-0.5)<1e-2); 
	assert(fabs( integral(sin,0,1)-0.459656)<1e-2); 
	assert(fabs( integral(cos,0,1)-0.841394)<1e-2); 
	assert(fabs( integral(exp,0,2)-6.3891)<1e-2); 
	assert(fabs( integral(log,1,2)-0.38629)<1e-2);    
	return 0;
}	


