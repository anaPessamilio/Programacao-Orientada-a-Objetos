#include "Materiaprima.hpp"
#include <iostream>
#include <string>
#include "LogEscrita.hpp"
#include "LogLeitura.hpp"
#include "Singleton.hpp"
//#include "LogExcecao.hpp"

using namespace std;

Materiaprima::Materiaprima(double estoque, double estoquemin, string nome,
                           string unidade) {
  estoque_ = estoque;
  estoquemin_ = estoquemin;
  nome_ = nome;
  unidade_ = unidade;
};
void Materiaprima::setEstoque(double estoque) {
  if (validaEstoque(estoque) == true) {
    LogEscrita Escreveu(to_string(this->estoque_), to_string(estoque));
    Data agora;
    Escreveu.setUser(Singleton::get_instance().GetUser());
    Escreveu.setDataHora(agora.dateNow());
    Escreveu.setEntidade("Entidade: Materia Prima");
    Escreveu.printLogEscrita();
    Singleton::get_instance().atualizaLogsEscrita(Escreveu);
    estoque_ = estoque;
  }else{
    cout << "ERRO: Estoque estipulado e menor que o estoque minimo" << endl;
  }
}
void Materiaprima::setEstoquemin(double estoque) { 
  LogEscrita Escreveu(to_string(this->estoquemin_), to_string(estoque));
  Data agora;
  Escreveu.setUser(Singleton::get_instance().GetUser());
  Escreveu.setDataHora(agora.dateNow());
  Escreveu.setEntidade("Entidade: Materia Prima");
  Escreveu.printLogEscrita();
  Singleton::get_instance().atualizaLogsEscrita(Escreveu);  
  estoquemin_ = estoque; 
}
void Materiaprima::setNome(string nome) { 
  LogEscrita Escreveu(this->nome_, nome);
  Data agora;
  Escreveu.setUser(Singleton::get_instance().GetUser());
  Escreveu.setDataHora(agora.dateNow());
  Escreveu.setEntidade("Entidade: Materia Prima");
  Escreveu.printLogEscrita();
  Singleton::get_instance().atualizaLogsEscrita(Escreveu);
  nome_ = nome;
}
void Materiaprima::setUnidade(string nome) {
  LogEscrita Escreveu(this->unidade_, nome);
  Data agora;
  Escreveu.setUser(Singleton::get_instance().GetUser());
  Escreveu.setDataHora(agora.dateNow());
  Escreveu.setEntidade("Entidade: Materia Prima");
  Escreveu.printLogEscrita();
  Singleton::get_instance().atualizaLogsEscrita(Escreveu);
  unidade_ = nome;
}
double Materiaprima::getEstoque() {
  Data agora;
  LogLeitura Leu("Leu o estoque de materia prima"); // Set da informação lida
  Leu.setUser(Singleton::get_instance().GetUser()); 
  Leu.setDataHora(agora.dateNow());
  Leu.setEntidade("Entidade: Materia Prima");
  Leu.printLogLeitura(); 
  Singleton::get_instance().atualizaLogsLeitura(Leu);
  return estoque_;
}
double Materiaprima::getEstoquemin() {
  Data agora;
  LogLeitura Leu("Leu o estoque minimo de materia prima"); // Set da informação lida
  Leu.setUser(Singleton::get_instance().GetUser()); 
  Leu.setDataHora(agora.dateNow());
  Leu.setEntidade("Entidade: Materia Prima");
  Leu.printLogLeitura(); 
  Singleton::get_instance().atualizaLogsLeitura(Leu);
  return estoquemin_;
}
string Materiaprima::getNome() {
  Data agora;
  LogLeitura Leu("Leu o nome da materia prima"); // Set da informação lida
  Leu.setUser(Singleton::get_instance().GetUser()); 
  Leu.setDataHora(agora.dateNow());
  Leu.setEntidade("Entidade: Materia Prima");
  Leu.printLogLeitura(); 
  Singleton::get_instance().atualizaLogsLeitura(Leu);
  return nome_;
}
string Materiaprima::getUnidade() {
  Data agora;
  LogLeitura Leu("Leu a unidade de medida da materia prima"); // Set da informação lida
  Leu.setUser(Singleton::get_instance().GetUser()); 
  Leu.setDataHora(agora.dateNow());
  Leu.setEntidade("Entidade: Materia Prima");
  Leu.printLogLeitura(); 
  Singleton::get_instance().atualizaLogsLeitura(Leu);
  return unidade_;
}
void Materiaprima::atualizaEstoque(double quantidade) {
  double qnt = estoque_ - quantidade;
  if (validaEstoque(qnt) == true) {
    estoque_ = qnt;
  }else{
    cout << "ORDEM DE COMPRA DEVE SER GERADA: Estoque atual menor que estoque minimo" << endl;

    //gerar ordem de compra matéria prima
  }
}
bool Materiaprima::validaEstoque(double estoqueProposto) {
  if (estoqueProposto > estoquemin_) {
    return true;
  } else {    
    return false;
  }
}