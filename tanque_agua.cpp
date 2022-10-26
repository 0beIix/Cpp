#include<iostream>
using namespace std;

//capacidad del tanque 200
class tanque{
	public:
		int agua_total=0;
		int cont;
		int cap,cargado,sacado;
	public:
	tanque(int a);
	void cargar();
	void sacar();
	void mostrar();
	~tanque();
};

int main(){
	int cap_total=200;
	int run=0;
	tanque objeto(200);
	while(run==0){
		objeto.cargar();
		objeto.sacar();
		cout<<"otro ciclo? (0-si / 1-no) ";cin>>run;
	}
	objeto.mostrar();
	return 0;
}

//constructor 
tanque::tanque(int a){
	cap=a;
	cout<<"Bienvenido al sistema"<<endl;
}

void tanque::cargar(){
	int in_agua;
	cout<<"Inrese la cantidad de agua a ingresar: ";cin>>in_agua;
	while ((agua_total + in_agua ) >200){
		cout<<"Cantidad ingresada sobrepasa la capacidad del tanque"<<endl;
		cout<<"Ingrese otro valor: ";cin>>in_agua;
	}
	agua_total += in_agua;	
	cargado += in_agua;
}

void tanque::sacar(){
	int out_agua;
	cout<<"Inrese la cantidad de agua a sacar: ";cin>>out_agua;
	while ((agua_total - out_agua ) <0){
		cout<<"Cantidad ingresada sobrepasa la cantidad disponible (200)"<<endl;
		cout<<"Ingrese otro valor: ";cin>>out_agua;
	}
	agua_total -= out_agua;	
	sacado +=out_agua;
}

void tanque::mostrar(){
	cout<<"Cantidad maxima: 200"<<endl;
	cout<<"Cantidad actual: " << agua_total<<endl;
	cout<<"Cantidad ingresada: "<<cargado<<endl;
	cout<<"Cantidad sacada: "<<sacado<<endl;
}


tanque::~tanque(){
	cout<<"Gracias por usar el programa!!"<<endl;
}



