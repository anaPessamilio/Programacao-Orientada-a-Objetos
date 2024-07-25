#include "Veiculo.hpp"

using namespace std;
     
         Veiculo::Veiculo(int capacidade, string placa, string tipo){
            capacidade_=capacidade;
            placa_=placa;
            tipo_=tipo;
         }
    void Veiculo::setCapacidade(int &capacidade){
    capacidade_=capacidade;
    }
    void Veiculo::setPlaca(string &placa){
        placa_=placa;
    }
    void Veiculo::setTipo(string &tipo){
        tipo_=tipo;
    }
    int Veiculo::getCapacidade(){
        return capacidade_;
    }
    string Veiculo::getPlaca(){
        return placa_;
    }
    string Veiculo::getTipo(){
        return tipo_;
    }