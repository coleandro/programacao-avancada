#include <iostream>
#include "ContaPoupanca.h"

ContaPoupanca::ContaPoupanca(int numero, Cliente &cliente) : Conta(numero, cliente) {
}

ContaPoupanca::extrato() {
    cout << fixed << setprecision(2);
    cout << "--- EXTRATO DE CONTA POUPANCA ---" << endl;
    cout << "Conta numero: " << _numero << endl;
    cout << "Cliente: " << _cliente.getNome() << endl;
    cout << "Saldo: " << _saldo << endl;
    cout << "---------------------------------" << _saldo << endl;
}

ContaPoupanca::aplicaJurosDiarios(ind dias) const {
    for (int i = 0; i < dias; i++) {
        _saldo += _saldo * 0.0008;
    }
}