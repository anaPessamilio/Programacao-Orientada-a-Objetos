#include"Categoria.hpp"
#include "LogEscrita.hpp"
#include "LogLeitura.hpp"
#include "Singleton.hpp"
//#include "LogExcecao.hpp"


Categoria::Categoria(string nome,int codigo){
nome_=nome;
codigo_=codigo; 
}
  
string Categoria::GetNome(){
  Data agora;
  LogLeitura Leu("Leu o nome da categoria"); // Set da informação lida
  Leu.setUser(Singleton::get_instance().GetUser()); 
  Leu.setDataHora(agora.dateNow());
  Leu.setEntidade("Entidade: Categoria");
  Leu.printLogLeitura(); 
  Singleton::get_instance().atualizaLogsLeitura(Leu);
  return nome_;
}
    
int Categoria::GetCodigo(){
  Data agora;
  LogLeitura Leu("Leu o codigo da categoria"); // Set da informação lida
  Leu.setUser(Singleton::get_instance().GetUser()); 
  Leu.setDataHora(agora.dateNow());
  Leu.setEntidade("Entidade: Categoria");
  Leu.printLogLeitura(); 
  Singleton::get_instance().atualizaLogsLeitura(Leu);
  return codigo_;
}
    
void Categoria::SetNome(string nome){
  LogEscrita Escreveu(this->nome_, nome);
  Data agora;
  Escreveu.setUser(Singleton::get_instance().GetUser());
  Escreveu.setDataHora(agora.dateNow());
  Escreveu.setEntidade("Entidade: Categoria");
  Escreveu.printLogEscrita();
  Singleton::get_instance().atualizaLogsEscrita(Escreveu);
  this->nome_=nome;
}
   
void Categoria::SetCodigo(int codigo){
  LogEscrita Escreveu(to_string(this->codigo_),to_string(codigo));
  Data agora;
  Escreveu.setUser(Singleton::get_instance().GetUser());
  Escreveu.setDataHora(agora.dateNow());
  Escreveu.setEntidade("Entidade: Categoria");
  Escreveu.printLogEscrita();
  Singleton::get_instance().atualizaLogsEscrita(Escreveu);
  codigo_=codigo; 
}
void Categoria::PrintCategoria(){
  cout<<nome_<<"\n\n "<<codigo_<<endl<<"\n\n\n";
}
Categoria::~Categoria(){}