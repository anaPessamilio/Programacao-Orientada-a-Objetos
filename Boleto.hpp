#ifndef BOLETO_H
#define BOLETO_H

#include <iostream>
#include <string>
#include "Pagamento.hpp"

using namespace std;

class Boleto : public Pagamento {

public:
  Boleto(int dias = 0);
  Boleto();
  virtual ~Boleto(){};
  void setDias(int numero);
  int getDias();

private:
  int Dias;
};

#endif // BOLETO_H_DEFINED