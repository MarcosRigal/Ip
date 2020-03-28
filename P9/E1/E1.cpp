#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <iostream>
using namespace std;

void borra(){
	#ifdef _WIN32
		system("cls");
	#else
		system("clear");
	#endif
}

void pausa(){
	#ifdef _WIN32
		system("pause");
	#else
		std::cin.ignore(1024, '\n');
		std::cout<<"Presiona enter para continuar..."<<endl;
		std::cin.get();
	#endif
}

bool es_valida_opcion_menu(string opcion_menu){
	for(int i=0; i<opcion_menu.size(); i++){
		if(isdigit(opcion_menu[i])!=true){
			return false;
			}
	}
	int aux;
	aux=stoi(opcion_menu);
	if(aux<1 || aux>6){
			return false;
	}
	return true;
}

bool es_verdadero(string &DNI){
	if(DNI.size()!=9){return false;}
	for(int i=0; i<8; i++){
		if(isdigit(DNI[i])==false){return false;}
	}
	if(isdigit(DNI[8])==true){return false;}
	DNI[8]=toupper(DNI[8]);
	int numero=stoi(DNI);
	char letras[]="TRWAGMYFPDXBNJZSQVHLCKE";
	if(DNI[8]!=letras[numero%23]){return false;}
	return true;
}

bool iguales(string DNI1, string DNI2){
	for(int i=0; i<DNI2.size(); i++){
		if(DNI1[i] != DNI2[i]){return false;}
	}
	return true;
}

bool es_valida_edad(string edad){
	for(int i=0; i<edad.size(); i++){
		if(isdigit(edad[i])!=true){return false;}
	}
	int aux;
	aux=stoi(edad);
	if(aux<0){return false;}
	return true;
}

bool es_valida_nota(string nota){
	for(int i=0; i<nota.size(); i++){
		if(isdigit(nota[i])!=true){return false;}
	}
	int aux;
	aux=stoi(nota);
	if(aux<0 || aux >10){return false;}
	return true;
}

int main(int argc, char **argv){
	borra();
	string aux, opcion_menuaux, DNI, edad, nota,espacio=" ", buscar, reemplazar;
	int opcion_menu=0;
	if(argc !=2){
		cout<<"Error no se ha introducido el nombre del archivo"<<endl;
		return -1;
	}
	ofstream file;
	file.open(argv[1], ios::app);
	if(file.is_open()==false){
		cout<<"Error el fichero no se pudo abrir"<<endl;
		return -1;
	}
	if(file.is_open()==true){
		ifstream file;
		file.open(argv[1]);
		file >> aux;
		if(file.eof()==true){
			ofstream file;
			file.open(argv[1], ios::app);
			file<<"   DNI     Edad  Nota"<<endl;
		}
	}
	do{
		cout<<"Bienvenido a su base de datos de alumnos seleccione lo que desea hacer:"<<endl;
		do{
			cout<<"Pulse 1 para añadir un alumno."<<endl;
			cout<<"Pulse 2 para imprimir los datos de un alumno."<<endl;
			cout<<"Pulse 3 para imprimir los datos de todos los alumnos."<<endl;
			cout<<"Pulse 4 para modificar los datos de un alumno."<<endl;
			cout<<"Pulse 5 para eliminar los datos un alumno."<<endl;
			cout<<"Pulse 6 para salir."<<endl;
			cin>>opcion_menuaux;
			if(es_valida_opcion_menu(opcion_menuaux)!=true){
				borra();
				cout<<"Error introduzca un caracter de selección valido"<<endl;
			}
		}while(es_valida_opcion_menu(opcion_menuaux)!=true);
		opcion_menu=stoi(opcion_menuaux);
		switch(opcion_menu){
			case 1:{
				borra();
				ifstream file;
				file.open(argv[1]);
				cout<<"Introduzca el dni del alumno o pulse 0 para salir"<<endl;
				do{
					cin>>DNI;
					borra();
					if(es_verdadero(DNI)==false && DNI!="0"){cout<<"Error inserte un DNI valido o pulse 0 para salir"<<endl;}
				}while(es_verdadero(DNI)!=true && DNI!="0");
				if(DNI=="0"){
					borra();
					pausa();				
				}
				else{
					int i=-1;
					while(file.eof()==false && i<0){
						file >> aux;
						if(iguales(aux, DNI)==true){i++;}
					}
					if(i >=0){
						borra();
						cout<<"Error el DNI ya esta registrado en la base de datos"<<endl;
						pausa();
					}
					else{
						cout<<"Introduzca la edad del alumno"<<endl;
						do{
							cin>>edad;
							borra();
							if(es_valida_edad(edad)!=true){cout<<"Error introduzca una edad valida"<<endl;}
						}while(es_valida_edad(edad)!=true);
						borra();
						cout<<"Introduzca la nota del alumno"<<endl;
						do{
							cin>>nota;
							borra();
							if(es_valida_nota(nota)!=true){cout<<"Error inserte una nota valida entre 0 y 10"<<endl;}
						}while(es_valida_nota(nota)!=true);
						ofstream file;
						file.open(argv[1], ios::app);
						file<<DNI<<"   "<<edad<<"    "<<nota<<endl;
					}
				}	
			}break;
			case 2:{
				borra();
				ifstream file;
				file.open(argv[1]);				
				cout<<"Introduzca el dni del alumno del que desee imprimir sus datos o pulse 0 para salir"<<endl;
				do{
					cin>>DNI;
					borra();
					if(es_verdadero(DNI)==false && DNI!="0"){cout<<"Error inserte un DNI valido o pulse 0 para salir"<<endl;}
				}while(es_verdadero(DNI)!=true && DNI!="0");
				if(DNI=="0"){
					borra();
					pausa();				
				}
				else{
					int i=-1;
					while(file.eof()==false && i<0){
						file >> aux;
						if(iguales(aux, DNI)==true){i++;}
					}
					if(i>=0){
						int edad, nota;
						file>>edad>>nota;
						cout<<"Los datos del alumno son: DNI: "<<DNI<<" Edad: "<<edad<<" Nota: "<<nota<<endl;
						pausa();
					}
					else{
						cout<<"Error el alumno no se encuentra en la base de datos"<<endl;
						pausa();
					}
				}
			}break;
			case 3:{
				borra();
				ifstream file;
				file.open(argv[1]);	
				string linea;
				while(getline(file, linea)){
					cout<<linea<<endl;
				}
				pausa();
			}break;
			case 4:{
				int i=-1;
				borra();
				ifstream file;
				file.open(argv[1]);
				string linea;
				while(getline(file, linea)){
					cout<<linea<<endl;
				}
				cout<<"Introduzca el DNI del alumno que desea editar o pulse 0 para salir"<<endl;
				do{
					cin>>DNI;
					borra();
					if(es_verdadero(DNI)==false && DNI!="0"){
						cout<<"Error inserte un DNI valido o pulse 0 para salir"<<endl;
						ifstream file;
						file.open(argv[1]);
						string linea;
						while(getline(file, linea)){
						cout<<linea<<endl;
						}
					}
				}while(es_verdadero(DNI)!=true && DNI!="0");
				if(DNI=="0"){
					borra();
					pausa();				
				}
				else{
					ifstream file;
					file.open(argv[1]);
					while(file.eof()==false && i<0){
						file >> aux;
						if(iguales(aux, DNI)==true){
							i++;
						file>>edad>>nota;
						buscar=DNI+espacio+espacio+espacio+edad+espacio+espacio+espacio+espacio+nota;
						}
					}
					if(i<0){
						cout<<"Error el alumno no se encuentra en la base de datos"<<endl;
						pausa();
					}
					else{
						borra();
						cout<<"Introduzca la edad del alumno"<<endl;
						do{
							cin>>edad;
							borra();
							if(es_valida_edad(edad)!=true){cout<<"Error introduzca una edad valida"<<endl;}
						}while(es_valida_edad(edad)!=true);
						borra();
						cout<<"Introduzca la nota del alumno"<<endl;
						do{
							cin>>nota;
							borra();
							if(es_valida_nota(nota)!=true){cout<<"Error inserte una nota valida entre 0 y 10"<<endl;}
						}while(es_valida_nota(nota)!=true);
						reemplazar=DNI+espacio+espacio+espacio+edad+espacio+espacio+espacio+espacio+nota;
						string linea;
						ifstream fs(argv[1]);
						ofstream fstemp("temporal.txt");
						while(getline(fs, linea)){
							if(linea==buscar){
								linea = reemplazar;
							}					
							fstemp << linea<<endl;
						}
						fs.close();
						fstemp.close();
						ifstream fstamp("temporal.txt");
						ofstream fsa(argv[1]);
						while(getline(fstamp, linea)){
							fsa<<linea<<endl;
						}
						fsa.close();
						fstamp.close();
						remove("temporal.txt");
						pausa();
					}
				}
			}break;
			case 5:{
				int i=-1;
				borra();
				ifstream file;
				file.open(argv[1]);
				string linea;
				while(getline(file, linea)){
					cout<<linea<<endl;
				}
				cout<<"Introduzca el DNI del alumno que desea eliminar o pulse 0 para salir"<<endl;
				do{
					cin>>DNI;
					borra();
					if(es_verdadero(DNI)==false && DNI!="0"){
						cout<<"Error inserte un DNI valido o pulse 0 para salir"<<endl;
						ifstream file;
						file.open(argv[1]);
						string linea;
						while(getline(file, linea)){
						cout<<linea<<endl;
						}
					}
				}while(es_verdadero(DNI)!=true && DNI!="0");
				if(DNI=="0"){
					borra();
					pausa();				
				}
				else{
					ifstream file;
					file.open(argv[1]);
					while(file.eof()==false && i<0){
						file >> aux;
						if(iguales(aux, DNI)==true){
							i++;
						file>>edad>>nota;
						buscar=DNI+espacio+espacio+espacio+edad+espacio+espacio+espacio+espacio+nota;
						}
					}
					if(i<0){
						cout<<"Error el alumno no se encuentra en la base de datos"<<endl;
						pausa();
					}
					else{
						borra();
						string linea;
						int c=0;
						ifstream fs(argv[1]);
						ofstream fstemp("temporal.txt");
						while(getline(fs, linea)){
							if(linea==buscar){
								fs>>DNI>>edad>>nota;
								linea = DNI+espacio+espacio+espacio+edad+espacio+espacio+espacio+espacio+nota;
							}					
							fstemp << linea<<endl;
							c++;
						}
						fs.close();
						fstemp.close();
						ifstream fstamp("temporal.txt");
						ofstream fsa(argv[1]);
						int l=0;
						while(getline(fstamp, linea) && l<c-1){
							fsa<<linea<<endl;
							l++;
						}
						fsa.close();
						fstamp.close();
						remove("temporal.txt");
						pausa();
					}
				}
			}break;
		}
		borra();
	}while(opcion_menu!=6);
    pausa();
}

