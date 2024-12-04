//
// Created by Admin on 24/11/2023.
//

#include "Treinador.h"

Treinador::Treinador(const std::string &nome, bool principal)
        : nome(nome), principal(principal) {}

std::string Treinador::getNome() const {
    return nome;
}

bool Treinador::isPrincipal() const {
    return principal;
}
