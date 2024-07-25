#include <iostream>
#include <string>
#include "Log.hpp"

using namespace std;

 //Log::Log(Usuario *user, Data dataHora, string entidade){
Log::Log(Data dataHora, string entidade){
  //user_ = user;
  dataHora_ = dataHora;
  entidade_ = entidade;
};

// get
Usuario Log::getUser(){
  return user_;
}

Data Log::getDataHora() { return dataHora_; }
string Log::getDataHoraStr() { return this->dataHora_.getData(); }
string Log::getEntidade() { return this->entidade_; }

// set
void Log::setUser(Usuario user){
  user_ = user;
}
void Log::setDataHora(Data dataHora) { dataHora_ = dataHora; }

void Log::setEntidade(string entidade) { entidade_ = entidade; }
