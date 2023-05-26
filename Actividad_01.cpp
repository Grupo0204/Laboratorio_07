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
    public:
    Cliente(string n, string d, string nT, string nC, double s){
        nombre = n;
        direccion = d;
        numTelefono = nT;
        numCuenta = nC;
        saldo = s;
    }
};
class ClienteSeguro : public Cliente{
    public:
    ClienteSeguro(string n, string d, string nT, string nC, double s) : Cliente(n,d,nT,nC,s){
        nombre = n;
        direccion = d;
        numTelefono = nT;
        numCuenta = nC;
        saldo = s;
    }
};
