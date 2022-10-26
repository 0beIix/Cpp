#include<iostream>
/*
Una empresa aguatera, contiene un tanque de 500 litros, desea un sistema que le permita, ingresar el
contenido de agua en litros que no supere la capacidad del tanque, ademas debe administrar la posibilidad
de sacar litros de agua, y mostrar un resumen de la capacidad del tanque, la cantidad de agua suministrada,
y la cantidad de agua que se saco con el resto de agua que quedo en el tanque..
*/
using namespace std;
class tanque{
	public:
		int contenido;
		int capacidad;
		int sacar;
	public:
		void cargarcontenido();
		void cargarsacar();
		void mostrarcapacidad();
		void mostrarcontenido();
		void mostrarsacar();
		tanque(int a);
		tanque();
		~tanque();			
};

tanque::tanque(int a){
	capacidad = a;	
}

tanque::tanque(){
	cout<<"Bienvenido al sistema"<<endl<<endl;
}
void tanque::cargarcontenido(){
	cout<<"Ingrese el contenido: "; 
	cin>>contenido;
	while(capacidad < contenido ){
		cout<<"Ingrese el contenido no mayor a la capacidad "<<capacidad<<" :";
		cin>>contenido;		
	}
}

void tanque::cargarsacar(){
	cout<<"Total a sacar: ";
	cin>>sacar;
	while(contenido < sacar){
		cout<<"Ingrese total a sacar no mayor al contenido "<<contenido<<" :";
		cin>>sacar;
	}
}

void tanque::mostrarcapacidad(){
	cout<<"La capacidad = "<<capacidad<<" Lts"<<endl;
}

void tanque::mostrarcontenido(){
	cout<<"El contenido  = "<<contenido<<" Lts"<<endl;
}

void tanque::mostrarsacar(){
	cout<<"Total sacar = "<<sacar<<" Lts"<<endl;
	contenido = contenido - sacar;
	cout<<"Contenido NETO = "<<contenido<<" Lts"<<endl;
}

 tanque::~tanque(){
	cout<<"Gracias por utilizar el sistema";
}

int main(){
	system ("color 1b");
	int capacidad_aux;
	cout<<"Ingrese la capacidad total del tanque: ";
	cin>>capacidad_aux;
	tanque Objeto(capacidad_aux);
	Objeto.cargarcontenido();
	Objeto.cargarsacar();
	system("cls");
	Objeto.mostrarcapacidad();
	Objeto.mostrarcontenido();
	Objeto.mostrarsacar();
	return 0;
}
