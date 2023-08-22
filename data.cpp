#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

struct nodo{
    int dato;
    nodo *izq;
    nodo *der;
};

//prototipos
nodo *crear(int);
nodo *arbol = NULL;
void in(nodo *&arbol, int);
void out();
void menu();

nodo *crear(int n){
    nodo *nuevo = new nodo();
    nuevo->dato = n;
    nuevo->der = NULL;
    nuevo->izq = NULL;
    return nuevo;
}


int main(){
    int age;
    menu();
    return 0; 
}

void in(nodo *&arbol,int n){
    if(arbol == NULL){
        nodo *nuevo = crear(n);
        arbol = nuevo;
    }else{
    int valorraiz = arbol->dato;
        if(n < valorraiz){
            in(arbol->izq,n);
        }else{
            in(arbol->der,n);
        }
    }

}

void menu(){
    int dato, opcion;
    do{
        cout<<"\t---MENU---\n";
        cout<<"1. Insertar nodo\n";
        cout<<"2. Salir\n";
        cin>>opcion;
        switch (opcion)
        {
        case 1: cout<<"\nDigite un numero: ";cin>>dato;
                in(arbol,dato);
                cout<<"\n";
                system("pause");
            break;
        
        default:
            break;
        }
        system("cls");
    }while(opcion != 2);
}

