//
// Created by Admin on 24/11/2023.
//

#ifndef TREINADOR_H
#define TREINADOR_H

#include <string>

class Treinador {
private:
    std::string nome;
    bool principal;

public:
    Treinador(const std::string &nome, bool principal);

    // Métodos de acesso
    std::string getNome() const;

    bool isPrincipal() const;
};

#endif //TREINADOR_H
