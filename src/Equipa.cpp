//
// Created by Admin on 24/11/2023.
//

#include "Equipa.h"
#include <iostream>
#include <algorithm>

Equipa::Equipa(int codigo,
               const std::string &escalao,
        //const Escalao &escalao,
               int anoCivil,
               const Treinador &treinadorPrincipal,
               const Treinador &adjunto)

        : codigo(codigo), escalao(escalao), anoCivil(anoCivil),
          treinadorPrincipal(treinadorPrincipal), adjunto(adjunto) {}

const std::string &Equipa::getEscalao() const {
    return escalao;
}

int Equipa::getAnoCivil() const {
    return anoCivil;
}

void Equipa::adicionarJogador(const Aluno &jogador) {
    if (jogadores.size() < 15) {
        jogadores.push_back(jogador);
        std::cout << "Jogador adicionado a esta equipa!" << std::endl;
    } else {
        std::cout << "A equipa ja atingiu o numero maximo de jogadores!" << std::endl;
    }
}

void Equipa::removerJogador(int codigoJogador) {
    auto it = std::remove_if(jogadores.begin(), jogadores.end(),
                             [codigoJogador](const Aluno &jogador) {
                                 return jogador.getCodigo() == codigoJogador;
                             });

    if (it != jogadores.end()) {
        jogadores.erase(it, jogadores.end());
        std::cout << "Jogador removido da equipa!" << std::endl;
    } else {
        std::cout << "Jogador nao encontrado na equipa!" << std::endl;
    }
}

// Implementa o método adicionarEscalao
void Equipa::adicionarEscalao(const Escalao &escalao) {
    escaloes.push_back(escalao);
    std::cout << "Escalao adicionado a esta equipa!" << std::endl;
}

// Para associar o código ao aluno
int Equipa::getCodigo() const {
    return codigo;
}

void Equipa::associarAlunoEquipa(int codigoAluno) {
    auto it = std::find_if(jogadores.begin(), jogadores.end(), [codigoAluno](const Aluno &jogador) {
        return jogador.getCodigo() == codigoAluno;
    });
    if (it != jogadores.end()) {
        // Adicionar o aluno à equipa
        Aluno alunoAssociado = *it;
        std::cout << "Encontrou o aluno. Codigo: " << alunoAssociado.getCodigo() << ", Nome: "
                  << alunoAssociado.getNome() << std::endl;
        adicionarJogador(alunoAssociado);
        std::cout << "Aluno associado a esta equipa!" << std::endl;
    } else {
        std::cout << "Aluno nao encontrado!" << std::endl;
    }
}

void Equipa::mostrarEquipa() const {
    std::cout << "Informacoes da Equipa:" << std::endl;
    std::cout << "Codigo: " << codigo << std::endl;
    std::cout << "Escalao: " << escalao << std::endl;
    std::cout << "Ano Civil de Criacao: " << anoCivil << std::endl;
    std::cout << "Treinador Principal: " << treinadorPrincipal.getNome() << std::endl;
    std::cout << "Adjunto: " << adjunto.getNome() << std::endl;
    std::cout << "Jogadores na equipa:" << std::endl;

    if (!jogadores.empty()) {
        for (const auto &jogador: jogadores) {
            std::cout << "Nome: " << jogador.getNome() << ", Codigo: " << jogador.getCodigo() << std::endl;
        }
    } else {
        std::cout << "Nenhum jogador na equipa." << std::endl;
    }
}