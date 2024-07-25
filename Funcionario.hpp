#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include<iostream>
#include<string>
#include "Data.h"
#include<stdio.h>
#include<stdlib.h>

#include "Cargo.hpp"
#include "Contrato.hpp"

using namespace std;

class Funcionario {
private:
  string nome_;
  string cpf_;
  string endereco_;
  float enderecox_;
  float enderecoy_;
  string matricula_;
  Data datanasc_;
  string email_;
  
  Cargo *cargo_= NULL;
  Contrato *contrato_= NULL;
public:
//construtor//
Funcionario(string nome, string cpf , string endereco , string matricula , Data datanasc, string email, Cargo cargo, Contrato contrato);
Funcionario(){};
string getnome();
string getcpf();
string getendereco();
string getmatricula();
void getdatanasc();
string getemail();
float getenderecox();
float getenderecoy();

void setenderecox(float &x);
void setenderecoy(float &x);
void getcargo();
void getcontrato();
void setnome(string& nome);
void  setcpf(string& cpf);
void  setendereco(string& endereco);
void  setmatricula(string& matricula);
void  setdatanasc(Data& datanasc);
void  setemail(string&  email);

void  setcargo(Cargo& cargo);
void  setcontrato(Contrato& contrato);
void PrintFuncionario(Funcionario* funcionario);

};
#endif // FUNC_H_INCLUDED
