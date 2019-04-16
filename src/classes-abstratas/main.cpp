#include <iostream>
#include "Cliente.h"
#include "ContaCorrente.h"
#include "ContaPoupanca.h"

int main() {
    Cliente c1 = Cliente("Leandro");
    Cliente c2 = Cliente("Leandro");

    ContaCorrente cc1 = ContaCorrente(10101, c1);
    ContaCorrente cc2 = ContaCorrente(10102, c2);

    ContaPoupanca cp1 = ContaPoupanca(10201, c1);
    ContaPoupanca cp2 = ContaPoupanca(10202, c2);

    cc1.deposita(1000.0);
    cc1.retira(500.0);
    cc1.deposita(750.0);
    cc1.retira(100.0);

    cc2.deposita(2000.0);
    cc2.retira(200.0);
    cc2.deposita(950.0);
    cc2.retira(50.0);

    cp1.deposita(80.0);
    cp1.retira(30.0);
    cp1.deposita(3750.0);
    cp1.retira(100.0);

    cp2.deposita(10000.0);
    cp2.retira(200.0);
    cp2.deposita(100.0);
    cp2.retira(350.0);

    cc1.extrato();
    cc2.extrato();

    cp1.extrato();
    cp2.extrato();

    cp1.transfere(1000, cc1);
    cp2.transfere(1050, cc2);

    ContaCorrente cc3 = ContaCorrente(10103, c1);
    ContaPoupanca cp3 = ContaPoupanca(10203, c2);

    cc3.deposita(1000);
    cp3.deposita(1000);

    cc3.aplicaJurosDiarios(100);
    cp3.aplicaJurosDiarios(100);

    cc3.extrato();
    cc3.extrato();

    return 0;
}