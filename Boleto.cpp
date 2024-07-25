#include <iostream>
#include<string>
#include "Boleto.hpp"
#include "LogEscrita.hpp"
#include "LogLeitura.hpp"
#include "Singleton.hpp"
#include "Data.h"

using namespace std;

Boleto::Boleto(int dias){
  this->Dias = dias;
}

void Boleto::setDias(int numero){
  LogEscrita Escreveu(to_string(this->Dias), to_string(numero));
        Data agora;
        Escreveu.setUser(Singleton::get_instance().GetUser());
        Escreveu.setDataHora(agora.dateNow());
        Escreveu.setEntidade("Entidade: Boleto");
        Escreveu.printLogEscrita();
        Singleton::get_instance().atualizaLogsEscrita(Escreveu);
  this->Dias = numero;
}

int Boleto::getDias(){
 Data agora;
        LogLeitura Leu("Leu a dias do Boleto"); // Set da informação lida
        Leu.setUser(Singleton::get_instance().GetUser()); 
        Leu.setDataHora(agora.dateNow());
        Leu.setEntidade("Entidade: Boleto");
        Leu.printLogLeitura(); 
        Singleton::get_instance().atualizaLogsLeitura(Leu); 
  return this->Dias;
}