#include "Pagamento.hpp"
#include<string>
#include "Data.h"
#include "LogEscrita.hpp"
#include "LogLeitura.hpp"
#include "Singleton.hpp"
#include <iostream>

using namespace std;

Pagamento::Pagamento(string forma, double valor) {
  forma_ = forma;
  valor_ = valor;
}

string Pagamento::getForma() {
   Data agora;
    LogLeitura Leu("Leu o forma de Pagamento"); // Set da informação lida
    Leu.setUser(Singleton::get_instance().GetUser()); 
    Leu.setDataHora(agora.dateNow());
    Leu.setEntidade("Entidade: Pagamento");
    Leu.printLogLeitura(); 
    Singleton::get_instance().atualizaLogsLeitura(Leu); 
  return forma_;
}

double Pagamento::getValor() {
   Data agora;
    LogLeitura Leu("Leu o valor do Pagamento"); // Set da informação lida
    Leu.setUser(Singleton::get_instance().GetUser()); 
    Leu.setDataHora(agora.dateNow());
    Leu.setEntidade("Entidade:Pagamento");
    Leu.printLogLeitura(); 
    Singleton::get_instance().atualizaLogsLeitura(Leu); 
  return valor_;
}

void Pagamento::setForma(string forma) {
  if (validaForma(forma) == true) {
    LogEscrita Escreveu((this->forma_), (forma));
        Data agora;
        Escreveu.setUser(Singleton::get_instance().GetUser());
        Escreveu.setDataHora(agora.dateNow());
        Escreveu.setEntidade("Entidade: Pagamento");
        Escreveu.printLogEscrita();
        Singleton::get_instance().atualizaLogsEscrita(Escreveu);
    forma_ = forma;
  }
}

void Pagamento::setValor(double valor) {
  LogEscrita Escreveu(to_string(this->valor_), to_string(valor));
        Data agora;
        Escreveu.setUser(Singleton::get_instance().GetUser());
        Escreveu.setDataHora(agora.dateNow());
        Escreveu.setEntidade("Entidade: Pagamento");
        Escreveu.printLogEscrita();
        Singleton::get_instance().atualizaLogsEscrita(Escreveu);
  valor_ = valor;
}

bool Pagamento::validaForma(string forma) {
  if (forma.compare("Credito") == 0 || forma.compare("Boleto") == 0) {
    return true;
  } else {
    cout << "Forma de pagamento inválida" << endl;
    return false;
  }
}