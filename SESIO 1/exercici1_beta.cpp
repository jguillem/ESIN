#include <iostream>
#include "cj_enters_din.hpp"

using namespace std;

#include "cj_enters_din.hpp"

// Defineix un operador de sortida para cj_enters
ostream& operator<< (ostream& os, cj_enters& cj) {
  cj.print(os);
  return os;
}

// Defineix un operador d'entrada per cj_enters
istream& operator>> (istream& is, cj_enters& cj) {
  int n;
  do {
    is >> n;
    if (n != 0) {
      cj.insereix( n );
    }
  } while (n != 0);
  return is;
}

// Programa principal que demana un cj_enters (una sequencia 
// d'enters acabada en zero) i comprova si un enter donat pertany 
// o no a aquest conjunt.
int main () {
  cj_enters cj;
  cj.insereix(1);
  cj.insereix(2);
  //cj.insereix(3);
  cout << "Conjunt: ";
  cout << cj << endl;
  cout << "El cardinal es: " << cj.card() << endl;
  cout << "porra" << endl;
}