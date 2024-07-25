#ifndef PEDIDOCOMPRA_H
#define PEDIDOCOMPRA_H

#include <iostream>
#include "Orcamento.hpp"
#include "RegVenda.hpp"
#include "Pagamento.hpp"
#include "Data.h"

using namespace std;

class PedidoCompra
{
private:
    Orcamento* orcamento_;
    RegVenda* venda_;
    Pagamento* pagamento_;
    Data dataPag_;
public:
    PedidoCompra(Orcamento* orcamento_, RegVenda* venda_, Pagamento* pagamento_, Data dataPag_);
    ~PedidoCompra();

    Orcamento* getOrcamento();
    RegVenda* getVenda();
    Pagamento* getPagamento();
    Data getDataPag();

    void setOrcamento (Orcamento* orcamento);
    void setVenda (RegVenda* venda);
    void setPagamento (Pagamento* pagamento);
    void setDataPag (Data dataPag);

    bool validaCompra(Orcamento* orcamento);
    bool validaOrcamento(Orcamento* orcamento);
    void corrigeOrcamento(Orcamento* orcamento, double precoProdAtual);
}; 

#endif
