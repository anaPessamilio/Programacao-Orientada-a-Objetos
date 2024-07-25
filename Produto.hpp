#ifndef PRODUTO_H
#define PRODUTO_H
#include<string>
#include<iostream>
#include<map>
#include "Data.h"
#include "Categoria.hpp"
//#include "Lote.hpp"

using namespace std;

class Produto{

private:
string nome_;
Categoria *categoria_;
///Lote lote_;
int codigo_;
double valor_;
int qtdlotemin_;
int estoquemin_;
int estoqueatual_;
map<double,string> historico_;

public:
//construtor//
Produto (string nome,Categoria *categoria, int codigo, double valor, int qtdlotemin, int estoquemin, int estoqueatual);
Produto(){};
string getnome();
void getcategoria();
//Lote getlote();
int getcodigo();
double getvalor();
int getqtdlotemin();
int getestoquemin();
int getestoqueatual();
void setnome(string& nome);
void setcategoria(Categoria* categoria);
void gethistorico();
//void setlote(Lote& lote);
void setcodigo(int& codigo);
void setvalor(double& valor);
void setqtdlotemin(int& qtdlotemin);
void setestoquemin(int& estoquemin);
void setestoqueatual(int& estoqueatual);
void PrintProduto();
void reajustevalor(double& valor, Data& data);


};
#endif // FUNC_H_INCLUDED
