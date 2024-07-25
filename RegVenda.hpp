#ifndef REGVENDA_H_INCLUDED
#define REGVENDA_H_INCLUDED

#include <iostream>
#include <math.h>
#include <string>
#include <string.h>
#include <cstddef>
#include "Cliente.hpp"
#include "Lote.hpp"
#include "Produto.hpp"
#include "Ordem.hpp"
#include "Data.h"

using namespace std;

class RegVenda {
  private:
    Data DataVenda_;
    Cliente Cliente_;
    Produto *Produto_;
    int Quantidade_;
    Lote *Lote_= NULL;
    Ordem *Ordem_= NULL;

  public:
  // CONSTRUTOR
    RegVenda(){};
    RegVenda(Data DataVenda, Cliente Cliente, Produto *Produto, int Quantidade , Lote Lote, Ordem *ordem);
  // DESTRUTOR
    virtual ~RegVenda(){};
  // MÉTODOS GET
    Data getDataVenda();
    Cliente getCliente();
    void getProduto();
    int getQuantidade();
    void getLote();
  //  Ordem getOrdem();
  // MÉTODOS SET
    void setDataVenda(Data DataVenda);
    void setCliente(Cliente Cliente_);
    void setProduto(Produto *Produto);
    void setQuantidade(int Quantidade);
    void setLote(Lote Lote_);
    void setOrdem(Ordem *Ordem);
  // MÉTODOS DA APLICAÇÃO
    void venda();
    bool validaEstoque();
    Lote comparaLote(Lote *apt);
}; 
#endif REGVENDA_H_INCLUDED