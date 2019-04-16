#ifndef _CONTA_H_
#define _CONTA_H_

#include "Cliente.h"

class Conta() {
public:
    // Construtores
    Conta();
    Conta(int numero, Cliente &cliente);

    // Destrutor
    ~Conta();

    // Métodos auxiliares
    void deposita(float valor);
    void retira(float valor);
    void transfere(float valor, Conta &conta);
    void extrato();
    virtual void aplicaJurosDiarios(int dias) const = 0;

protected:
    int _numero;            // Número da conta
    mutable float _saldo;   // Saldo
    Cliente _cliente;       // Cliente referenciado
}

#endif