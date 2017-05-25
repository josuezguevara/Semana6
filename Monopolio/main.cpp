#include "Casillas.h"
#include "Propiedad.h"
#include <iostream>

using namespace std;

int main() {
    Casillas* c= new Propiedad();

    c->vender();

    delete c;
  return 0;
}
