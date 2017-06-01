#include "Tablero.h"
#include <fstream>
#include <iostream>
using namespace std;

Tablero::Tablero(){
  ifstream fileCasillas("Casillas.txt");

  if (fileCasillas.is_open()){
    for (int i = 0; i < 6; i++) {//leer las Casillas
      Casillas* casilla =new Casillas();
      fileCasillas>>*casilla;
      casillas.push_back(casilla);
    }
    fileCasillas.close();//cerrar archivo
  }else{
    cout<<"Error al leer archivo de casilla."<<endl;
  }
}

Casillas* Tablero::getCasilla(int pos){
  if (pos<0 && pos>casillas.size()-1){
    return NULL;
  }else{
    return casillas[pos];
  }
}

Tablero::~Tablero(){
  for (int i = 0; i < casillas.size(); i++) {
      delete casillas[i];
  }
  
}
