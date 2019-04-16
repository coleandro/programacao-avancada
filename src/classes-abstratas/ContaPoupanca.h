#ifndef _CONTAPOUPANCA_H_
#define _CONTAPOUPANCA_H_

#include "Conta.h"

class ContaPoupanca : public Conta {
public:
    // Construtores
    ContaPoupanca();
    ContaPoupanca(int numero, Cliente &cliente);

    // Destrutor
    ~ContaPoupanca();

    // Métodos auxiliares
    void extrato();
    virtual void aplicaJurosDiarios(int dias) const;

private:

}

#endif;