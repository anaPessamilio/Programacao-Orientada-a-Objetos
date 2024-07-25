#ifndef CATEGORIA_H
#define CATEGORIA_H
#include<iostream>
#include<string>
using namespace std;

class Categoria{
    public:
    Categoria(string nome,int codigo);
Categoria(){};
    virtual ~Categoria();
    //retorna o nome da categoria
    string GetNome();
    //retorna o codigo da categoria
    int GetCodigo();
    //adiciona o nome da categoria
    void SetNome( string nome);
   //adiciona o codigo da categoria
    void SetCodigo(int codigo);
    void PrintCategoria();
    private:
    int codigo_;
    string nome_;
    };
    #endif