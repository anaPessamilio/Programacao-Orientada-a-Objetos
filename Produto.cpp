#include "Produto.hpp"
#include "LogEscrita.hpp"
#include "LogLeitura.hpp"
#include "Singleton.hpp"
//#include "LogExcecao.hpp"

using namespace std;
//get
Produto::Produto(string nome,Categoria *categoria, int codigo, double valor, int qtdlotemin, int estoquemin, int estoqueatual){
  nome_=nome;
  codigo_=codigo;
  valor_=valor;
  qtdlotemin_=qtdlotemin;
  estoquemin_=estoquemin;
  estoqueatual_=estoqueatual;
  categoria_=categoria;
};
string Produto::getnome(){
  Data agora;
  LogLeitura Leu("Leu o nome do produto"); // Set da informação lida
  Leu.setUser(Singleton::get_instance().GetUser()); 
  Leu.setDataHora(agora.dateNow());
  Leu.setEntidade("Entidade: Produto");
  Leu.printLogLeitura(); 
  Singleton::get_instance().atualizaLogsLeitura(Leu);
  return nome_;
}
void Produto::getcategoria(){
  Data agora;
  LogLeitura Leu("Leu a categoria do produto"); // Set da informação lida
  Leu.setUser(Singleton::get_instance().GetUser()); 
  Leu.setDataHora(agora.dateNow());
  Leu.setEntidade("Entidade: Produto");
  Leu.printLogLeitura(); 
  Singleton::get_instance().atualizaLogsLeitura(Leu);
  categoria_->PrintCategoria();
}
//Lote Produto::getlote(){
  //  return lote_;
//}
int Produto::getcodigo(){
   Data agora;
  LogLeitura Leu("Leu o codigo do produto"); // Set da informação lida
  Leu.setUser(Singleton::get_instance().GetUser()); 
  Leu.setDataHora(agora.dateNow());
  Leu.setEntidade("Entidade: Produto");
  Leu.printLogLeitura(); 
  Singleton::get_instance().atualizaLogsLeitura(Leu);
  return codigo_;
}
double Produto::getvalor(){
   Data agora;
  LogLeitura Leu("Leu o valor do produto"); // Set da informação lida
  Leu.setUser(Singleton::get_instance().GetUser()); 
  Leu.setDataHora(agora.dateNow());
  Leu.setEntidade("Entidade: Produto");
  Leu.printLogLeitura(); 
  Singleton::get_instance().atualizaLogsLeitura(Leu);
  return valor_;
}
int Produto::getqtdlotemin(){
  Data agora;
  LogLeitura Leu("Leu a quantidade minima do produto"); // Set da informação lida
  Leu.setUser(Singleton::get_instance().GetUser()); 
  Leu.setDataHora(agora.dateNow());
  Leu.setEntidade("Entidade: Produto");
  Leu.printLogLeitura(); 
  Singleton::get_instance().atualizaLogsLeitura(Leu);
  return qtdlotemin_;
}
int Produto::getestoquemin(){
  Data agora;
  LogLeitura Leu("Leu o estoque minimo do produto"); // Set da informação lida
  Leu.setUser(Singleton::get_instance().GetUser()); 
  Leu.setDataHora(agora.dateNow());
  Leu.setEntidade("Entidade: Produto");
  Leu.printLogLeitura(); 
  Singleton::get_instance().atualizaLogsLeitura(Leu);
  return estoquemin_;
}
int Produto::getestoqueatual(){
  Data agora;
  LogLeitura Leu("Leu o estoque atual do produto"); // Set da informação lida
  Leu.setUser(Singleton::get_instance().GetUser()); 
  Leu.setDataHora(agora.dateNow());
  Leu.setEntidade("Entidade: Produto");
  Leu.printLogLeitura(); 
  Singleton::get_instance().atualizaLogsLeitura(Leu);
  return estoqueatual_;
}

//set
void Produto::setnome(string& nome){
  LogEscrita Escreveu(this->nome_, nome);
  Data agora;
  Escreveu.setUser(Singleton::get_instance().GetUser());
  Escreveu.setDataHora(agora.dateNow());
  Escreveu.setEntidade("Entidade: Produto");
  Escreveu.printLogEscrita();
  Singleton::get_instance().atualizaLogsEscrita(Escreveu);
  nome_=nome;
}
void Produto::setcategoria(Categoria* categoria){
  LogEscrita Escreveu(this->categoria_->GetNome(), categoria->GetNome());
  Data agora;
  Escreveu.setUser(Singleton::get_instance().GetUser());
  Escreveu.setDataHora(agora.dateNow());
  Escreveu.setEntidade("Entidade: Produto");
  Escreveu.printLogEscrita();
  Singleton::get_instance().atualizaLogsEscrita(Escreveu);
  categoria_=categoria;
}//
//void Produto::setlote(Lote& lote){
  //  lote_=lote;
//}
void Produto::setcodigo(int& codigo){
   LogEscrita Escreveu(to_string(this->codigo_), to_string(codigo));
  Data agora;
  Escreveu.setUser(Singleton::get_instance().GetUser());
  Escreveu.setDataHora(agora.dateNow());
  Escreveu.setEntidade("Entidade: Produto");
  Escreveu.printLogEscrita();
  Singleton::get_instance().atualizaLogsEscrita(Escreveu);
  codigo_=codigo;
}
void Produto::setvalor(double& valor){
  LogEscrita Escreveu(to_string(this->valor_), to_string(valor));
  Data agora;
  Escreveu.setUser(Singleton::get_instance().GetUser());
  Escreveu.setDataHora(agora.dateNow());
  Escreveu.setEntidade("Entidade: Produto");
  Escreveu.printLogEscrita();
  Singleton::get_instance().atualizaLogsEscrita(Escreveu);
  valor_=valor;
}
void Produto::setqtdlotemin(int& qtdlotemin){
  LogEscrita Escreveu(to_string(this->qtdlotemin_), to_string(qtdlotemin));
  Data agora;
  Escreveu.setUser(Singleton::get_instance().GetUser());
  Escreveu.setDataHora(agora.dateNow());
  Escreveu.setEntidade("Entidade: Produto");
  Escreveu.printLogEscrita();
  Singleton::get_instance().atualizaLogsEscrita(Escreveu);
  qtdlotemin_=qtdlotemin;
}
void Produto::setestoquemin(int& estoquemin){
  LogEscrita Escreveu(to_string(this->estoquemin_), to_string(estoquemin));
  Data agora;
  Escreveu.setUser(Singleton::get_instance().GetUser());
  Escreveu.setDataHora(agora.dateNow());
  Escreveu.setEntidade("Entidade: Produto");
  Escreveu.printLogEscrita();
  Singleton::get_instance().atualizaLogsEscrita(Escreveu);
  estoquemin_=estoquemin;
}
void Produto::setestoqueatual(int& estoqueatual){
  LogEscrita Escreveu(to_string(this->estoqueatual_), to_string(estoqueatual));
  Data agora;
  Escreveu.setUser(Singleton::get_instance().GetUser());
  Escreveu.setDataHora(agora.dateNow());
  Escreveu.setEntidade("Entidade: Produto");
  Escreveu.printLogEscrita();
  Singleton::get_instance().atualizaLogsEscrita(Escreveu);
  estoqueatual_=estoqueatual;
}
void Produto::reajustevalor(double& valor, Data& data){
  LogEscrita Escreveu(to_string(this->valor_), to_string(valor));
  Data agora;
  Escreveu.setUser(Singleton::get_instance().GetUser());
  Escreveu.setDataHora(agora.dateNow());
  Escreveu.setEntidade("Entidade: Produto");
  Escreveu.printLogEscrita();
  Singleton::get_instance().atualizaLogsEscrita(Escreveu);
  
  valor_=valor;
  
  historico_.insert ( std::pair<double,string>(valor,data.getData()) );
}
void Produto::gethistorico(){
  Data agora;
  LogLeitura Leu("Leu o historico do produto"); // Set da informação lida
  Leu.setUser(Singleton::get_instance().GetUser()); 
  Leu.setDataHora(agora.dateNow());
  Leu.setEntidade("Entidade: Produto");
  Leu.printLogLeitura(); 
  Singleton::get_instance().atualizaLogsLeitura(Leu);
  
  std::map<double,string>::iterator it;
  for (it=historico_.begin(); it!=historico_.end(); ++it)
    std::cout << it->first << " => " << it->second << '\n';

}
void Produto::PrintProduto(){
  
  cout<<nome_<<" - "<<codigo_<<" - "<<valor_<<" - "<<qtdlotemin_<<" - "<<estoquemin_<<" - "<<estoqueatual_<<endl;
  }