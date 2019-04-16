#ifndef _CLIENTE_H_
#define _CLIENTE_H_

#include <string>

using namespace std;

class Cliente {
public:
    // Construtores
    Cliente();
    Cliente(string nome);

    // Destrutor
    ~Cliente();

    // Métodos acessores
    string getNome();

    // Métodos mutantes
    void setNome(string nome);

private:
    string _nome;       // Nome do cliente
};

#endif