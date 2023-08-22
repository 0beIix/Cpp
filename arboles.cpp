#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;

struct nodo
{
    int dato;
    nodo *der;
    nodo *izq;
};

nodo crearnodo(int);
nodo arbol = NULL;
void menu();
void insertar(nodo *&,int);
void mostrar();
void buscar();

nodo *crearnodo(int n){
    nodo *nuevo_nodo = new nodo();
    nuevo_nodo -> dato = n;
    nuevo_nodo -> der = NULL;
    nuevo_nodo -> izq = NULL;
    return nuevo_nodo;
}

int main(){
    menu();
}

nodo *crearnodo(int n){
    nodo nuevo_nodo = new nodo();
    nuevo_nodo -> dato = n;
    nuevo_nodo -> izq = NULL;
    nuevo_nodo -> der = NULL;
    return nuevo_nodo;
}

void insertarnodo(nodo *&arbol, int n){
    if(arbol = NULL){
        nodo nuevo_nodo = crearnodo(n);
        arbol = nuevo_nodo;
    }else{
        int valorRaiz = arbol->dato;
        if(n<valorRaiz){
            crearnodo(arbol->izq,n);
        }else{
            crearnodo(arbol->der,n);
        }
    }
}



void insertarnodo(nodo *&arbol, int n){
    if(arbol==NULL){
        nodo nodo_nuevo = crearnodo(n);
        arbol=nodo_nuevo;
    }else{
        int valorRaiz=arbol->dato;
        if(n<valorRaiz){
            crearnodo(arbol->izq,n);
        }else{
            crearnodo(arbol->der,n);
        }
    }
}

void mostrar(nodo *arbol, int cont){
    if(arbol==NULL){
        return;
    }else{
        mostrar(arbol->der,cont+1);
        for(i=0;i<cont;i++;){
            cout<<"    ";
        }
        cout<<arbol->dato<<endl;
        mostrar(arbol->izq,cont+1);
    }
}




