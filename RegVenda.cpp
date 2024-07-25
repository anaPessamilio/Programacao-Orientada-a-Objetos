#include "RegVenda.hpp"
#include "Data.h"
#include <iostream>

using namespace std;

RegVenda::RegVenda(Data DataVenda, Cliente Cliente, Produto *Produto,
int Quantidade, Lote Lote, Ordem *Ordem) {
  DataVenda_ = DataVenda;
  Cliente_ = Cliente;
  Produto_ = Produto;
  Quantidade_ = Quantidade;
  Lote_ = &Lote;
 Ordem_ = Ordem;
}

// MÉTODOS GET
Data RegVenda::getDataVenda() { return DataVenda_; }
Cliente RegVenda::getCliente() { return Cliente_; }
void RegVenda::getProduto() { return Produto_->PrintProduto(); }
  
int RegVenda::getQuantidade() { return Quantidade_; }
void RegVenda::getLote() {  
  }


// MÉTODOS SET
void RegVenda::setDataVenda(Data DataVenda) {
  
    DataVenda_ = DataVenda;
 }
void RegVenda::setCliente(Cliente Cliente) { Cliente_ = Cliente; }
void RegVenda::setProduto(Produto *Produto) { 
  
    Produto_ = Produto;}
  
void RegVenda::setQuantidade(int Quantidade) { Quantidade_ = Quantidade; }
void RegVenda::setLote(Lote Lote) { Lote_ = &Lote; }
void RegVenda::setOrdem(Ordem *Ordem) { Ordem_ = Ordem; }

// MÉTODOS PÚBLICOS
void RegVenda::venda() {
  if(validaEstoque()){
    int estoque=Produto_->getestoqueatual()-Quantidade_;
    Produto_->setestoqueatual(estoque);
    
  }
  else{
    cout<< "venda invalida\n\n";
  }
  //Ordem_.validaQnt();
  
  
  
}

bool RegVenda::validaEstoque() {
  if(Produto_->getestoqueatual() > Produto_->getestoquemin()){      // Se a qtd de prod em estoque for menor que o mínimo retorna falso
    
    return true;
  } else {
     DataVenda_.printData();
     Ordem_->setData(DataVenda_);
     Ordem_->setProduto(Produto_);
    
  
    return false;
  }
}

Lote RegVenda::comparaLote(Lote *apt) {                      // Decide qual lote deve ser utilizado para a venda com base na data
  Lote menor;
  Data menorData(9999,12,31);
  Data auxData;
  menor = apt[0];
  for(int i = 0; ; i++){
    //menorData = menor.GetData();
    //auxData = apt[i].GetData();
    if(apt[i].GetData() < menorData){
      menor = apt[i];
      menorData=menor.GetData();
    }
  }
  this->setDataVenda(menor.GetData());
  this->setLote(menor);
  if(this->validaEstoque()){
    menor.AtualizaEstoque();
  }
  return menor;
}