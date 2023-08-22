#include<iostream>
#include<string>
using namespace std;


class alumno{
    public: //attributos
    string matricula;
    string carrera;
    public:
    alumno();
    void calumno();
    void malumno();
};
class prof{
    public:
    int nrhab;
    string nivel;
    prof();
    void cprof();
    void mprof();
};

class persona : public alumno, public prof{
    public:
    string nombre;
    string apellido;
    string direccion;
    int a=0;
    int pr=0;
    public:
    persona();
    void cdatos();
    void mdatos();
    void talumnos();
    void mtalum();
    void tprof();
    void mtprof();
};

int main(){
    persona p;
    system("color 0A");
    int op;
    do{
    	cout<<"\tSistema Escolar\n\n";
        cout<<"1. Cargar Alumno"<<endl;
        cout<<"2. Cargar Profesor"<<endl;
        cout<<"3. Ver Alumnos"<<endl;
        cout<<"4. Ver Profesores"<<endl;
        cout<<"5. Cantidad de Docentes del Nivel"<<endl;
        cout<<"9. INGRESE OPERACION: "; cin>>op;

        switch(op){
            case 1:
                p.cdatos();
                p.calumno();
                p.talumnos();
                break;
            case 2:
                p.cdatos();
                p.cprof();
                p.tprof();
                break;
            case 3:
                p.mtalum();
                break;
            case 4:
            	p.mtprof();
            	break;
            case 5:
            	p.mtalum();
            	p.mtprof();
            	break;	
        }
    system("pause");
    system("cls");

    }while(op!=9);

}

//----------------  presona  -------------------------------------------
persona::persona(){
	nombre="";
	apellido="";
	direccion="";
}

void persona::cdatos(){
    cout<<"Nombre: ";cin.ignore();getline(cin,nombre);
    cout<<"Apellido: ";cin.ignore();getline(cin,apellido);
    cout<<"Direccion: ";cin.ignore();getline(cin,direccion);
}

void persona::mdatos(){
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Apellido: "<<apellido<<endl;
    cout<<"Direccion: "<<direccion<<endl;
}

void persona::talumnos(){
	
	string anom[2];
	string aap[2];
	string adir[2];
	int amat[2];
	string acar[2];
	
	string anom[a]=nombre;
	string aap[a]=apellido;
	string adir[a]=direccion;
	int amat[a]=matricula;
	string acar[a]=carrera;
	a++;
}
void persona::mtalum(){
	for(c=0;c<3;c++){
       	cout<<anom[c]<<endl;
       	cout<<aap[c]<<endl;
       	cout<<adir[c]<<endl;
       	cout<<amat[c]<<endl;
       	cout<<acar[c]<<endl;
	}
}
void persona::tprof(){
	string nom[2];
	string ap[2];
	string dir[2];
	int mat[2];
	string car[2];
	string nom[pr]=nombre;
	string ap[pr]=apellido;
	string dir[pr]=direccion;
	int mat[pr]=matricula;
	string car[pr]=carrera;
	pr++;
}
void persona::mtprof(){
	for(c=0;c<3;c++){
       	cout<<nom[c]<<endl;
       	cout<<ap[c]<<endl;
       	cout<<dir[c]<<endl;
       	cout<<mat[c]<<endl;
       	cout<<car[c]<<endl;
	}
}

//-------------------  alumno  ----------------------------------------------
alumno::alumno(){
	matricula="";
	carrera="";
}

void alumno::calumno(){
    cout<<"Matricula: ";cin.ignore();getline(cin,matricula);
    cout<<"Carrera: ";cin.ignore();getline(cin,carrera);
}

void alumno::malumno(){
    cout<<"Matricula: "<<matricula<<endl;
    cout<<"Carrera: "<<carrera<<endl;
}

//-------------------  prof  -------------------------------------------------
prof::prof(){
	nrhab=0;
	nivel="";
}

void prof::cprof(){
    cout<<"Numero habilitacion: ";cin>>nrhab;
    cout<<"Nivel: ";cin.ignore();getline(cin,nivel);
}

void prof::mprof(){
    cout<<"Numero habilitacion: "<<nrhab<<endl;
    cout<<"Nivel: "<<nivel<<endl;
}






