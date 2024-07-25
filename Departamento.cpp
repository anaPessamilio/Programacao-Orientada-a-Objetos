#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include "Departamento.hpp"

using namespace std;

Departamento::Departamento(int codigo, string nome, Funcionario funcionario){
    codigo_ = codigo;
    nome_ = nome;
   funcionario_ = &funcionario;
}


//get

int Departamento::getCodigo(){
    return codigo_;
}

string Departamento::getNome(){
    return nome_;
}

void Departamento::getFuncionario(){
    funcionario_->PrintFuncionario(funcionario_);
}

// set

void Departamento::setCodigo(int& valcodigo){
    codigo_ = valcodigo;
}

void Departamento::setNome(string& valnome){
    nome_ = valnome;
}

void Departamento::setFuncionario(Funcionario& valfuncionario){
    funcionario_ = &valfuncionario;
}
Departamento::~Departamento(){}