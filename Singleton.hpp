#ifndef SINGLETON_H
#define SINGLETON_H
#include <string>
#include <iostream>
#include <vector>
#include "Funcionario.hpp"
#include "Produto.hpp"
#include "Contrato.hpp"
#include "Departamento.hpp"
#include "Cargo.hpp"
#include "Reajuste.hpp"
#include "Categoria.hpp"
#include "Lote.hpp"
#include "Ordem.hpp"
#include "Cliente.hpp"
#include "RegVenda.hpp"
#include "Usuario.hpp"

#include "Data.h"

using namespace std;

class Singleton {
private:
//Singleton() = default;
Singleton (){};
Usuario &user_ = Usuario::get_instance();
vector<Funcionario* > funcionario_;
vector<Produto*> produto_;
vector<Contrato*> contrato_;
vector<Departamento*> departamento_;
vector<Cargo*> cargo_;
vector<Reajuste*> reajuste_;
vector<Categoria*> categoria_;
vector<Lote*> lote_;
vector<Ordem*> ordem_;
vector<Cliente*> cliente_;
vector<RegVenda*> venda_;

//Logs
vector<LogLeitura> LogsLeitura;
vector<LogEscrita> LogsEscrita;

string endereco_;
float x_;
float y_;
//static instance;
public:

static Singleton& get_instance(){
     static Singleton instance;
    return instance;
};
void Setfuncionario(Funcionario* &funcionario);
void Setprodutos(Produto* &produto);
void Setcontrato(Contrato* &produto);
void Setdepartameto(Departamento* &produto);
void Setcargos(Cargo* &produto);
void Setreajustes(Reajuste* &produto);
void Setcategoria(Categoria* &produto);
void Setlote(Lote* &produto);
void Setordem(Ordem* &produto);
void Setcliente(Cliente* &produto);
void Setvenda(RegVenda* &produto);
void Setendereco(string endereco, float x, float y);
void SetUser(Usuario user);

vector<Funcionario*> Getfuncionario();
void  Getprodutos();
vector<Contrato*>  Getcontrato();
vector<Departamento*>  Getdepartameto();
vector<Cargo*>  Getcargos();
vector<Reajuste*>  Getreajustes();
vector<Categoria*>  Getcategoria();
vector<Lote*>  Getlote();
vector<Ordem*>  Getordem();
vector<Cliente*>  Getcliente();
vector<RegVenda*>  Getvenda();
string Getendereco();
Usuario GetUser();

//Métodos de Logs
void printLogs();
void atualizaLogsLeitura(LogLeitura L);
void atualizaLogsEscrita(LogEscrita E);
};
#endif
