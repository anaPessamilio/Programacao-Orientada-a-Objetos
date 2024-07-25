#include "Orcamento.hpp"
using namespace std;

void Orcamento::SetData(Data &data){
  data_=data;
}
void Orcamento::SetCliente(Cliente &cliente){
  cliente_=&cliente;
}

void Orcamento::SetProduto(Produto* &produto, int quantidade){
  produto_.insert(std::make_pair(produto,quantidade));  
 
  
}
void Orcamento::GetData(){
  data_.printData();
}
double Orcamento::Getpreco(){
  preco_=0;
   std::map<Produto*,int>::iterator it;
  for (it=produto_.begin(); it!=produto_.end(); it++)
    
    //cout<< it->first->getvalor();
      preco_=preco_+((it->first->getvalor())*(it->second));

    
   

    return preco_;
}
void Orcamento::getProduto(){
std::map<Produto*,int>::iterator it;
  for (it=produto_.begin(); it!=produto_.end(); it++){
    it->first->PrintProduto();
   
  }
 
}