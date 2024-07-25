#include<iostream>
#include<string>
#include "Reajuste.hpp"
#include "LogEscrita.hpp"
#include "LogLeitura.hpp"
#include "Singleton.hpp"
//#include "LogExcecao.hpp"

using namespace std;

  Reajuste::Reajuste(string tipo, Data data, double percentual){
    tipo_=tipo;
    percentual_=percentual;
    data_=data;
  };
    string Reajuste::GetTipo(){
    Data agora;
    LogLeitura Leu("Leu o tipo do reajuste"); // Set da informação lida
    Leu.setUser(Singleton::get_instance().GetUser()); 
    Leu.setDataHora(agora.dateNow());
    Leu.setEntidade("Entidade: Reajuste");
    Leu.printLogLeitura(); 
    Singleton::get_instance().atualizaLogsLeitura(Leu);  
    return tipo_;
  }
    void Reajuste::GetData(){
        Data agora;
        LogLeitura Leu("Leu a data do reajuste"); // Set da informação lida
        Leu.setUser(Singleton::get_instance().GetUser()); 
        Leu.setDataHora(agora.dateNow());
        Leu.setEntidade("Entidade: Reajuste");
        Leu.printLogLeitura(); 
        Singleton::get_instance().atualizaLogsLeitura(Leu); 
        data_.printData();
    }
    double Reajuste::GetPercentual(){
        Data agora;
        LogLeitura Leu("Leu o percentual do reajuste"); // Set da informação lida
        Leu.setUser(Singleton::get_instance().GetUser()); 
        Leu.setDataHora(agora.dateNow());
        Leu.setEntidade("Entidade: Reajuste");
        Leu.printLogLeitura(); 
        Singleton::get_instance().atualizaLogsLeitura(Leu); 
        return percentual_;
    }
   void Reajuste::SetTipo(const string& tipo){
        LogEscrita Escreveu(this->tipo_, tipo);
        Data agora;
        Escreveu.setUser(Singleton::get_instance().GetUser());
        Escreveu.setDataHora(agora.dateNow());
        Escreveu.setEntidade("Entidade: Reajuste");
        Escreveu.printLogEscrita();
        Singleton::get_instance().atualizaLogsEscrita(Escreveu);
        tipo_=tipo;
    }
    void Reajuste::SetData( Data& data){
        LogEscrita Escreveu(this->data_.getData(), data.getData());
        Data agora;
        Escreveu.setUser(Singleton::get_instance().GetUser());
        Escreveu.setDataHora(agora.dateNow());
        Escreveu.setEntidade("Entidade: Reajuste");
        Escreveu.printLogEscrita();
        Singleton::get_instance().atualizaLogsEscrita(Escreveu);

      //data_.setAno(data.getAno());
      //data_.setDia(data.getDia());
      //data_.setMes(data.getMes());
       data_=data;
    }
void Reajuste::PrintReajuste(Reajuste* reajuste){
  //reajuste->GetData();
  cout<<tipo_<<" de "<<percentual_<<"% em ";reajuste->GetData();
  
  
}
   void Reajuste::SetPercentual(const double& percentual){
        LogEscrita Escreveu(to_string(this->percentual_), to_string(percentual));
        Data agora;
        Escreveu.setUser(Singleton::get_instance().GetUser());
        Escreveu.setDataHora(agora.dateNow());
        Escreveu.setEntidade("Entidade: Reajuste");
        Escreveu.printLogEscrita();
        Singleton::get_instance().atualizaLogsEscrita(Escreveu);
        percentual_=percentual;
    }
Reajuste::~Reajuste(){}