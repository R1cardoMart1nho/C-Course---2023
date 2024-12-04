//
// Created by Admin on 24/11/2023.
//

#include "Escalao.h"

// Inicializar o vetor estático
//std::vector<Escalao> Escalao::escaloes;

Escalao::Escalao(const std::string &sigla, const std::string &designacao)
        : sigla(sigla), designacao(designacao) {}

std::string Escalao::getSigla() const {
    return sigla;
}

std::string Escalao::getDesignacao() const {
    return designacao;
}

//const std::vector<Escalao>& Escalao::obterEscaloes() {
//    // Criar instâncias dos escalões
//    // Se o vetor estiver vazio, cria os escalões
//    if (escaloes.empty()) {
//        escaloes.emplace_back("PET", "Petizes");
//        escaloes.emplace_back("TRA", "Traquinas");
//        escaloes.emplace_back("BEN", "Benjamins");
//        escaloes.emplace_back("INF", "Infantis");
//        escaloes.emplace_back("INI", "Iniciados");
//        escaloes.emplace_back("JUV", "Juvenis");
//        escaloes.emplace_back("JUN", "Juniores");
//    }
//
//    return escaloes;
//}