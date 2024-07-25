#ifndef CARGO_H
#define CARGO_H
#include <string>

#include "LogEscrita.hpp"
#include "LogLeitura.hpp"

using namespace std;

class Cargo {


    private:
        string nome_;
        string atribuicao_;
 
    public:
        Cargo(string nome, string atribuicao);
        Cargo(){};

        virtual ~Cargo();


        //get
        string getNome();
        string getAtribuicao();

        //set

        void setNome(string valnome);
        void setAtribuicao(string valatribuicao);
        void PrintCargo(Cargo* cargo);

};

#endif // CARGO_H_DEFINED