#include <iostream>
using namespace std;
class Cliente
{
    private:
        int telefono;
        int dni;
    protected:
        string correo;
    public:
        string nombre;
        void EncriptarInformacion(){
        cout<<"Encriptando informacion del Cliente "<<nombre<<endl;
    }


};
class ClienteSeguro : public Cliente
{
    public:
        void Clientepublic()
        {
            cout<<"Nombre: "<<nombre<<endl;
        }
};
class ClienteSeguro1 : protected Cliente
{
    public:
        void Clienteprotected()
        {
            cout<<"Correo: "<<correo<<endl;
        }
};
class ClienteSeguro2 : private Cliente
{
    public:
        void Clienteprivated()
        {
            cout<<"DNI: "<< dni <<endl;
        }
};
int main()
{
    ClienteSeguro cliente1;
    cliente1.Clientepublic();
    ClienteSeguro1 cliente2;
    cliente2.Clienteprotected();
    ClienteSeguro2 cliente3;
    cliente3.Clienteprivated();
   
    return 0;
}
