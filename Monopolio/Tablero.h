#include <vector>
#include <iostream>
#include "Casillas.h"
#ifndef TABLERO_H
#define TABLERO_H

using namespace std;

class Tablero{

  private:
    vector<Casillas*>  casillas;

  public:
    Casillas* getCasilla(int);
    Tablero();
    ~Tablero();

};
#endif
