#include <iostream>
#include <string>
using namespace std;


class Movil{
    protected:
    string marca;
    string modelo;
    string SO;
    public:
    Movil(string marca_, string modelo_, string SO_){
        marca = marca_;
        modelo = modelo_;
        SO = SO_;
        cout<<"Se ha creado un objeto movil"<<endl;
    }
    ~Movil(){
        cout<<"Se ha destruido un objeto movil"<<endl;
    }  
};


class Telefono : public Movil{
    private:
    string numTelefono;
    public:
    Telefono(string marca_, string modelo_, string SO_, string numTelefono) : Movil(marca_,modelo_,SO_),numTelefono(numTelefono){
        cout<<"Se ha creado un objeto telefono"<<endl;
    }
    ~Telefono(){
        cout<<"Se ha destruido un objeto telefono"<<endl;
    }
};


class Tablet : public Movil{
    private:
    string tamPantalla;
    public:
    Tablet(string marca_, string modelo_, string SO_, string tamPantalla) : Movil(marca_,modelo_,SO_),tamPantalla(tamPantalla){
        cout<<"Se ha creado un objeto tablet"<<endl;
    }
    ~Tablet(){
        cout<<"Se ha destruido un objeto tablet"<<endl;
    }
};


int main(){
    Telefono telefono("Apple","iPhone 12","iOS","959884172");


    Tablet tablet("Samsung","Galaxy Tab S7","Android","10.5 pulgadas");


    return 0;
}
