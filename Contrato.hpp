#ifndef CONTRATO_H
#define CONTRATO_H
#include<iostream>
#include "Data.h"
#include "Reajuste.hpp"

using namespace std;

class Contrato{
    private:
    Data dataAdmissao_;
    Data dataDemissao_;
    Reajuste *reajuste_= NULL;
    double salarioAtual_;
    double salarioAdmissao_;
    public:
    Contrato(Data dataA, Data dataD, double salariaAd, double salarioA,Reajuste reajuste);
Contrato(){};

    //retorna a data de admissão
    Data GetDataAdmissao();
    //retorna a data de demissão
    void GetDataDemissao();
    //retorna o salário na admissão
    double GetSalarioAdmissao();
    //retorna o salário atual
    double GetSalariAtual();
    //retorna o reajuste
    void GetReajuste();
    //adciona data de admissão
    void SetDataAdmissao(Data& data);
    //adciona data de demissão
    void SetDataDemissao(Data& data);
    //adciona o salário da admissão
    void SetSalarioAdmissao(double& salarioAdmissao);
   //adciona o salário atual
    void SetSalarioAtual(double& salarioAtual);
    //adciona o reajuste
    void SetReajuste(Reajuste& reajuste);
void PrintContrato(Contrato *contrato);
    };
    #endif // CONTRATO_H_INCLUDED