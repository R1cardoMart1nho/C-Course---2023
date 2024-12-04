//
// Created by Admin on 24/11/2023.
//

#ifndef ESCALAO_H
#define ESCALAO_H

#include <string>
#include <vector>

class Escalao {
private:
    std::string sigla;
    std::string designacao;

    // Membros estáticos para armazenar os escalões
//    static std::vector<Escalao> escaloes;

public:
    Escalao(const std::string &sigla, const std::string &designacao);

    // Métodos para obter informações do escalão
    std::string getSigla() const;

    std::string getDesignacao() const;

//    static const std::vector<Escalao>& obterEscaloes();
};

#endif //ESCALAO_H