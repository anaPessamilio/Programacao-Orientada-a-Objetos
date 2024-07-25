#ifndef TURNO_H
#define TURNO_H
#include <iostream>
#include "Data.h"

#include "LogEscrita.hpp"
#include "LogLeitura.hpp"

using namespace std;

class Turno{
    private: 
      Data inicio_;
      Data fim_;
      string periodo_;
    public:
      Turno(Data inicio, Data fim, string periodo);

Turno(){};
virtual ~Turno();

  void SetInicio(Data& data);

  void SetFim(Data& data);

  void SetPeriodo(string& periodo);

  Data GetInicio();

  Data GetFim();

  string GetPeriodo();
};

#endif
