#include "Singleton.hpp"

using namespace std;

//static Singleton::Singleton& get_instance();
void Singleton::Setfuncionario(Funcionario* &funcionario){
funcionario_.push_back(funcionario);
}
void Singleton::Setprodutos(Produto* &produto){

    produto_.push_back(produto);
}
void Singleton::Setcontrato(Contrato* &produto){
    contrato_.push_back(produto);
}
void Singleton::Setdepartameto(Departamento* &produto){
    departamento_.push_back(produto);
}
void Singleton::Setcargos(Cargo* &produto){
    cargo_.push_back(produto);
}
void Singleton::Setreajustes(Reajuste* &produto){
    reajuste_.push_back(produto);
}
void Singleton::Setcategoria(Categoria* &produto){
    categoria_.push_back(produto);
}
void Singleton::Setlote(Lote* &produto){
    lote_.push_back(produto);
}
void Singleton::Setordem(Ordem* &produto){
    ordem_.push_back(produto);
}

void Singleton::Setvenda(RegVenda* &produto){
    venda_.push_back(produto);
}
void Singleton::Setcliente(Cliente* &produto){
    cliente_.push_back(produto);
}
void Singleton::Setendereco(string endereco, float x, float y){
endereco_=endereco;
x_=x;
y_=y;
};
void Singleton::SetUser(Usuario user){
    user_=user;
}

vector<Funcionario*> Singleton::Getfuncionario(){
    
    return funcionario_; 
}

void Singleton::Getprodutos(){
    std::vector<Produto*>::iterator it;
  for (it=produto_.begin(); it!=produto_.end(); ++it)
    {
        
     (*it)->PrintProduto();
     
}

}
vector<Contrato*>  Singleton::Getcontrato(){
    return contrato_;
}
vector<Departamento*> Singleton::Getdepartameto(){
return departamento_;
}
vector<Cargo*>  Singleton::Getcargos(){
    return cargo_;
}
vector<Reajuste*>  Singleton::Getreajustes(){
    return reajuste_;
}
vector<Categoria*>  Singleton::Getcategoria(){
    return categoria_;
}
vector<Lote*>  Singleton::Getlote(){
    return lote_;
}
vector<Ordem*>  Singleton::Getordem(){
    return ordem_;
}

vector<RegVenda*>  Singleton::Getvenda(){
    return venda_;
}
vector<Cliente*>  Singleton::Getcliente(){
    return cliente_;
}
string Singleton::Getendereco(){
    return endereco_;
}
Usuario Singleton::GetUser (){
    return user_;
}

void Singleton::printLogs(){
  cout << "\n Os logs de leitura registrados foram: \n \n";
  for (auto i = LogsLeitura.begin(); i != LogsLeitura.end(); ++i){
    i->printLogLeitura();
  }
  cout << "\n Os logs de escrita registrados foram: \n \n";
  for (auto j = LogsEscrita.begin(); j != LogsEscrita.end(); ++j){
      j->printLogEscrita();
  }
}

void Singleton::atualizaLogsLeitura(LogLeitura L){
  LogsLeitura.push_back(L);
}
void Singleton::atualizaLogsEscrita(LogEscrita E){
  LogsEscrita.push_back(E);
}