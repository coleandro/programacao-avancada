#ifndef _CAMINHONETE_H_
#define _CAMINHONETE_H_

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "Carro.h"
#include "Caminhao.h"

using namespace std;

class Caminhonete : public Carro, public Caminhao {
public:
    // Construtores
    Caminhonete();
    Caminhonete(string placa, float peso, float vel_max, float preco, string modelo, string cor, float capacidade, float comprimento, float altura_max);

    // Destrutor
    ~Caminhonete(){        
    }

    // Metodos auxiliares
    void imprime();

private:

};

#endif