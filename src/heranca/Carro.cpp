#include <iostream>
#include <string>
#include <iomanip>
#include "Carro.h"

using namespace std;

Carro::Carro() : Veiculo(), _modelo(""), _cor("") {
}

Carro::Carro(string placa, float peso, float vel_max, float preco, string modelo, string cor) : Veiculo(placa, peso, vel_max, preco), _modelo(modelo), _cor(cor) {
}

string Carro::getModelo() {
    return _modelo;
}

string Carro::getCor() {
    return _cor;
}

void Carro::setModelo(string modelo) {
    _modelo = modelo;
}

void Carro::setCor(string cor) {
    _cor = cor;
}

void Carro::imprime() {
    cout << _placa << endl;
    cout << _peso << endl;
    cout << _vel_max << endl;
    cout << _preco << endl;
    cout << _modelo << endl;
    cout << _cor << endl;
}