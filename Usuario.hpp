#ifndef USUARIO_H
#define USUARIO_H
#include <string>
#include <iostream>
#include "Data.h"
#include "Permissoes.hpp"

using namespace std;

class Usuario {
private:
//Usuario() = default;
Usuario(){};
string nome_;
string login_;
string senha_;
string tipo_;
Permissoes permissoes_;

public:

static Usuario& get_instance(){
     static Usuario instance;
    return instance;
};
void setPermissoes(Permissoes p);
void setNome(string &nome);
void setLogin(string &nome);
void setSenha(string &nome);
void setTipo(string &nome);

string getNome();
string getLogin();
string getSenha();
string getTipo();


};
#endif

