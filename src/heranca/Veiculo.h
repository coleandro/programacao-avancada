#ifndef _VEICULO_H_
#define _VEICULO_H_

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

using namespace std;

class Veiculo {
public:
    // Construtores
    Veiculo();
    Veiculo(string placa, float peso, float vel_max, float preco);

    // Destrutor
    ~Veiculo() {        
    }

    // Metodos acessores
    string getPlaca();
    float getPeso();
    float getVelMax();
    float getPreco();

    // Metodos mutantes
    void setPlaca(string placa);
    void setPeso(float peso);
    void setVelMax(float vel_max);
    void setPreco(float preco);

    // Metodos auxiliares
    bool valida(float dado);
    void imprime();

protected:
    string _placa;      // Placa como LLL-0000
    float _peso;        // Peso em kg
    float _vel_max;     // Velocidade maxima em km/h
    float _preco;       // Preco em R$
};

#endif