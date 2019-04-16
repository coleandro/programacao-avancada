#ifndef _CONTACORRENTE_H_
#define _CONTACORRENTE_H_

#include "Conta.h"

class ContaCorrente : public Conta {
public:
    // Construtores
    ContaCorrente();
    ContaCorrente(int numero, Cliente &cliente);

    // Destrutor
    ~ContaCorrente();

    // Métodos auxiliares
    void extrato();
    virtual void aplicaJurosDiarios(int dias) const;

private:

}

#endif