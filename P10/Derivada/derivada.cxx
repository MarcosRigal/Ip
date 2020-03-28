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
		std::cout<<"Presiona enter para salir..."<<endl;
		std::cin.get();
	#endif
}

double derivada( double(*func)(double),double x){
	return ((func(x+0.0000001)-func(x-0.0000001))/(2*0.0000001));
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
double f2(double x){return x*x+sin(x);}
double f3(double x){return x*sin(x)+x*x*log(x);}

int test(){
	assert( fabs( derivada(const_f,0)-1)<1e-3) ; 
	assert( fabs( derivada(sin,M_PI)-cos(M_PI))<1e-3) ; 
	assert( fabs( derivada(sin,M_PI/2)-cos(M_PI/2))<1e-3); 
	assert( fabs( derivada(cos,M_PI/2)+sin(M_PI/2))<1e-3); 
	assert( fabs( derivada(cos,M_PI/5)+sin(M_PI/5))<1e-3); 
	assert( fabs( derivada(f3,3)- ( 3+6*log(3)+sin(3)+3*cos(3) ) )<1e-3); 
	return 0;
}	

