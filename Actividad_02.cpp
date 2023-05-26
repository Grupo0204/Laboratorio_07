#include <iostream>
#include <string>
using namespace std;

class Cliente{
    protected:
    string nombre;
    string direccion;
    string numTelefono;
    string numCuenta;
    double saldo;

    void EncriptarInformacion(){
        cout<<"Encriptando informacion del Cliente "<<nombre<<endl;
    }

    public:
    Cliente(string n, string d, string nT, string nC, double s){
        nombre = n;
        direccion = d;
        numTelefono = nT;
        numCuenta = nC;
        saldo = s;
        EncriptarInformacion();
    }
};
