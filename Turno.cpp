#include<iostream>
#include "Turno.hpp"

using namespace std;
  Turno::Turno(Data inicio, Data fim, string periodo){
    inicio_=inicio;
    fim_=fim;
    periodo_=periodo;
  };
  void Turno::SetInicio(Data &data){
    //inicio=inicio_;
    inicio_ = data;
  }

  void Turno::SetFim(Data& data){
    //fim=fim_;
    fim_ = data;
  }

  void Turno::SetPeriodo(string& periodo){
    periodo_=periodo;
  }

  Data Turno::GetInicio(){
    return inicio_;
  }

  Data Turno::GetFim(){
    return fim_;
  }

  string Turno::GetPeriodo(){
    return periodo_;
  }

Turno::~Turno(){}