#ifndef LOGLEITURA_H
#define LOGLEITURA_H

#include <iostream>
#include <string>
#include "Log.hpp"

using namespace std;

class LogLeitura : public Log {

    private:
        string info_;
    public:
        LogLeitura(string info = "XXX");
        LogLeitura(){};
        virtual ~LogLeitura(){};
        //Métodos GET
        string getInformacaoAcessada();
        //Métodos SET
        void setInformacaoAcessada(string info);
        //Método de print
        void printLogLeitura(); 

};

#endif //LOGLEITURA_H