#ifndef LOGESCRITA_H
#define LOGESCRITA_H

#include <iostream>
#include <string>
#include "Log.hpp"

using namespace std;

class LogEscrita : public Log {
public:
    LogEscrita(string A = "XXXXXX", string D = "XXXXXX");
    LogEscrita(){};
    virtual ~LogEscrita(){};
    // Métodos GET
    string getAntes();
    string getDepois();
    // Métodos SET
    void setAntes(string a);
    void setDepois(string d);
    // Método de print
    void printLogEscrita(); 
   
private:
    string Antes;
    string Depois;
    string Atributo;
};

#endif // LOGESCRITA_H_INCLUDED