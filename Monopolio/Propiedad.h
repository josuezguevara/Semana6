#include "Casillas.h"
#include <string>
#include <iostream>
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

    //sobrecarga de operador >>
    /* nombre, color, precio,rentaNormal,rentaUnaCasa,...,rentaCuatroCasas,rentaHotel, precioCasa */
    friend istream& operator>>(istream& in,Propiedad& propiedad){
      char buffer[256];
      in.getline(buffer,256);
      propiedad.nombre=buffer;
      in>>propiedad.color;
      in>>propiedad.precio;
      in>>propiedad.rentaNormal;
      in>>propiedad.rentaTodas;
      in>>propiedad.rentaUnaCasa;
      in>>propiedad.rentaDosCasas;
      in>>propiedad.rentaTresCasas;
      in>>propiedad.rentaCuatroCasas;
      in>>propiedad.rentaHotel;
      in>>propiedad.precioCasa;
      in>>propiedad.precioHotel;

      return in;
    }

    //inicializa libre
    Propiedad();

    //retorna el tipo de casilla: Propiedad
    virtual string getTipo();
    /*calcular la renta en base  asi el
    jugador tiene todas las propiedades del mismo color
    y cantidad de casas y hoteles*/
    double calcularRenta(bool);
    //marca la propiedad como que tiene dueño
    void vender();
    double getPrecio();//T6 maso

    bool estaLibre();//T6 maso

    int getCasas();//T6 maso

    string getColor();//T6maso

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
        hoteles=1;
        casas=0;
        return true;
      }else{
        return false;
      }
    }

};

#endif
