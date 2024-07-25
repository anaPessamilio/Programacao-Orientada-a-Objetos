#ifndef CREDITO_H
#define CREDITO_H

#include <iostream>
#include <string>
#include "Pagamento.hpp"

using namespace std;

class Credito : public Pagamento {

public:
  Credito(int parc = 0);
  Credito();
  virtual ~Credito(){};
  void setParcelas(int numero);
  int getParcelas();

private:
  int Parcelas;
};

#endif // CREDITO_H_DEFINED