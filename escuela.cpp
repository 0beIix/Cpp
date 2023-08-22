/*Utilizando herencia disenhar un programa que permita administrar una escuela, donde se administre a los alumnos y los profesores
para el efecto se debe contemplar una clase PERSONA que contenga los datos basicos como ser: nombre, apellido, direccion, y los
 metodos correspondientes de cargardatos y mostrar datos.
La clase alumno contepla la matricula y la carrera y los metodos de cargaralumno, y mostrar alumno.
La case profesor contempla el dato de nrohabilitacion, y nivel con sus metodos  cargarprof, mostrarprof, cargarnivel ,mostrarnivel
Disenhar un menu interactivo de la siguietne manera
1. Cargar Alumno
2. Cargar Profesor
3. Ver Alumnos
4. Ver Profesores
5. Cantidad de Docentes del Nivel
9. INGRESE OPERACION: 
OBSERVACION: LA ESCUELA PERMITE SOLAMENTE LA CARGA DE 3 ALUMNOS Y 3 PROFESORES*/

#include<iostream>
#include<string>
using namespace std;

class persona : public alumno, public prof{
    public:
    string nombre;
    string apellido;
    string direccion;
    public:
    void cdatos();
    void mdatos();
};
class alumno{
    public: //attributos
    string matricula;
    string carrera;
    void calumno();
    void malumno();
};
class prof{
    public:
    int nrhab;
    int nivel;
    void cprof();
    void mprof();
};

int main(){
    persona p;
    int op;
    do{
        cout<<"1. Cargar Alumno"<<endl;
        cout<<"2. Cargar Profesor"<<endl;
        cout<<"3. Ver Alumnos"<<endl;
        cout<<"4. Ver Profesores"<<endl;
        cout<<"5. Cantidad de Docentes del Nivel"<<endl;
        cout<<"9. INGRESE OPERACION: "<<endl; cin>>op;

        switch(op){
            case 1:
                p.cdatos();
                p.calumno();
                break;
            case 2:
                p.cdatos();
                p.cprof();
                break;
            case 3:
                p.mdatos();
                p.malumno();
        }

    }while(op!=9);

}

//----------------  presona  -------------------------------------------

void persona::cdatos(){
    cout<<"Nombre: ";getline(cin,nombre);
    cout<<"Apellido: ";getline(cin,apellido);
    cout<<"Direccion: ";cin,ignore();getline(cin,direccion);
}

void persona::mdatos(){
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Apellido: "<<apellido<<endl;
    cout<<"Direccion: "<<direccion<<endl;
}

//-------------------  alumno  ----------------------------------------------

void alumno::calumno(){
    cout<<"Matricula: ";getline(cin,matricula);
    cout<<"Carrera: ";getline(cin,carrera);
}

void alumno::malumno(){
    cout<<"Matricula: "<<matricula<<endl;
    cout<<"Carrera: "<<carrera<<endl;
}

//-------------------  prof  -------------------------------------------------

void prof::cprof(){
    cout<<"Numero habilitacion: ";cin>>nrhab;
    cout<<"Nivel: ";getline(cin,nivel);
}

void prof::mprof(){
    cout<<"Numero habilitacion: "<<nrhab<<endl;
    cout<<"Nivel: "<<nivel<<endl;
}