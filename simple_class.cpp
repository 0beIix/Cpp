#include<iostream>
#include<string.h>
using namespace std;

class finanzas{
	public:
		int balance;
		int agregar;
		int sacar;
		int ci;
		int num_cuenta;
		string usuario, nombre;
	public:
		finanzas();
		void depositar();
		void extraer();
		void mostrar();
		void usuario();
};

finanzas::finanzas(){
	cout<<"Bienvenido al menu del cajero!!"<<endl;
}

void finanzas::usuario(){
	cout<<"Ingrese su nombre: "; cin<<nombre;
	cout<<"Ingrese su apellido: "; cin<<apellido;
	cout<<"Ingrese su CI: "; cin<<ci;
	cout<<"Ingrese su Nro. de Cuenta: "; cin<<num_cuenta;
}
void finanzas::depositar(){
	cout<<"Ingrese el monto a depositar";cin>>agregar;
	balance+=agregar;
}
void finanzas::sacar(){
	cout<<"Ingrese el monto a extraer";cin>>sacar;
	while(sacar>balance){
		cout<<"Insuficiente fondo"<<endl;
		cout<<"Vuelva a ingresar un monto: "; cin>>sacar;
	}
	balance-=sacar;
}
