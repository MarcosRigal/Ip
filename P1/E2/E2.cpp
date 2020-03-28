#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
			cout<< "Este programa convierte los grados en radianes. "<<endl;
			float grados,radianes;
			cout  <<"Introduzca los grados: "<<endl;
			cin >> grados;
			radianes = grados*(3.1415/180);
			cout <<"Equivale a: "<<radianes<<" radianes"<<endl;

    system("pause");
}

