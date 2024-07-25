#ifndef ORDEM_H
#define ORDEM_H

#include <iostream>
#include <string>
#include "Data.h"
#include "Lote.hpp"

using namespace std;

//class LogOrdem{

class Ordem{
private:

Produto *produto_;
Data data_;


public:
Ordem(){};
Ordem(  Data data, Produto* produto);
virtual ~Ordem(){};

//get

//set
void getOrdem();
void setData(Data data);
void setProduto(Produto *produto);




};

#endif