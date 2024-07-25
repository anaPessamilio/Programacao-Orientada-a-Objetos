#ifndef ORCAMENTO_H
#define ORCAMENTO_H
#include<iostream>
#include<string>
#include<map>
#include "Data.h"
#include "Produto.hpp"
#include "Cliente.hpp"
 using namespace std;
class Orcamento{
private:
Cliente *cliente_;
double preco_=0;
Data data_;
map<Produto*,int> produto_;

public:

Orcamento(){};
virtual ~Orcamento(){};
void SetData(Data &data);
void SetCliente(Cliente &cliente);
void SetProduto(Produto* &produto, int quantidade);
void GetData();
//void GetProduto();
double Getpreco();
void getProduto();
//void Getcliente();
};
  #endif