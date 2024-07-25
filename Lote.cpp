#include"Lote.hpp"
#include "Data.h"
#include "LogLeitura.hpp"
#include "LogLeitura.hpp"
//#include "LogExcecao.hpp"
#include "Singleton.hpp"

   Lote::Lote(Produto* produto,Data data, int numero, int quantidade){
     produto_=produto;
     data_=data;
     numero_=numero;
     quantidade_=quantidade;
}
   Lote::~Lote(){}
    //retorna o nome da categoria
   Produto Lote::GetProduto(){
      Data agora;
      LogLeitura Leu("Leu o produto do Lote"); // Set da informação lida
      Leu.setUser(Singleton::get_instance().GetUser()); 
      Leu.setDataHora(agora.dateNow());
      Leu.setEntidade("Entidade: Lote");
      Leu.printLogLeitura(); 
      Singleton::get_instance().atualizaLogsLeitura(Leu);
      produto_->PrintProduto();
      return *produto_;
    }
    //retorna o codigo da categoria
    //void Lote::GetData(){
      //data_.printData();
    //}
    Data Lote::GetData(){
      Data agora;
      LogLeitura Leu("Leu a data do Lote"); // Set da informação lida
      Leu.setUser(Singleton::get_instance().GetUser()); 
      Leu.setDataHora(agora.dateNow());
      Leu.setEntidade("Entidade: Lote");
      Leu.printLogLeitura(); 
      Singleton::get_instance().atualizaLogsLeitura(Leu);
      data_.printData();
      return data_;
    }

    int Lote::GetNumero(){
      Data agora;
      LogLeitura Leu("Leu o numero do Lote"); // Set da informação lida
      Leu.setUser(Singleton::get_instance().GetUser()); 
      Leu.setDataHora(agora.dateNow());
      Leu.setEntidade("Entidade: Lote");
      Leu.printLogLeitura(); 
      Singleton::get_instance().atualizaLogsLeitura(Leu);
      return numero_;
    }
    int Lote::GetQuantidade(){
      Data agora;
      LogLeitura Leu("Leu a quantidade do Lote"); // Set da informação lida
      Leu.setUser(Singleton::get_instance().GetUser()); 
      Leu.setDataHora(agora.dateNow());
      Leu.setEntidade("Entidade: Lote");
      Leu.printLogLeitura(); 
      Singleton::get_instance().atualizaLogsLeitura(Leu);
      return quantidade_;
    }
    void Lote::SetData(Data& data){
      LogEscrita Escreveu(this->data_.getData(), data.getData());
      Data agora;
      Escreveu.setUser(Singleton::get_instance().GetUser());
      Escreveu.setDataHora(agora.dateNow());
      Escreveu.setEntidade("Entidade: Lote");
      Escreveu.printLogEscrita();
      Singleton::get_instance().atualizaLogsEscrita(Escreveu);
      data_=data;
    }
    void Lote::SetNumero(int& numero){
      LogEscrita Escreveu(to_string(numero_), to_string(numero));
      Data agora;
      Escreveu.setUser(Singleton::get_instance().GetUser());
      Escreveu.setDataHora(agora.dateNow());
      Escreveu.setEntidade("Entidade: Lote");
      Escreveu.printLogEscrita();
      Singleton::get_instance().atualizaLogsEscrita(Escreveu);
      numero_=numero;
    }
    void Lote::AtualizaEstoque(){
      int estoque=quantidade_+produto_->getestoqueatual();
 produto_->setestoqueatual(estoque); 
    };
    //adiciona o nome da categoria
    void Lote::SetProduto(Produto& produto){
      LogEscrita Escreveu(this->produto_->getnome(), produto.getnome());
      Data agora;
      Escreveu.setUser(Singleton::get_instance().GetUser());
      Escreveu.setDataHora(agora.dateNow());
      Escreveu.setEntidade("Entidade: Lote");
      Escreveu.printLogEscrita();
      Singleton::get_instance().atualizaLogsEscrita(Escreveu);
      produto_=&produto;
    }
   //adiciona o codigo da categoria
    void Lote::SetQuantidade( int& quantidade){
      LogEscrita Escreveu(to_string(quantidade_), to_string(quantidade));
      Data agora;
      Escreveu.setUser(Singleton::get_instance().GetUser());
      Escreveu.setDataHora(agora.dateNow());
      Escreveu.setEntidade("Entidade: Lote");
      Escreveu.printLogEscrita();
      Singleton::get_instance().atualizaLogsEscrita(Escreveu);
      quantidade_=quantidade;
    }
void Lote::SetProducao(string& ordem){
  ordem_= ordem;
}
string Lote::GetProducao(){
  Data agora;
  LogLeitura Leu("Leu a ordem de producao do Lote"); // Set da informação lida
  Leu.setUser(Singleton::get_instance().GetUser()); 
  Leu.setDataHora(agora.dateNow());
  Leu.setEntidade("Entidade: Lote");
  Leu.printLogLeitura(); 
  Singleton::get_instance().atualizaLogsLeitura(Leu);
  return ordem_;
}
