#include "Contrato.hpp"
Contrato::Contrato(Data dataA, Data dataD, double salariaAd, double salarioA,Reajuste reajuste){
  dataAdmissao_=dataA;
  dataDemissao_=dataD;
  salarioAdmissao_=salariaAd;
  salarioAtual_=salarioA;
  reajuste_=&reajuste;
  
}
Data Contrato::GetDataAdmissao(){
    dataAdmissao_.printData();
  //dataAdmissao_.getData();
    return dataAdmissao_;
}
    
    void Contrato::GetDataDemissao(){
      Data data(1970,1,1);
      if( dataDemissao_==data){
    cout<<"Nao houve demissao\n\n";}
      else{
  dataDemissao_.printData();}
}
    
    double Contrato::GetSalarioAdmissao(){
        return salarioAdmissao_;
    }
   
    double Contrato::GetSalariAtual(){
        return salarioAtual_;
    }
    
    void Contrato::GetReajuste(){
      if(reajuste_!= NULL){
      reajuste_->PrintReajuste(reajuste_);}
      else{
        cout<<"Nao existe reajuste\n\n";
      }
       // reajuste_.GetData();
        //reajuste_.GetPercentual();
        //reajuste_.GetTipo();
    }
    
    void Contrato::SetDataAdmissao(Data& dataAdmissao){
        dataAdmissao_=dataAdmissao;
    }
    
    void Contrato::SetDataDemissao(Data& dataDemissao){
      dataDemissao_=dataDemissao;
    }
    
    void Contrato::SetSalarioAdmissao(double& salarioAdmissao){
      salarioAdmissao_=salarioAdmissao;
      
    }
   
    void Contrato::SetSalarioAtual(double& salarioAtual){
      salarioAtual_= salarioAtual;     
    }
    
    
    void Contrato::SetReajuste(Reajuste& reajuste){
      reajuste_= &reajuste;
  //reajuste_.SetData(reajuste);
  //reajuste_.SetPercentual(reajuste.GetPercentual());
  //reajuste_.SetTipo(reajuste.GetTipo());
}
void Contrato::PrintContrato(Contrato *contrato){
  cout<<"Salario de admissao: "<<salarioAdmissao_<<", Salario atual: "<<salarioAtual_<<", admitido em : "; contrato->GetDataAdmissao(); cout<< ", Demitido em: "; contrato->GetDataDemissao();
  contrato->GetReajuste();
  
  
}
