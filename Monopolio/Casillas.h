#ifndef CASILLAS_H
#define CASILLAS_H
#include <string>
using namespace std;
class Casillas{
  protected:
    int posicion;
    string nombre;

  public:
    //nombre
    string getNombre();
    void setNombre(string);
    //posicion relativa
    int getPosicion();
    void setPosicion(int);
    //determinar si se puede comprar la Casilla
    //determinar el tipo de casilla en forma de un string
    /*Propiedad, Ferrocarril, Salida, Carcel, Impuestos, Arca, Casualidad, Libre, Servicio */
    virtual string getTipo()=0;//es un metodo abstracto
    //dueño
    //precio
};

#endif
