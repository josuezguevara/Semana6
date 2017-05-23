#include "Integer.h"

using namespace std;

Integer::Integer(int entero){
 this->entero=entero;
}

Integer::Integer(){
  entero=9;
}

int Integer::getValue(){
  return entero;
}

void Integer::setValue(int valor) {
  entero=valor;
}
