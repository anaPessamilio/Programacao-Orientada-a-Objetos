#include "Cargo.hpp"
#include "LogEscrita.hpp"
#include "LogLeitura.hpp"
#include "Singleton.hpp"
//#include "LogExcecao.hpp"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>

using namespace std;

Cargo::Cargo(string nome, string atribuicao) {
  nome_ = nome;
  atribuicao_ = atribuicao;
}

// get
string Cargo::getNome() {
  // Um log deve conter: Usuário, Data e Hora do acesso (dateNow(), a entidade
  // que foi acessada (ex.: Cargo) Um log de leitura deve conter tudo do log
  // além da informação que foi lida
  Data agora;
  LogLeitura Leu("Leu o nome do cargo"); // Set da informação lida
  Leu.setUser(Singleton::get_instance().GetUser()); 
  Leu.setDataHora(agora.dateNow());
  Leu.setEntidade("Entidade: Cargo");
  Leu.printLogLeitura(); 
  Singleton::get_instance().atualizaLogsLeitura(Leu);
  return nome_;
}

string Cargo::getAtribuicao() {
  Data agora;
  LogLeitura Leu("Leu a atribuicao do cargo"); // Set da informação lida
  Leu.setUser(Singleton::get_instance().GetUser()); 
  Leu.setDataHora(agora.dateNow());
  Leu.setEntidade("Entidade: Cargo");
  Leu.printLogLeitura(); 
  Singleton::get_instance().atualizaLogsLeitura(Leu);
  return atribuicao_;
}

// set

void Cargo::setNome(string valnome) {
  LogEscrita Escreveu(this->nome_, valnome);
  Data agora;
  Escreveu.setUser(Singleton::get_instance().GetUser());
  Escreveu.setDataHora(agora.dateNow());
  Escreveu.setEntidade("Entidade: Cargo");
  Escreveu.printLogEscrita();
  Singleton::get_instance().atualizaLogsEscrita(Escreveu);
  nome_ = valnome;
}

void Cargo::setAtribuicao(string setatribuicao) {
  LogEscrita Escreveu(this->atribuicao_, setatribuicao);
  Data agora;
  Escreveu.setUser(Singleton::get_instance().GetUser());
  Escreveu.setDataHora(agora.dateNow());
  Escreveu.setEntidade("Entidade: Cargo");
  Escreveu.printLogEscrita();
  Singleton::get_instance().atualizaLogsEscrita(Escreveu);
  atribuicao_ = setatribuicao;
}
Cargo::~Cargo() {}

void Cargo::PrintCargo(Cargo *cargo) {
  // reajuste->GetData();
  cout << nome_ << " " << atribuicao_;
}
