#include <iostream>
#include "Conta.h"

Conta::Conta(int numero, Cliente &cliente) : _numero(numero), _cliente(cliente) {
    cout << "Criando conta" << _numero << " do cliente " << _cliente.getNome() << endl;
}

void Conta::deposita(float valor) {
    _saldo += valor;
}

void Conta::retira(float valor) {
    if (_saldo - valor > 0) {
        _saldo -= valor;
    } else {
        cout << fixed << setprecision(2);
        cout << "Saldo insuficiente, o montante máximo para retirada e de R$" << _saldo << "." << endl;
    }
}

void Conta::transfere(float valor, Conta &conta) {
    if (_saldo > valor) {
        this->retira(valor);
        conta.deposita(valor);
    } else {
        cout << fixed << setprecision(2);
        cout << "Saldo insuficiente, o montante máximo para transferencia e de R$" << _saldo << "." << endl;
    }
}