#include <string>
#include <vector>
#include "Casillas.h"
#include <iostream>
#include <fstream>

using namespace std;
#ifndef JUGADOR_H
#define JUGADOR_H

class Jugador{
  private:
    string pieza;
    vector <Casillas*> casillas;
    double dinero;
    int turno;

  public:
    Jugador();//inicializar el dinero
    void setTurno(int);//T6
    int getTurno();//T6
    string getPieza();//T6
    string setPieza(string);//T6
    void agregarCasilla(Casillas*);//T6 con un push back
    vector <Casillas*>& getCasillas();
    double getDinero();//T6
    double recibirDinero(double);//T6
    void pagar(double);//T6
    friend istream& operator>>(istream& in, Jugador& jugador){
      in>>jugador.pieza;
      in>>jugador.dinero;
      in>>jugador.turno;
      return in;
    }

};

#endif
