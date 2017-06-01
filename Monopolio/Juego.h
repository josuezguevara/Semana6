#include "Tablero.h"
#include <vector>
#include <string>
#include <iostream>
#include "Jugador.h"

using namespace std;

#ifndef JUEGO_H
#define JUEGO_H
class Juego{
  private:
    Tablero* tablero;
    vector<Jugador*> jugadores;
    vector<int> posiciones;
    int turnoActual;

  public:
    Juego();
    ~Juego();

};
#endif
