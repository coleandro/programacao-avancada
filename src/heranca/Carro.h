#ifndef _CARRO_H_
#define _CARRO_H_

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "Veiculo.h"

using namespace std;

class Carro : virtual public Veiculo {
public:
    // Construtores
    Carro();
    Carro(string placa, float peso, float vel_max, float preco, string modelo, string cor);
    
    // Destrutor
    ~Carro() {
    }

    // Metodos acessores
    string getModelo();
    string getCor();

    // Metodos mutantes
    void setModelo(string modelo);
    void setCor(string cor);

    // Metodos auxiliares
    void imprime();

protected:
    string _modelo;     // Modelo
    string _cor;        // Cor
};

#endif