
#include <iostream>
#include <conio.h>
using namespace std;

class oper{
    public:
    int v1;
    int v2;
    int resultado;
    public:
    void cargar1();
    void cargar2();
    void mostrar();
};



class suma : public oper{
    public:
    void operar();
};

void suma::operar(){
    resultado=v1+v2;
}

class resta : public oper{
    public:
    void operar();
};

void resta::operar(){
    resultado=v1-v2;
}

void oper::cargar1(){
    cout<<"ingrese valor 1: "<<endl;cin>>v1;
}
void oper::cargar2(){
    cout<<"ingrese valor 2: "<<endl;cin>>v2;
}
void oper::mostrar(){
    int x;
    cout<<resultado<<endl;
    cin>>x;
    
    system("clear");
}

int main()
{
    suma suma1;
    resta resta1;
    int op;
//    system("color 0A");
    
    do{
        cout<<"\t\tMenu"<<endl;
        cout<<"1. Sumar "<<endl;
        cout<<"2. Restar "<<endl;
        cout<<"9. Salir "<<endl;
        cout<<"Ingrese una opcion: ";cin>>op;
    
        switch(op){
            case 1: 
                suma1.cargar1();
                suma1.cargar2();
                suma1.operar();
                cout<<"La suma de los dos valores es: ";
                suma1.mostrar();
                break;
            case 2:
                resta1.cargar1();
                resta1.cargar2();
                resta1.operar();
                cout<<"La resta de los dos valores es: ";
                resta1.mostrar();
                break;
        }
        cout<<endl<<endl;
        system("pause");system("cls");
    }while(op!=9);
    cout<<"Ha salido del sistema";
    return 0;
}
