#ifndef VEICULO_H
#define VEICULO_H
#include<iostream>
#include<string>
using namespace std;
class Veiculo{
    private:
    int capacidade_;
    string placa_;
    string tipo_;

    public:
    Veiculo(int capacidade, string placa, string tipo);
    Veiculo(){};
    void setCapacidade(int &capacidade);
    void setPlaca(string &placa);
    void setTipo(string &tipo);
    int getCapacidade();
    string getPlaca();
    string getTipo();
};
#endif;

 