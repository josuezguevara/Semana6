#include "Casillas.h"
#include <string>
#ifndef PROPIEDAD_H
#define PROPIEDAD_H

class Propiedad: public Casillas{
  private:
    bool libre; //indica si la casilla no tiene dueño

    double precio;//informacion para venderla
    //informacion para calcular renta
    int casas, hoteles;
    double rentaNormal;
    double rentaTodas;
    double rentaUnaCasa;
    double rentaDosCasas;
    double rentaTresCasas;
    double rentaCuatroCasas;
    double rentaHotel;
    double precioCasa;
    double precioHotel;//end: informacion calcular renta

    string color;//color de la propiedad

  public:
    //inicializa libre
    Propiedad();

    //retorna el tipo de casilla: Propiedad
    virtual string getTipo();
    /*calcular la renta en base  asi el
    jugador tiene todas las propiedades del mismo color
    y cantidad de casas y hoteles*/
    double calcularRenta(double);
    //marca la propiedad como que tiene dueño
    void vender();
    double getPrecio();

    bool libre();

    int getCasas();

    string getColor();

    //implementaciones inline
    bool agregarCasa(){
      if (casas<4){
        casas++;
        return true;
      }else{
        return false;
      }
    }
    bool agregarHotel(){
      if (casas=4){
        hotel=1;
        casas=0;
        return true;
      }else{
        return false;
      }
    }

};

#endif
