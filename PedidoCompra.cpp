#include "PedidoCompra.hpp"
#include "Data.h"
#include "LogEscrita.hpp"
#include "LogLeitura.hpp"
#include "Singleton.hpp"
#include <iostream>
#include <string>

using namespace std;

PedidoCompra::PedidoCompra(Orcamento *orcamento, RegVenda *venda,
                           Pagamento *pagamento, Data dataPag) {
  orcamento_ = orcamento;
  venda_ = venda;
  pagamento_ = pagamento;
  dataPag_ = dataPag;
}

Orcamento *PedidoCompra::getOrcamento() {
  Data agora;
  LogLeitura Leu("Leu o orcamento Pedido"); // Set da informação lida
  Leu.setUser(Singleton::get_instance().GetUser());
  Leu.setDataHora(agora.dateNow());
  Leu.setEntidade("Entidade: PedidoCompra");
  Leu.printLogLeitura();
  Singleton::get_instance().atualizaLogsLeitura(Leu);
  return orcamento_;
}
RegVenda *PedidoCompra::getVenda() {
  Data agora;
  LogLeitura Leu("Leu o venda Pedido"); // Set da informação lida
  Leu.setUser(Singleton::get_instance().GetUser());
  Leu.setDataHora(agora.dateNow());
  Leu.setEntidade("Entidade: PedidoCompra");
  Leu.printLogLeitura();
  Singleton::get_instance().atualizaLogsLeitura(Leu);
  return venda_;
}
Pagamento *PedidoCompra::getPagamento() {
  Data agora;
  LogLeitura Leu("Leu o pagamento Pedido"); // Set da informação lida
  Leu.setUser(Singleton::get_instance().GetUser());
  Leu.setDataHora(agora.dateNow());
  Leu.setEntidade("Entidade: PedidoCompra");
  Leu.printLogLeitura();
  Singleton::get_instance().atualizaLogsLeitura(Leu);
  return pagamento_;
}
Data PedidoCompra::getDataPag() {
  Data agora;
  LogLeitura Leu("Leu o data Pedido"); // Set da informação lida
  Leu.setUser(Singleton::get_instance().GetUser());
  Leu.setDataHora(agora.dateNow());
  Leu.setEntidade("Entidade: PedidoCompra");
  Leu.printLogLeitura();
  Singleton::get_instance().atualizaLogsLeitura(Leu);
  return dataPag_;
}

void PedidoCompra::setOrcamento(Orcamento *orcamento) {
  orcamento_ = orcamento;
}
void PedidoCompra::setVenda(RegVenda *venda) { venda_ = venda; }
void PedidoCompra::setPagamento(Pagamento *pagamento) {
  pagamento_ = pagamento;
}
void PedidoCompra::setDataPag(Data dataPag) { dataPag_ = dataPag; }

/*void corrigeOrcamento(Orcamento *orcamento, double precoAtualizado) {
  orcamento->SetPreco(precoAtualizado);
}

bool validaOrcamento(Orcamento *orcamento) {
  //incompleto
  double precoAtualizado;

  orcamento->getProduto();

  if (orcamento->Getpreco() != precoAtualizado) {
    corrigeOrcamento(orcamento, precoAtualizado);
  }
  return true;
}

bool validaCompra(Orcamento *orcamento) {
  if (validaOrcamento(orcamento) == true) {
    return true;
  }
  return false;
}*/