#include <iostream>
#include "ContaCorrente.h"

ContaCorrente::ContaCorrente(int numero, Cliente &cliente) : Conta(numero, cliente) {
}

ContaCorrente::extrato() {
    cout << fixed << setprecision(2);
    cout << "--- EXTRATO DE CONTA CORRENTE ---" << endl;
    cout << "Conta numero: " << _numero << endl;
    cout << "Cliente: " << _cliente.getNome() << endl;
    cout << "Saldo: " << _saldo << endl;
    cout << "---------------------------------" << _saldo << endl;
}

ContaCorrente::aplicaJurosDiarios(ind dias) const {
    for (int i = 0; i < dias; i++) {
        _saldo += _saldo * 0.0001;
    }
}