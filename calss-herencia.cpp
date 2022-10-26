/*
Ejercicio de programacion utilizando herencia multiple
Una floreria de nombre floropondio se dedica a la venta de regalos, cada regalo consta de lo siguiente; una flor y una carta
De la flor se necesita los siguientes datos; el nombre, la especie, y el color
La tarjeta debe tener un mensaje
Ademas del regalo se debe saber el precio, la direccion de envio, la fecha de envio, el emisor y el destinatario
crear un sistema en c++ utilizando herencia multiple que permita administrar lo solicidtado
*/

#include<iostream>
#include<string>
using namespace std;

void menu1();
class flor{
	public: //atributos
		string nombre;
		string especie;
		string color;
	public: //metodos
	void cargflor();
	void mostflor();
	flor();
		
};

class tarjeta{
	public:
		string mensaje;
	public:
		void cargarmensaje();
		void mostrarmensaje();
		tarjeta();
};

class regalo : public flor, public tarjeta{
	public:
		int precio;
		string direccion;
		string fechaenvio;
		string de;
		string para;
	public:
		void cargarregalo();
		void mostrarregalo();
		int buscarflor();
		regalo();
};


int main(){
	regalo objregalo;
	int op;
	system("color 0A");
	do{
		menu1();
		cin>>op;
		switch(op){
			case 1:
				objregalo.cargarregalo();
				objregalo.cargarmensaje();
				objregalo.cargflor();
				break;
			case 2:
				objregalo.mostrarregalo();
				objregalo.mostrarmensaje();
				objregalo.mostflor();
				break;
			case 3:
				if(objregalo.buscarflor()){
					objregalo.mostflor();
					objregalo.mostrarmensaje();
					objregalo.mostrarregalo();
				}
				else{
					cout<<"No existe"<<endl;
				}
				break;
		}
	cout<<endl<<endl;
	system("pause");
	system("cls");
	}while(op!=9);
	return 0;
}






//--------------------FLOR------------------------------------------	
flor::flor(){
	nombre="";
	especie="";
	color="";
}

void flor::mostflor(){
	cout<<"Nombre de flor: "<<nombre<<endl;
	cout<<"Especie: "<<especie<<endl;
	cout<<"Color: "<<color<<endl;
}

void flor::cargflor(){
	cout<<"\n\nIngrese dados de la flor: "<<endl;
	cout<<"Nombre: ";cin>>nombre;
	cout<<"Especie: ";cin>>especie;
	cout<<"Color: ";cin>>color;
}

//---------------------TARJETA---------------------------------------
tarjeta::tarjeta(){
	mensaje="";
}

void tarjeta::cargarmensaje(){
	cout<<"Ingrese el mensaje para la tarjeta: ";cin>>mensaje;
}
void tarjeta::mostrarmensaje(){
	cout<<"El mensaje ingresado es: "<<mensaje<<endl;
}
//------------REGALO-------------------------------------------
regalo::regalo(){
	precio=0;
	direccion="";
	fechaenvio="";
	de="";
	para="";
}
void regalo::cargarregalo(){
	cout<<"Ingrese el precio del regalo: ";cin>>precio;
	cout<<"Emisor: ";cin>>de;
	cout<<"Receptor: ";cin>>para;
	cout<<"Direccion de envio: ";cin>>direccion;
	cout<<"Fecha de envio: ";cin>>fechaenvio; 
}
void regalo::mostrarregalo(){
	cout<<"Precio del regalo: "<<precio<<endl;
	cout<<"Emisor: "<<de<<endl;
	cout<<"Receptor: "<<para<<endl;
	cout<<"Direccion de envio: "<<direccion<<endl;
	cout<<"Fecha de envio: "<<fechaenvio<<endl; 
}

int regalo::buscarflor(){
	string buscar;
	int bandera=0;
	cout<<"Buscar flor: "<<endl;cin>>buscar;
	if(buscar == nombre){
		bandera = 1;
		return bandera;
	}
	return bandera;
}

void menu1(){
	int op;
	cout<<"\t\t Floreria Foripondio\n\n";
	cout<<"1. Cargar regalo: "<<endl;
	cout<<"2. Mostrar regalo: "<<endl;
	cout<<"3. Buscar flor y ver datos: "<<endl;
	cout<<"9. Salir"<<endl;
	cout<<"\nIngrese una opcion: "<<endl;
}




