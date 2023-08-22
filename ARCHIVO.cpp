/*
Ejercicio sobre archivos, realizar un programa que pida al usuario el nombre de un
archivo de texto y que permita almacenar frases
*/
#include<iostream>
#include<stdlib.h>
#include<fstream>

using namespace std;
//protipar funciones
void escribirFrases();

int main(){
	 escribirFrases();
	 system("pause");
	 return 0;
	
}

void escribirFrases(){
		ofstream archivo;
		string nombreArchivo, frase;
		char rpt;
		
		cout<<"Digite el nombre del archivo: ";
		getline(cin, nombreArchivo);
		
		archivo.open(nombreArchivo.c_str(),ios::out);//Creamos el archivo
		
		if(archivo.fail()){ //Si ha ocurrido algun error
			cout<<"No se pudo abrir el archivo";
			exit(1);
		}
		do{
			fflush(stdin);
			cout<<"Digite una frase: ";
			getline(cin, frase);
			archivo<<frase<<endl;
			
			cout<<"\nDesea agregar otra frase (S/N): ";
			cin>>rpt;
			
		}while((rpt == 'S') || (rpt == 's'));
		
		archivo.close();// Cerremos el archivo
}










