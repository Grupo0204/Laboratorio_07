//crear la clase coordenadas y la clase herencia lugares 
//agregar 10 puntos para realizar una busqueda
//en este ejercicio implementar una metodo buscar ,agregar y mostrar el lugar
#include <iostream>
using namespace std;
class Coordenadas{
private:
    float x,y;
public:
    void agregarCoordenada(float x,float y){
        this->x = x;
        this ->y = y;
    }
    float getx(){return x;}
    float gety(){return y;}
    virtual void mostrar(){
        cout<<"x: "<<x<<endl;
        cout<<"y: "<<y<<endl;
    }
    
};

class  Lugares : public Coordenadas
{
private:
    string direccion;
public:
    void setDireccion(string direccion){this ->direccion = direccion;}
    string getDireccion(){return direccion;}
    void imprimir(){
        Coordenadas ::mostrar();
        cout <<"direccion: "<<direccion<<endl;
    }
};

class Llamadas{
private:
    Lugares* ubicacion[10];
    int cont;
public:
    void agregarCord(Lugares* lugar){
        if (cont < 10){
            ubicacion[cont] = lugar ;
            cont++;
        }
    }
    void buscarCoord(float x, float y){
        for (int i = 0; i < cont; i++)
        {
            if (ubicacion[i]->getx() == x && ubicacion[i]->gety() == y)
            {
                cout <<"La coordenada si se encuentra"<<endl
                <<"Es:"<< ubicacion[i]->getDireccion()<<endl;
            }
            
        }
        
    }

};

int main(){
    Llamadas llamada;
    Lugares lugar;
    string d,buscar;
    int opc;
    float x, y,a,b;
    do
    {
        cout << "--Menu--"<<endl;
        cout <<" 1. Ingresar coordenada"<<endl;
        cout <<" 2. Buscar"<<endl;
        cout <<" 3. Listar"<<endl;
        cout <<" 4. salir"<<endl;
        cout << "Ingrese una opcion: ";
        cin >> opc;
        switch (opc)
        {
        case 1:cout << "Ingrese x: ";
                cin >> x;
                cout << "Ingrese y: ";
                cin >> y;
                cout << "Ingrese el nombre de la callle, Av: ";
                cin.ignore(); 
                getline(cin,d);
                lugar.agregarCoordenada(x,y);
                lugar.setDireccion(d);
                llamada.agregarCord(&lugar);
            break;
        case 2:cout << "Deseea buscar: ";
                cin >> buscar;
                if (buscar == "si"){
                    cout << "Ingrese x: ";
                    cin >> a;
                    cout << "Ingrese y: ";
                    cin >> b;
                    llamada.buscarCoord(x,y);
                }
            break;
        case 3: lugar.imprimir();
        break;
        case 4: cout << "Fin del programa...";
            break;
        default: cout << "opcion no encontrada";
        }
    } while (opc != 4);

}