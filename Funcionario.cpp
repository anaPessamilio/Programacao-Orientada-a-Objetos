#include "Funcionario.hpp"
#include "LogLeitura.hpp"
#include "LogLeitura.hpp"
//#include "LogExcecao.hpp"
#include "Singleton.hpp"

Funcionario::Funcionario(string nome, string cpf, string endereco, string matricula, Data datanasc, string email, Cargo cargo, Contrato contrato){
  nome_ = nome;
  cpf_ = cpf;
  endereco_ = endereco;
  matricula_ = matricula;
  datanasc_ = datanasc;
  email_ = email;
  
  cargo_ = &cargo;
  contrato_ = &contrato;  
}

void Funcionario::setenderecox(float &x){
  LogEscrita Escreveu(to_string(this->enderecox_), to_string(x));
  Data agora;
  Escreveu.setUser(Singleton::get_instance().GetUser());
  Escreveu.setDataHora(agora.dateNow());
  Escreveu.setEntidade("Entidade: Funcionario");
  Escreveu.printLogEscrita();
  Singleton::get_instance().atualizaLogsEscrita(Escreveu);
  enderecox_=x;
}
void Funcionario::setenderecoy(float &y){
  LogEscrita Escreveu(to_string(this->enderecoy_), to_string(y));
  Data agora;
  Escreveu.setUser(Singleton::get_instance().GetUser());
  Escreveu.setDataHora(agora.dateNow());
  Escreveu.setEntidade("Entidade: Funcionario");
  Escreveu.printLogEscrita();
  Singleton::get_instance().atualizaLogsEscrita(Escreveu);
  enderecoy_=y;
}
float Funcionario::getenderecox(){
  Data agora;
  LogLeitura Leu("Leu a coord x do endereco do funcionario"); // Set da informação lida
  Leu.setUser(Singleton::get_instance().GetUser()); 
  Leu.setDataHora(agora.dateNow());
  Leu.setEntidade("Entidade: Funcionario");
  Leu.printLogLeitura(); 
  Singleton::get_instance().atualizaLogsLeitura(Leu);
 return enderecox_;
}
float Funcionario::getenderecoy(){
  Data agora;
  LogLeitura Leu("Leu a coord y do endereco do funcionario"); // Set da informação lida
  Leu.setUser(Singleton::get_instance().GetUser()); 
  Leu.setDataHora(agora.dateNow());
  Leu.setEntidade("Entidade: Funcionario");
  Leu.printLogLeitura(); 
  Singleton::get_instance().atualizaLogsLeitura(Leu);
 return enderecoy_;
}
string Funcionario::getnome(){
  Data agora;
  LogLeitura Leu("Leu o nome do funcionario"); // Set da informação lida
  Leu.setUser(Singleton::get_instance().GetUser()); 
  Leu.setDataHora(agora.dateNow());
  Leu.setEntidade("Entidade: Funcionario");
  Leu.printLogLeitura(); 
  Singleton::get_instance().atualizaLogsLeitura(Leu);
  return nome_;
}
string Funcionario::getcpf(){
  Data agora;
  LogLeitura Leu("Leu o cpf do funcionario"); // Set da informação lida
  Leu.setUser(Singleton::get_instance().GetUser()); 
  Leu.setDataHora(agora.dateNow());
  Leu.setEntidade("Entidade: Funcionario");
  Leu.printLogLeitura(); 
  Singleton::get_instance().atualizaLogsLeitura(Leu);
  return cpf_;
}
string Funcionario::getendereco(){
  Data agora;
  LogLeitura Leu("Leu o endereco do funcionario"); // Set da informação lida
  Leu.setUser(Singleton::get_instance().GetUser()); 
  Leu.setDataHora(agora.dateNow());
  Leu.setEntidade("Entidade: Funcionario");
  Leu.printLogLeitura(); 
  Singleton::get_instance().atualizaLogsLeitura(Leu);
  return endereco_;
}
string Funcionario::getemail(){
  Data agora;
  LogLeitura Leu("Leu o email do funcionario"); // Set da informação lida
  Leu.setUser(Singleton::get_instance().GetUser()); 
  Leu.setDataHora(agora.dateNow());
  Leu.setEntidade("Entidade: Funcionario");
  Leu.printLogLeitura(); 
  Singleton::get_instance().atualizaLogsLeitura(Leu);
  return email_;
}
string Funcionario::getmatricula(){
  Data agora;
  LogLeitura Leu("Leu a matricula do funcionario"); // Set da informação lida
  Leu.setUser(Singleton::get_instance().GetUser()); 
  Leu.setDataHora(agora.dateNow());
  Leu.setEntidade("Entidade: Funcionario");
  Leu.printLogLeitura(); 
  Singleton::get_instance().atualizaLogsLeitura(Leu);
  return matricula_;
}
void Funcionario::getdatanasc(){
 datanasc_.printData();
}

void Funcionario::getcargo(){
  cargo_->PrintCargo(cargo_);
}
void Funcionario::getcontrato(){
  contrato_->PrintContrato(contrato_);
}
void Funcionario::setnome(string& nome){
  LogEscrita Escreveu(this->nome_, nome);
  Data agora;
  Escreveu.setUser(Singleton::get_instance().GetUser());
  Escreveu.setDataHora(agora.dateNow());
  Escreveu.setEntidade("Entidade: Funcionario");
  Escreveu.printLogEscrita();
  Singleton::get_instance().atualizaLogsEscrita(Escreveu);
  nome_=nome;
}
void  Funcionario::setcpf(string& cpf){
  LogEscrita Escreveu(this->cpf_, cpf);
  Data agora;
  Escreveu.setUser(Singleton::get_instance().GetUser());
  Escreveu.setDataHora(agora.dateNow());
  Escreveu.setEntidade("Entidade: Funcionario");
  Escreveu.printLogEscrita();
  Singleton::get_instance().atualizaLogsEscrita(Escreveu);
  cpf_=cpf;
}
void  Funcionario::setendereco(string& endereco){
  LogEscrita Escreveu(this->endereco_, endereco);
  Data agora;
  Escreveu.setUser(Singleton::get_instance().GetUser());
  Escreveu.setDataHora(agora.dateNow());
  Escreveu.setEntidade("Entidade: Funcionario");
  Escreveu.printLogEscrita();
  Singleton::get_instance().atualizaLogsEscrita(Escreveu);
  endereco_=endereco;
}
void  Funcionario::setmatricula(string& matricula){
  LogEscrita Escreveu(this->matricula_, matricula);
  Data agora;
  Escreveu.setUser(Singleton::get_instance().GetUser());
  Escreveu.setDataHora(agora.dateNow());
  Escreveu.setEntidade("Entidade: Funcionario");
  Escreveu.printLogEscrita();
  Singleton::get_instance().atualizaLogsEscrita(Escreveu);
  matricula_=matricula;
}
void  Funcionario::setdatanasc(Data& datanasc){
  LogEscrita Escreveu(this->datanasc_.getData(), datanasc.getData());
  Data agora;
  Escreveu.setUser(Singleton::get_instance().GetUser());
  Escreveu.setDataHora(agora.dateNow());
  Escreveu.setEntidade("Entidade: Funcionario");
  Escreveu.printLogEscrita();
  Singleton::get_instance().atualizaLogsEscrita(Escreveu);
  datanasc_=datanasc;
}
void  Funcionario::setemail(string&  email){
  LogEscrita Escreveu(this->email_, email);
  Data agora;
  Escreveu.setUser(Singleton::get_instance().GetUser());
  Escreveu.setDataHora(agora.dateNow());
  Escreveu.setEntidade("Entidade: Funcionario");
  Escreveu.printLogEscrita();
  Singleton::get_instance().atualizaLogsEscrita(Escreveu);
  email_=email;
}

void  Funcionario::setcargo(Cargo& cargo){
  LogEscrita Escreveu(this->cargo_->getNome(), cargo.getNome());
  Data agora;
  Escreveu.setUser(Singleton::get_instance().GetUser());
  Escreveu.setDataHora(agora.dateNow());
  Escreveu.setEntidade("Entidade: Funcionario");
  Escreveu.printLogEscrita();
  Singleton::get_instance().atualizaLogsEscrita(Escreveu);
  cargo_=&cargo;
}
void  Funcionario::setcontrato(Contrato& contrato){
  LogEscrita Escreveu(this->contrato_->GetDataAdmissao().getData(), contrato.GetDataAdmissao().getData());
  Data agora;
  Escreveu.setUser(Singleton::get_instance().GetUser());
  Escreveu.setDataHora(agora.dateNow());
  Escreveu.setEntidade("Entidade: Funcionario");
  Escreveu.printLogEscrita();
  Singleton::get_instance().atualizaLogsEscrita(Escreveu);
  contrato_=&contrato;
}
void Funcionario::PrintFuncionario(Funcionario* funcionario){
  //reajuste->GetData();
  cout<<nome_<<" cpf: "<<cpf_<<", endereco: "<<endereco_<<", matricula: "<<matricula_<<", email: "<<email_<<", data de nascimento: ";funcionario->getdatanasc();funcionario->getcontrato();funcionario->getcargo();}