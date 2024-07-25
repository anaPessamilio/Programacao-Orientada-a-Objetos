#include "Usuario.hpp"
using namespace std;

void Usuario::setNome(string &nome){
    nome_=nome;
}
void Usuario::setLogin(string &nome){
    login_=nome;
}
void Usuario::setSenha(string &nome){
    senha_=nome;
}
void Usuario::setTipo(string &nome){
    tipo_=nome;
}

string Usuario::getNome(){
    return nome_;
}
string Usuario::getLogin(){
    return login_;
}
string Usuario::getSenha(){
    return senha_;
}
string Usuario::getTipo(){
    return tipo_;
}
void Usuario::setPermissoes(Permissoes p){
permissoes_=p;
}