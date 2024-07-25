#ifndef CLIENTE_H_INCLUDED
#define CLIENTE_H_INCLUDED
#include <string>

using namespace std;

class Cliente {
private:
  string nome;
  string tipo;
  char * CPF;
  char * CNPJ;
  string telefone;
  string email;

public:
  // CONSTRUTOR
  Cliente(string nome = "Fulano de Tal", string tipo = "Pessoa Fisica", char * CPF = "XXXXXXXXXXX", char * CNPJ =   
          "XXXXXXXX0001XX", string telefone = "xxxxxxxxxxx", string email = "xxxx@xxmail.com");
  virtual ~Cliente(){};  // Destrutor
  // MÉTODOS GET
  string getNome();
  string getTipo();
  char* getCPF();
  char* getCNPJ();
  string getTelefone();
  string getEmail();

  // MÉTODOS SET
  void setNome(string nome);
  void setTipo(string tipo);
  void setCPF(char * CPF);
  void setCNPJ(char * CNPJ);
  void setTelefone(string telefone);
  void setEmail(string email);
  // MÉTODOS VALIDAÇÂO
  bool validarCPF(char * CPF);
  bool validarCNPJ(char * CNPJ);
};
#endif // CLIENTE_H_INCLUDED