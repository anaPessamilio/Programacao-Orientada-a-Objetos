#include "Credito.hpp"
#include "Data.h"
#include "LogEscrita.hpp"
#include "LogLeitura.hpp"
#include "Singleton.hpp"
#include <iostream>
#include <string>

using namespace std;

Credito::Credito(int parc) { this->Parcelas = parc; }

void Credito::setParcelas(int numero) {
  LogEscrita Escreveu(to_string(this->Parcelas), to_string(numero));
  Data agora;
  Escreveu.setUser(Singleton::get_instance().GetUser());
  Escreveu.setDataHora(agora.dateNow());
  Escreveu.setEntidade("Entidade: Credito");
  Escreveu.printLogEscrita();
  Singleton::get_instance().atualizaLogsEscrita(Escreveu);
  this->Parcelas = numero;
}

int Credito::getParcelas() {
  Data agora;
  LogLeitura Leu("Leu a parcelas do credito"); // Set da informação lida
  Leu.setUser(Singleton::get_instance().GetUser());
  Leu.setDataHora(agora.dateNow());
  Leu.setEntidade("Entidade: Credito");
  Leu.printLogLeitura();
  Singleton::get_instance().atualizaLogsLeitura(Leu);
  return this->Parcelas;
}