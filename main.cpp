#include "Boleto.hpp"
#include "Cargo.hpp"
#include "Categoria.hpp"
#include "Contrato.hpp"
#include "Credito.hpp"
#include "Departamento.hpp"
#include "Funcionario.hpp"
#include "Log.hpp"
#include "LogEscrita.hpp"
#include "Lote.hpp"
#include "Materiaprima.hpp"
#include "Orcamento.hpp"
#include "Ordem.hpp"
#include "Pagamento.hpp"
#include "Permissoes.hpp"
#include "PedidoCompra.hpp"
#include "Produto.hpp"
#include "Reajuste.hpp"
#include "RegVenda.hpp"
#include "Rota.hpp"
#include "Singleton.hpp"
#include "Usuario.hpp"
#include "Veiculo.hpp"
#include <cstdio>
#include <iostream>
#include <string>
//#include "LogExcecao.hpp"
#include "LogLeitura.hpp"

using namespace std;

int main() {

  Data dataA(2012, 12, 9);   // data admissão
  Data dataD(2022, 9, 30);   // data demissão
  Data dataR(2018, 10, 24);  // data do reajuste1
  Data dataR2(2019, 01, 01); // data do reajuste2

  // teste da classe pagamento
  Pagamento Pag1("Credito", 50.5);
  cout << Pag1.getForma() << "," << Pag1.getValor() << endl;
  cout << endl;
  Pag1.setForma("Debito");
  Pag1.setValor(81.4);
  cout << Pag1.getForma() << "," << Pag1.getValor() << endl;
  cout << endl;

  // teste da classe boleto
  Boleto Bol1(5);
  cout << Bol1.getDias() << endl;
  cout << endl;
  Bol1.setDias(8);
  cout << Bol1.getDias() << endl;

  // teste da classe credito
  Credito Cred1(5);
  cout << Cred1.getParcelas() << endl;
  cout << endl;
  Cred1.setParcelas(8);
  cout << Cred1.getParcelas() << endl;

  // teste da classe reajuste
  Reajuste R1("individual", dataR, 3.0);
  Reajuste r2;
  Reajuste *r1 = &R1;
  r2.SetTipo("dissidio");
  r2.SetData(dataR2);
  r2.SetPercentual(0.5);
  std::cout << "Reajuste " << R1.GetTipo() << " de " << R1.GetPercentual()
            << " %"
            << " em ";
  R1.GetData();
  std::cout << "Reajuste " << r2.GetTipo() << " de " << r2.GetPercentual()
            << " %"
            << " em ";
  r2.GetData();

  // teste da classe Contrato
  double salario = 2000;
  Contrato C1(dataA, dataD, 1200, 1234, R1);
  cout << "admitido em ";
  C1.GetDataAdmissao();
  cout << " com salario de R$ " << C1.GetSalarioAdmissao()
       << " houve um reajuste ";
  C1.GetReajuste();
  cout << " o salario atual e de R$ " << C1.GetSalariAtual() << " demitido em ";
  C1.GetDataDemissao();
  Contrato C3;
  Contrato *c1 = &C1;
  Data data(2015, 05, 8);
  C3.SetDataAdmissao(data);

  C3.SetSalarioAdmissao(salario);

  C3.GetReajuste();
  C3.GetDataDemissao();

  // teste de classe categoria
  cout << "         teste de classe categoria \n\n";
  Categoria c2("biscoito", 1234567);
  Categoria a3;
  a3.SetNome("alimento");
  int a = 12345;
  // string A="biscoito";
  a3.SetCodigo(a);
  // a3.SetNome(b);
  cout << a3.GetCodigo() << " a \n\n" << a3.GetNome() << "\n\n";
  cout << c2.GetNome() << "  a  \n\n" << c2.GetCodigo() << endl << "\n\n";

  // teste da classe produto
  cout << "         teste de classe produto \n\n";
  Categoria *C2 = &c2;
  Produto p1("arroz", C2, 1234, 12, 120, 3, 50);
  cout << p1.getnome() << " " << p1.getcodigo() << " " << p1.getestoqueatual()
       << " ";
  cout << p1.getestoquemin() << " " << p1.getqtdlotemin() << " "
       << p1.getvalor() << endl
       << "\n\n";
  double b = 12.5;
  p1.reajustevalor(b, dataR2);
  p1.gethistorico();
  cout << p1.getvalor() << endl;
  p1.getcategoria();
  Produto *P1 = &p1;
  Lote l1(P1, dataA, 5, 20);
  Lote *L1 = &l1;
  l1.AtualizaEstoque();
  cout << " produto" << endl;
  l1.GetProduto();
  cout << p1.getestoqueatual() << "\n\n\n";

  cout << "         teste de classe cargo \n\n";
  Cargo cargo("joao", "diretor");
  Cargo *ca = &cargo;
  cout << cargo.getNome() << " " << cargo.getAtribuicao() << "\n\n\n";

  cout << "         teste de classe funcionario \n\n";
  Funcionario f1("jose", "09678205730", "BH", "123456", dataA, "email", cargo,
                 C1);
  Funcionario *f2 = &f1;
  f2->PrintFuncionario(f2);

  cout << "         teste de classe departamento \n\n";
  Departamento d1(123456, "departamento", f1);
  Departamento *D1 = &d1;
  d1.getFuncionario();

  cout << "         teste de classe orcamento \n\n";
  Orcamento o1;
  double c = 5.5;
  Produto p2("feijao", C2, 12431, c, 4, 1, 43);

  cout << "         teste de classe produto/regvenda \n\n";
  Produto *P2 = &p2;
  // Produto *b1=&p1;
  o1.SetProduto(P1, 10);
  o1.SetProduto(P2, 10);

  cout << "incio\n\n\n";
  cout << o1.Getpreco() << "\n\n";

  o1.getProduto();

  cout << "fim\n\n";
  RegVenda rv1;
  RegVenda *RV1 = &rv1;
  Ordem *O2;

  rv1.setProduto(P1);
  rv1.setLote(l1);
  dataA.printData();
  rv1.setDataVenda(dataA);
  rv1.setQuantidade(100);
  rv1.setOrdem(O2);
  rv1.venda();
  rv1.getProduto();
  cout << "incio\n\n";
  cout << l1.GetProducao() << "\n\n\n" << rv1.getQuantidade();
  cout << endl;
  cout << "fim\n\n";

  // O2->getOrdem();

  // teste materia prima

  cout << "           teste materia prima\n\n\n\n\n\n";
  Materiaprima madeira(5.8, 1, "Madeira", "kg");
  Materiaprima plastico(3.4, 1, "Plastico", "kg");
  Materiaprima aluminio(4, 1, "Aluminio", "kg");
  Materiaprima parafuso(35, 20, "Parafusos", "unidades");

  madeira.setEstoque(0.5);
  plastico.atualizaEstoque(3.8);

  cout << madeira.getNome() << "," << madeira.getEstoque() << ","
       << madeira.getEstoquemin() << "," << madeira.getUnidade() << endl;
  cout << endl;
  cout << plastico.getNome() << "," << plastico.getEstoque() << ","
       << plastico.getEstoquemin() << "," << plastico.getUnidade() << endl;
  cout << endl;
  cout << aluminio.getNome() << "," << aluminio.getEstoque() << ","
       << aluminio.getEstoquemin() << "," << aluminio.getUnidade() << endl;
  cout << endl;
  cout << parafuso.getNome() << "," << parafuso.getEstoque() << ","
       << parafuso.getEstoquemin() << "," << parafuso.getUnidade() << endl;
  cout << endl;

  // teste empresa
  cout << "comeca empresa" << endl;
  Singleton &Empresa1 = Singleton::get_instance();
  Empresa1.Setprodutos(P1);
  Empresa1.Setreajustes(r1);
  Empresa1.Setfuncionario(f2);
  Empresa1.Setcontrato(c1);
  Empresa1.Setdepartameto(D1);
  Empresa1.Setcargos(ca);
  Empresa1.Setcategoria(C2);
  Empresa1.Setlote(L1);
  Empresa1.Setordem(O2);
  // Empresa1.Setcliente(P1);
  Empresa1.Setvenda(RV1);
  Empresa1.Setendereco("qeqwd", 2.8, 3.4);

  Empresa1.Getprodutos();
  cout << "func" << endl;
  vector<Funcionario *> f = Empresa1.Getfuncionario();
  for (auto it = f.begin(); it != f.end(); ++it) {

    cout << (*it)->getnome();
  }

  cout << "fim empresa" << endl;

  // teste usuario
  Usuario &Usuario1 = Usuario::get_instance();
  string nome = ("rodrigo");
  Usuario1.setNome(nome);
  Usuario1.setTipo(nome);
  Usuario1.setLogin(nome);
  Usuario1.setSenha(nome);
  cout << Usuario1.getNome();
  cout << "fim user" << endl;
  Empresa1.SetUser(Usuario1);
  cout << "." << endl;
  cout << Empresa1.GetUser().getNome() << endl;
  cout << "usuario";

  // teste veiculo
  Veiculo v1(12, "placa", "van");
  cout << v1.getTipo() << endl;
  cout << "fim v";
  Permissoes p;
  p.setpermissao(3);
  vector<int> P = p.getpermissao();
  for (auto i = P.begin(); i != P.end(); i++) {
    cout << *i;
  }
  cout << "agr foi" << endl;

  // rota
  Rota r;
  r.setempresa(3, 3);
  r.setrota(0, 0);
  r.setrota(1, 1);
  r.setrota(2, 2);
  r.sethora(7.5);
  r.setcaminho();
  vector<float> A = r.getcaminho();
  // auto it=A.begin();
  // for ( auto it=A.at(1); it!=A.end();it++)
  //{
  for (unsigned int i = 1; i < A.size(); i++) {
    int B = A.at(i);
    // cout<<A.at(i)/60<<":"<<(A.at(i)%60)*60<<endl;}
    if ((B % 60) < 10) {
      cout << B / 60 << ":0" << (B % 60) << endl;
    } else {
      cout << B / 60 << ":" << (B % 60) << endl;
    }
  }
  cout << "1" << endl;
  // cout<<"foi";

  cout << "         testes logs\n\n\n\n\n\n";
  Cargo cargo_log("diretor", "Dirigir projetos de engenharia");
  cout << cargo_log.getNome() << " " << cargo_log.getAtribuicao();
  // Teste Log Leitura
  string n = cargo_log.getNome();
  string atribuicao = cargo_log.getAtribuicao();
  // LogLeitura Loguinho("XXX");
  // cout << Loguinho.getInformacaoAcessada();
  // Teste Log Escrita
  cargo_log.setNome("Analista");
  cargo_log.setAtribuicao("Analisar os Projetos do Setor de Engenharia");
  // Cliente PessoaFisica;
  Cliente PessoaJuridica("Metais S.A.", "Pessoa Juridica", "XXXXXXXXXXX",
                         "30238932000138", "08002008388", "Metais@Metais.com");
  Cliente PessoaFisica("Rodolfo", "Pessoa Fisica", "39346583002",
                       "XXXXXXXX0001XX", "08002008388", "Metais@Metais.com");
  Funcionario Trabaiador;
  n = PessoaFisica.getNome();
  cout << "\n Nome pessoa fisica:" << n << "\n";
  n = PessoaJuridica.getCNPJ();
  cout << "\n CNPJ pessoa juridica:" << n << "\n";
  // Teste Log Leitura
  n = cargo_log.getNome();
  atribuicao = cargo_log.getAtribuicao();
  PessoaFisica.setNome("Josias");
  // Teste vetores de logs para colocar na entidade empresa
  // Esses vetores deverão ser implementados como atributo de empresa
  // para as classes conseguirem acessar e adicionar mais logs em cada leitura
  // vector <LogLeitura> LogsLeitura = cargo_log.getLogsLeitura();
  // vector <LogEscrita> LogsEscrita = cargo_log.getLogsEscrita();
  // Esse trecho é apenas para printar todos os logs registrados durante a
  // execução e pode ser usado na main para realizar os testes
  /*cout << "Os logs de leitura registrados foram: \n";
  //for (auto i = LogsLeitura.begin(); i != LogsLeitura.end(); ++i){
  Singleton::get_instance().GetUser() for (auto i =
  Singleton::get_instance().LogsLeitura.begin(); i !=
  Singleton::get_instance().LogsLeitura.end(); ++i){ i->printLogLeitura();
  }
  cout << "Os logs de escrita registrados foram: \n";
  //for (auto j = LogsEscrita.begin(); j != LogsEscrita.end(); ++j){
  for (auto j = Singleton::get_instance().LogsEscrita.begin(); j !=
  Singleton::get_instance().LogsEscrita.end(); ++j){ j->printLogEscrita();
  }*/
  Singleton::get_instance().printLogs();
}