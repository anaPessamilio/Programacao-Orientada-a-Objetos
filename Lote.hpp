#ifndef LOTE_H
#define LOTE_H
#include<iostream>
#include "Data.h"
#include "Produto.hpp"
using namespace std;

class Lote{
public:
    Lote(Produto* produto,Data data, int numero, int quantidade);
    Lote(){

    };
    virtual ~Lote();
    //retorna o nome da categoria
    Produto GetProduto();
    //retorna o codigo da categoria
    Data GetData();
    int GetNumero();
    int GetQuantidade();
    void SetData(Data& data);
    void SetNumero(int& numero);
    void AtualizaEstoque();
    //adiciona o nome da categoria
    void SetProduto(Produto& produto);
   //adiciona o codigo da categoria
    void SetQuantidade( int& quantidade);
    void SetProducao(string& ordem);
    string GetProducao();
    
    private:
    int quantidade_;
    Produto *produto_;
    Data data_;
    int numero_;
    string ordem_;
    };
    #endif
