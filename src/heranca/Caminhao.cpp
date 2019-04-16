#include <iostream>
#include <string>
#include <iomanip>
#include "Caminhao.h"

using namespace std;

Caminhao::Caminhao() : _capacidade(0.0), _comprimento(0.0), _altura_max(0.0), Veiculo() {
}

Caminhao::Caminhao(string placa, float peso, float vel_max, float preco, float capacidade, float comprimento, float altura_max) : _capacidade(capacidade), _comprimento(comprimento), _altura_max(altura_max), Veiculo(placa, peso, vel_max, preco) {
}

float Caminhao::getCapacidade() {
    return _capacidade;
}

float Caminhao::getComprimento() {
    return _comprimento;
}

float Caminhao::getAlturaMax() {
    return _altura_max;
}

void Caminhao::setCapacidade(float capacidade) {
    _capacidade = capacidade;
}

void Caminhao::setComprimento(float comprimento) {
    _comprimento = comprimento;
}

void Caminhao::setAlturaMax(float altura_max) {
    _altura_max = altura_max;
}

void Caminhao::imprime() {
    cout << _placa << endl;
    cout << _peso << endl;
    cout << _vel_max << endl;
    cout << _capacidade << endl;
    cout << _comprimento << endl;
    cout << _altura_max << endl;
}