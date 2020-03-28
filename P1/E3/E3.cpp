#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;
int main(){
			cout <<"Este programa calcula la raiz cuadrada de un numero dado."<<endl;
			int numero;
			float raiz;
			cout <<"Inserte numero para calcular su raiz cuadrada: "<<endl;
			cin  >> numero;
			if(numero  >=0){
										raiz = sqrt(numero);
										cout<< "El resultado de la raiz cuadrada de "<<numero<<" es: "<<raiz<<endl;
										}
			else{
					cout <<"Error no se puede calcular la raiz de un numero negativo"<<endl;
					}
							
    system("pause");
}

