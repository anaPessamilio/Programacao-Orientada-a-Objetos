#include "Cliente.hpp"
#include <cstddef>
#include <iostream>
#include <math.h>
#include <string.h>
#include <string>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include "LogLeitura.hpp"
#include "LogLeitura.hpp"
//#include "LogExcecao.hpp"
#include "Singleton.hpp"

using namespace std;

//Construtor
Cliente::Cliente(string nome, string tipo, char CPF[], char CNPJ[], string telefone, string email)
{
  this->nome = nome;
  this->tipo = tipo;
  if(this->tipo == "Pessoa Fisica"){
    if(validarCPF(CPF)){           
    this->CPF = CPF;
    this->CNPJ = "XXXXXXXX0001XX";
    }
  } else if(this->tipo == "Pessoa Juridica"){
    if(validarCNPJ(CNPJ)){   
      this->CNPJ = CNPJ;
      this->CPF = "XXXXXXXXXXX";
    }
  }
  this->telefone = telefone;
  this->email = email;
}


 // MÉTODOS GET
  string Cliente::getNome(){
    Data agora;
    LogLeitura Leu("Leu o nome do cliente");       // Set da informação lida
    Leu.setUser(Singleton::get_instance().GetUser()); 
    Leu.setDataHora(agora.dateNow());
    Leu.setEntidade("Entidade: Cliente");
    Leu.printLogLeitura(); 
    Singleton::get_instance().atualizaLogsLeitura(Leu);
    return nome;
  }
  string Cliente::getTipo(){
    Data agora;
    LogLeitura Leu("Leu o tipo do cliente");       // Set da informação lida
    Leu.setUser(Singleton::get_instance().GetUser()); 
    Leu.setDataHora(agora.dateNow());
    Leu.setEntidade("Entidade: Cliente");
    Leu.printLogLeitura(); 
    Singleton::get_instance().atualizaLogsLeitura(Leu);
    return tipo;
    }
  char* Cliente::getCPF(){
    Data agora;
    LogLeitura Leu("Leu o CPF do cliente");       // Set da informação lida
    Leu.setUser(Singleton::get_instance().GetUser()); 
    Leu.setDataHora(agora.dateNow());
    Leu.setEntidade("Entidade: Cliente");
    Leu.printLogLeitura(); 
    Singleton::get_instance().atualizaLogsLeitura(Leu);
    return CPF;
  }
  char* Cliente::getCNPJ(){
    Data agora;
    LogLeitura Leu("Leu o CNPJ do cliente");       // Set da informação lida
    Leu.setUser(Singleton::get_instance().GetUser()); 
    Leu.setDataHora(agora.dateNow());
    Leu.setEntidade("Entidade: Cliente");
    Leu.printLogLeitura(); 
    Singleton::get_instance().atualizaLogsLeitura(Leu);
    return CNPJ;
  }
  string Cliente::getTelefone(){
    Data agora;
    LogLeitura Leu("Leu o telefone do cliente");       // Set da informação lida
    Leu.setUser(Singleton::get_instance().GetUser()); 
    Leu.setDataHora(agora.dateNow());
    Leu.setEntidade("Entidade: Cliente");
    Leu.printLogLeitura(); 
    Singleton::get_instance().atualizaLogsLeitura(Leu);
    return telefone;
  }
  string Cliente::getEmail(){
    Data agora;
    LogLeitura Leu("Leu o email do cliente");       // Set da informação lida
    Leu.setUser(Singleton::get_instance().GetUser()); 
    Leu.setDataHora(agora.dateNow());
    Leu.setEntidade("Entidade: Cliente");
    Leu.printLogLeitura(); 
    Singleton::get_instance().atualizaLogsLeitura(Leu);
    return email;
  }

//MÉTODOS SET
  void Cliente::setNome(string nome)
  {
    LogEscrita Escreveu(this->nome, nome);
    Data agora;
    Escreveu.setUser(Singleton::get_instance().GetUser());
    Escreveu.setDataHora(agora.dateNow());
    Escreveu.setEntidade("Entidade: Cliente");
    Escreveu.printLogEscrita();
    Singleton::get_instance().atualizaLogsEscrita(Escreveu);
    this->nome = nome;
  }

  void Cliente::setTipo(string tipo)
  {
    LogEscrita Escreveu(this->tipo, tipo);
    Data agora;
    Escreveu.setUser(Singleton::get_instance().GetUser());
    Escreveu.setDataHora(agora.dateNow());
    Escreveu.setEntidade("Entidade: Cliente");
    Escreveu.printLogEscrita();
    Singleton::get_instance().atualizaLogsEscrita(Escreveu);
    this->tipo = tipo;
  }

  void Cliente::setCPF(char * CPF)
  {
    LogEscrita Escreveu(this->CPF, CPF);
    Data agora;
    Escreveu.setUser(Singleton::get_instance().GetUser());
    Escreveu.setDataHora(agora.dateNow());
    Escreveu.setEntidade("Entidade: Cliente");
    Escreveu.printLogEscrita();
    Singleton::get_instance().atualizaLogsEscrita(Escreveu);
    if(Cliente::validarCPF(CPF) && tipo == "Pessoa Física"){
      this->CPF = CPF;
    }
  }

  void Cliente::setCNPJ(char * CNPJ)
  {
    LogEscrita Escreveu(this->CNPJ, CNPJ);
    Data agora;
    Escreveu.setUser(Singleton::get_instance().GetUser());
    Escreveu.setDataHora(agora.dateNow());
    Escreveu.setEntidade("Entidade: Cliente");
    Escreveu.printLogEscrita();
    Singleton::get_instance().atualizaLogsEscrita(Escreveu);
    if(Cliente::validarCNPJ(CNPJ) && tipo == "Pessoa Jurídica"){
      this->CNPJ = CNPJ;
    } else{
      printf("CNPJ inválido");
    }
  }

  void Cliente::setTelefone(string telefone)
  {
    LogEscrita Escreveu(this->telefone, telefone);
    Data agora;
    Escreveu.setUser(Singleton::get_instance().GetUser());
    Escreveu.setDataHora(agora.dateNow());
    Escreveu.setEntidade("Entidade: Cliente");
    Escreveu.printLogEscrita();
    Singleton::get_instance().atualizaLogsEscrita(Escreveu);
    this->telefone = telefone;
  }

  void Cliente::setEmail(string email)
  {
    LogEscrita Escreveu(this->email, email);
    Data agora;
    Escreveu.setUser(Singleton::get_instance().GetUser());
    Escreveu.setDataHora(agora.dateNow());
    Escreveu.setEntidade("Entidade: Cliente");
    Escreveu.printLogEscrita();
    Singleton::get_instance().atualizaLogsEscrita(Escreveu);
    this->email = email;
  }

// MÉTODOS VALIDAÇÂO

  bool Cliente::validarCPF(char * CPF){       //Funciona
    unsigned lenght = 0;
    int ver1 = 0, ver2 = 0;
    char aux;

    /* contando o tamanho de CPF e verificando se o o tamanho do mesmo é 11
     */
    while (CPF[lenght]) {
        lenght++;
    }

    if (lenght != 11)
        return false;

    cout << "validando CPF...\n";

    /* Calculando o primeiro dígito verificador. Cada dígito tem um peso co-
     * meçando de 1 até 9. Para calculá-lo deve-se somar cada dígito, multi-
     * plicando-se por seu peso e ao final realizar a operação de módulo por
     * 11
     */
    for (int j=0; j<9; j++){
        aux = CPF[j];
        ver1 += atoi(&aux)*(j+1);
    }

    ver1 %= 11;

    /* Para o segundo dígito verificador calcula-se a partir do segundo dí-
     * gito até o 10º ( dígito verificador 1 ) atribuindo-se o peso de 1  a
     * 9, e no final realizar a operação Módulo por 11
     */
    for (int j=0; j<9; j++){
        aux = CPF[j];
        ver2 += atoi(&aux)*j;
    }

    ver2 += ver1*9;
    ver2 %= 11;

    /* compara-se agora ver1 e ver2 com os dígitos do CPF */
    aux = CPF[lenght-2];
    if (atoi(&aux) == ver1){
        aux = CPF[lenght-1];
        if ( atoi(&aux) == ver2){
            cout << "CPF Valido!\n";
            return true;
          }
    }
    cout << "CPF Invalido!\n";
    return false;
  }

bool Cliente::validarCNPJ(char *CNPJ) {
  int cnpj[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  int multiplicadores1[] = {5, 4, 3, 2, 9, 8, 7, 6, 5, 4, 3, 2};
  int multiplicadores2[] = {6, 5, 4, 3, 2, 9, 8, 7, 6, 5, 4, 3, 2};
  int soma1 = 0, soma2 = 0, quociente1, resto1, quociente2, resto2;
  int verificador1, verificador2;
  for (int r = 0; r < 14; r++) {
    cnpj[r] = (CNPJ[r]-48);
  }
  for (int i = 0; i < 12; i++) {
    soma1 += (multiplicadores1[i] * cnpj[i]);
  }
  for (int j = 0; j < 14; j++) {
    soma2 += (multiplicadores2[j] * cnpj[j]);
  }
  quociente1 = soma1 / 11;
  resto1 = soma1 % 11;
  quociente2 = soma2 / 11;
  resto2 = soma2 % 11;
  if (resto1 < 2) {
    verificador1 = 0;
  } else {
    verificador1 = 11 - resto1;
  }
  if (resto2 < 2) {
    verificador2 = 0;
  } else {
    verificador2 = 11 - resto2;
  }
  if ((cnpj[12] == verificador1) && (cnpj[13] == verificador2)) {
    cout << "CNPJ Valido!\n";
    return true;
  } else {
    cout << "CNPJ Invalido!\n";
    return false;
  }
}