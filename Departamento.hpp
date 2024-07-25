#ifndef DEPARTAMENTO_H
#define DEPARTAMENTO_H

#include "Funcionario.hpp"

using namespace std;

class Departamento { 
    private:
        int codigo_;
        string nome_;
        Funcionario *funcionario_;


    public:
        Departamento(int codigo, string nome , Funcionario funcionario);

        virtual ~Departamento();

        // metodos get
        int getCodigo();
        string getNome();
        void getFuncionario();

        // metodos set
        void setCodigo(int& valcodigo);
        void setNome(string& valnome);
        void setFuncionario(Funcionario& valfuncionario);
         


};

#endif // DEPARTAMENTO_H_DEFINED
