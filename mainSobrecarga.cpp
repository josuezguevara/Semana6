#include "Integer.h"
#include <iostream>

using namespace std;

int main() {
  Integer entero(100);
  Integer entero2(100);
  cout << "El entero es: "<<entero+11.0<<endl;
  if (entero==entero2) {
    cout<<"Son iguales"<<endl;
  }
  /*int i=0;
  cout<<i++;*/
  //static cast
  cout<<static_cast<int>(entero)<<endl;
  return 0;
}
