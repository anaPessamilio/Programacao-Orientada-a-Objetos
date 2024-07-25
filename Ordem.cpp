#include "Ordem.hpp"
#include <iostream>
#include <string>
#include "LogEscrita.hpp"
#include "LogLeitura.hpp"
#include "Singleton.hpp"
//#include "LogExcecao.hpp"

using namespace std;

Ordem::Ordem(Data data, Produto *produto) {

  produto_ = produto;
  data_ = data;
};

void Ordem::setData(Data data) {
  LogEscrita Escreveu(this->data_.getData(), data.getData());
  Data agora;
  Escreveu.setUser(Singleton::get_instance().GetUser());
  Escreveu.setDataHora(agora.dateNow());
  Escreveu.setEntidade("Entidade: Ordem");
  Escreveu.printLogEscrita();
  Singleton::get_instance().atualizaLogsEscrita(Escreveu);
  data.printData();
  data_ = data; 
  
  data_.printData();
}
void Ordem::setProduto(Produto *produto) {
  LogEscrita Escreveu(this->produto_->getnome(), produto->getnome());
  Data agora;
  Escreveu.setUser(Singleton::get_instance().GetUser());
  Escreveu.setDataHora(agora.dateNow());
  Escreveu.setEntidade("Entidade: Ordem");
  Escreveu.printLogEscrita();
  Singleton::get_instance().atualizaLogsEscrita(Escreveu);
  produto_ = produto;
}

void Ordem::getOrdem() {
  Data agora;
  LogLeitura Leu1("Leu a data da ordem"); // Set da informação lida
  Leu1.setUser(Singleton::get_instance().GetUser()); 
  Leu1.setDataHora(agora.dateNow());
  Leu1.setEntidade("Entidade: Ordem");
  Leu1.printLogLeitura(); 
  Singleton::get_instance().atualizaLogsLeitura(Leu1);
  
  LogLeitura Leu2("Leu o nome do produto da ordem"); // Set da informação lida
  Leu2.setUser(Singleton::get_instance().GetUser()); 
  Leu2.setDataHora(agora.dateNow());
  Leu2.setEntidade("Entidade: Ordem");
  Leu2.printLogLeitura(); 
  Singleton::get_instance().atualizaLogsLeitura(Leu2);
  
  data_.printData();
  produto_->getnome();
}
