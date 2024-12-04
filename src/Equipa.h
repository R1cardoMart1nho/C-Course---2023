//
// Created by Admin on 24/11/2023.
//

#ifndef EQUIPA_H
#define EQUIPA_H

#include <string>
#include <vector>
#include "Aluno.h"
#include "Treinador.h"
#include "Escalao.h"

class Equipa {
private:
    int codigo;
    const std::string &escalao;
    //Escalao escalao;
    int anoCivil;
    std::vector<Aluno> jogadores;
    Treinador treinadorPrincipal;
    Treinador adjunto;
    std::vector<Escalao> escaloes; // teste de vetor de escaloes

public:
    Equipa(int codigo,
           const std::string &escalao,
            //const Escalao &escalao,
           int anoCivil,
           const Treinador &treinadorPrincipal,
           const Treinador &adjunto);

    const std::string &getEscalao() const;

    int getAnoCivil() const;

    const Treinador &getTreinadorPrincipal() const {
        return treinadorPrincipal;
    }

    const Treinador &getAdjunto() const {
        return adjunto;
    }

    // Métodos para adicionar e remover jogadores
    void adicionarJogador(const Aluno &jogador);

    void removerJogador(int codigoJogador);

    // Métodos para mostrar informações da equipa
    void mostrarJogadores() const;

    void mostrarEquipa() const;

    // Adiciona escalão
    void adicionarEscalao(const Escalao &escalao);

    // Para associar código do aluno
    int getCodigo() const;

    //Método para associar aluno a uma equipa
    void associarAlunoEquipa(int codigoAluno);
};

#endif //EQUIPA_H
