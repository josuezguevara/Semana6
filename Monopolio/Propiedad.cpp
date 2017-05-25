#include "Propiedad.h"
#include <string>
using namespace std;

string Propiedad::getTipo(){
  return "Propiedad";
}

double Propiedad::calcularRenta(double todos){
  return -1;
  //TODO: Implementar
}

void Propiedad::vender() {
  libre=false;
}
