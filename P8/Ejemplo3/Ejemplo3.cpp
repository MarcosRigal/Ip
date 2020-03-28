#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

struct Point2d{
						float x=0, y=0;
						};

void print(Point2d p){
									cout<<p.x<<" "<<p.y<<endl;
									}
void printAll(Point2d vec[], int n){
													for(int i=0; i<n; i++){
																						cout<<vec[i].x<<" "<<vec[i].y<<endl;
																						}
													}

int main(){
				Point2d v[10];
				for(int i=0; i<10; i++){
													v[i].x=i;
													v[i].y=(i+1)*2;
													}
				for(int i=0; i<10; i++){
													print(v[i]);
													}
				printAll(v, 10);				
    system("pause");
}

