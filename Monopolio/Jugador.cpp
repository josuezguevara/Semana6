
#include "Jugador.h"
#include <string>
using namespace std;

Jugador::Jugador(){
  turno=0;
  dinero=1500;
}

void Jugador::setTurno(int pturno){
  turno=pturno;
}

int Jugador::getTurno(){
  return turno;
}

string Jugador::getPieza(){
  return pieza;
}

string Jugador::setPieza(string piezap){
  pieza=piezap;
}

void Jugador::agregarCasilla(Casillas* ca){
  casillas.push_back(ca);
}

double Jugador::getDinero(){
  return dinero;
}

double Jugador::recibirDinero(double pdinero){
  if (pdinero>0){
    dinero=dinero+pdinero;
  }
}

void Jugador::pagar(double pagar){
  if (pagar>0){
    dinero=dinero-pagar;
  }
  //this->dinero;
}
