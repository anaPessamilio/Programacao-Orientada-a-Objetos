#ifndef MATERIAPRIMA_H
#define MATERIAPRIMA_H
#include<string>
using namespace std;
class Materiaprima {

private:
double estoque_;
double estoquemin_;
string nome_;
string unidade_;

public:

Materiaprima(double estoque, double estoquemin, string nome, string unidade);

void setEstoque(double estoque);
void setEstoquemin(double estoque);
void setNome(string nome);
void setUnidade(string nome);
double getEstoque();
double getEstoquemin();
string getNome();
string getUnidade();
void atualizaEstoque(double quantidade);
bool validaEstoque(double estoqueProposto);
};

#endif