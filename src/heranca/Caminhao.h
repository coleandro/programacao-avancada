#ifndef _CAMINHAO_H_
#define _CAMINHAO_H_

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "Veiculo.h"

using namespace std;

class Caminhao : virtual public Veiculo {
public:
    // Construtores
    Caminhao();
    Caminhao(string placa, float peso, float vel_max, float preco, float capacidade, float comprimento, float altura_max);

    // Destrutor
    ~Caminhao(){
    }

    // Metodos acessores
    float getCapacidade();
    float getComprimento();
    float getAlturaMax();

    // Metodos mutantes
    void setCapacidade(float capacidade);
    void setComprimento(float comprimento);
    void setAlturaMax(float altura_max);

    // Metodos auxiliares
    void imprime();

protected:
    float _capacidade;      // Capacidade em toneladas
    float _comprimento;     // Comprimento em metros
    float _altura_max;      // Altura máxima em metros
};

#endif