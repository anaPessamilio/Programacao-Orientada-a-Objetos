#ifndef PAGAMENTO_H
#define PAGAMENTO_H

#include <iostream>
#include <string>

using namespace std;

class Pagamento {

public:
Pagamento(string forma = "XXXX", double valor = 0.0);
virtual ~Pagamento(){};

string getForma();
double getValor();
void setForma(string forma);
void setValor(double valor);
bool validaForma(string forma);

private:
string forma_;
double valor_;
};

#endif