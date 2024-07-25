#include "LogLeitura.hpp"
#include <iostream>

using namespace std;

LogLeitura ::LogLeitura(string info) { info_ = info; }

string LogLeitura ::getInformacaoAcessada() { return info_; }

void LogLeitura ::setInformacaoAcessada(string info) { info_ = info; }

void LogLeitura ::printLogLeitura() {
  cout << "\n Log de leitura registrado \n";
  cout << "O usuario eh:";
  cout << this->getUser().getNome() << "\n";
  cout << this->getDataHoraStr() << "\n"
       << this->getEntidade() << "\n"
       << this->info_ << "\n";
}