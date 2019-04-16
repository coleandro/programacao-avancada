#include <iostream>
#include <string>
#include <iomanip>
#include "Caminhonete.h"

using namespace std;

Caminhonete::Caminhonete() : Carro(), Caminhao() {
}

Caminhonete::Caminhonete(string placa, float peso, float vel_max, float preco, string modelo, string cor, float capacidade, float comprimento, float altura_max) : Carro(placa, peso, vel_max, preco, modelo, cor), Caminhao(placa, peso, vel_max, preco, capacidade, comprimento, altura_max) {
}

void Caminhonete::imprime() {
    cout << _modelo << endl;
    cout << _cor << endl;
    cout << _placa << endl;
    cout << _peso << endl;
    cout << _vel_max << endl;
    cout << _capacidade << endl;
    cout << _comprimento << endl;
    cout << _altura_max << endl;
}