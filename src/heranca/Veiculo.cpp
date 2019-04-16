#include <iostream>
#include <string>
#include <iomanip>
#include "Veiculo.h"

using namespace std;

Veiculo::Veiculo() : _placa("AAA-0000"), _peso(0.0), _vel_max(0.0), _preco(0.0) {
}

Veiculo::Veiculo(string placa, float peso, float vel_max, float preco) : _placa(placa), _peso(peso), _vel_max(vel_max), _preco(preco) {
}

string Veiculo::getPlaca() {
    return _placa;
}

float Veiculo::getPeso() {
    return _peso;
}

float Veiculo::getVelMax() {
    return _vel_max;
}

float Veiculo::getPreco() {
    return _preco;
}

void Veiculo::setPlaca(string placa) {
    _placa = placa;
}

void Veiculo::setPeso(float peso) {
    if (valida(peso)) {
        _peso = peso;
    }
}

void Veiculo::setVelMax(float vel_max) {
    if (valida(vel_max)) {
        _vel_max = vel_max;
    }
}

void Veiculo::setPreco(float preco) {
    if (valida(preco)) {
        _preco = preco;
    }
}

bool Veiculo::valida(float dado) {
    if (dado >= 0.0) {
        return true;
    }
    return false;
}

void Veiculo::imprime() {
    cout << _placa << endl;
    cout << _peso << endl;
    cout << _vel_max << endl;
    cout << _preco << endl;
}