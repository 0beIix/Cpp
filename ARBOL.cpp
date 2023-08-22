#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

struct Nodo{
	int dato;
	Nodo *der;
	Nodo *izq;
};
//PROTIPO DE FUNCIONES
void menu();
Nodo *crearNodo(int);
void insertarNodo(Nodo *&,int);
void mostrarArbol(Nodo *,int);


Nodo *arbol=NULL;
int main(){
	menu();
	getch();
	return 0;
}
//FUNCION MENU
void menu(){
	int dato, opcion=0;
	do{
		cout<<"\n.:MENU:.\n"<<endl;
		cout<<"1. Insertar nuevo Nodo: "<<endl;
		cout<<"2. Mostrar arbol completo"<<endl;
		cout<<"3. Salir"<<endl;
		cout<<"\nOpcion: "<<endl;
		cin>>opcion;
		switch(opcion){
			case 1: cout<<"\nDigite un numero: ";
					cin>>dato;
					insertarNodo(arbol,dato);
					cout<<"\n\n";
					system("pause");
					break;
			case 2: cout<<"\nMostrando el arbol completo"<<endl;
					mostrarArbol(arbol,dato);
					cout<<"\n\n";
					system("pause");
					break;
		}
		system("cls");
		
	}while(opcion!=3);
}
//FUNCION PARA CREAR NODO
Nodo *crearNodo(int n){
	Nodo *nuevo_nodo= new Nodo();
	nuevo_nodo->dato=n;
	nuevo_nodo->der=NULL;
	nuevo_nodo->izq=NULL;
	return nuevo_nodo;
}
//FUNCION PARA INSERTAR ELEMENTOS AL ARBOL
void insertarNodo(Nodo *&arbol,int n){
	if(arbol==NULL){
		Nodo *nuevo_nodo=crearNodo(n);
		arbol=nuevo_nodo;
	}else{
		int valorRaiz=arbol->dato;
		if(n<valorRaiz){
			insertarNodo(arbol->izq,n);
		}else{
			insertarNodo(arbol->der,n);
		}
	}
}
//FUNCION PARA MOSTRAR EL ARBOL
void mostrarArbol(Nodo *arbol, int cont){
	if(arbol==NULL){
		return;
	}else{
		mostrarArbol(arbol->der,cont+1);
		for(int i=0;i<cont;i++){
			cout<<"   ";
		}
		cout<<arbol->dato<<endl;
		mostrarArbol(arbol->izq,cont+1);
	}
}
