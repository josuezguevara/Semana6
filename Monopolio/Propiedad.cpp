#include "Propiedad.h"
#include <string>
using namespace std;

Propiedad::Propiedad(){
  libre=true;
  casas=0;
  hoteles=0;
}

string Propiedad::getTipo(){
  return "Propiedad";
}

double Propiedad::calcularRenta(bool todasColor){
  double retval=0;
  //TODO: Implementar
  if (todasColor){//si tiene todas las propiedades del mismo color
    retval=rentaTodas;
    //validar si tiene casas y hoteles
    switch (casas) {
      case 1:
        retval=rentaUnaCasa;
      break;
      case 2:
        retval=rentaDosCasas;
      break;
      case 3:
        retval=rentaTresCasas;
      break;
      case 4:
        retval=rentaCuatroCasas;
      break;
    }//fin swtich casas

    //renta si tiene hotel
    if (hoteles=1){
      retval=rentaHotel;
    }

    //retorna renta
    return retval;
  }else{
    retval=rentaNormal;
    return retval;
  }//if todas misma color
}

void Propiedad::vender() {
  libre=false;
}

double Propiedad::getPrecio(){
  return precio;
}

bool Propiedad::estaLibre(){
  return true;
}

int Propiedad::getCasas(){
  return casas;
}

string Propiedad::getColor(){
  return color;
}
