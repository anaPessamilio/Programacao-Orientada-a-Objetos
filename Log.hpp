#ifndef LOG_H
#define LOG_H

#include <iostream>
#include <string>
#include "Usuario.hpp"
#include "Data.h"


using namespace std;

class Log {          // Classe pai dos demais logs
private:
//Usuario user_;
Usuario &user_ = Usuario::get_instance();
Data dataHora_;
string entidade_;

public:
//Log(Usuario *user, Data dataHora, string entidade = "XXXX");
Log(Data dataHora, string entidade = "XXXX");
Log(){};
virtual ~Log(){};

//get
Usuario getUser();
Data getDataHora();
string getDataHoraStr();
string getEntidade();

//set
void setUser(Usuario user);
void setDataHora(Data dataHora);
void setEntidade(string entidade);
};

#endif