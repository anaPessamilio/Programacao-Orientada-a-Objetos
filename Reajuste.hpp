#ifndef REAJUSTE_H
#define REAJUSTE_H
#include<iostream>
#include "Data.h"
using namespace std;

class Reajuste{
    public:
    Reajuste(string tipo, Data data, double percentual);
Reajuste(){};
virtual ~Reajuste();
    //retorna o tipo do reajuste
    string GetTipo();
    //retorna a data do reajuste
    void GetData();
    //retorna o percentual do reajuste
    double GetPercentual();
    //adiciona o tipo de reajuste
    void SetTipo(const string& tipo);
    //adiciona a data do reajuste
    void SetData( Data& data);
    void PrintReajuste(Reajuste* reajuste);
    //adiciona o percentual do reajuste
    void SetPercentual(const double& percentual);
    private:
    Data data_;
    double percentual_;
    string tipo_;
    };
    #endif