//
// Created by Admin on 20/11/2023.
//

#ifndef ESCOLA_H
#define ESCOLA_H

#include <string>
#include <vector>
#include "Aluno.h"
#include "AlunoExtra.h"
#include "Treinador.h"
#include "Equipa.h"

class Escola {
private:
    std::string denominacao;
    std::string NIF;
    std::string endereco;
    std::string dataConstituicao;
    std::string contactoTelefonico;
    std::string email;
    std::string paginaWeb;
    std::vector<Aluno> alunos; // Declaração do vetor de alunos
    std::vector<Equipa> equipas; // Declaração do vetor de equipas

public:
    Escola(const std::string &denominacao,
           const std::string &NIF,
           const std::string &endereco,
           const std::string &dataConstituicao,
           const std::string &contactoTelefonico,
           const std::string &email,
           const std::string &paginaWeb);

    // Métodos para obter informações da escola
    std::string getDenominacao() const;

    std::string getNIF() const;

    std::string getEndereco() const;

    std::string getDataConstituicao() const;

    std::string getContactoTelefonico() const;

    std::string getEmail() const;

    std::string getPaginaWeb() const;

    //Métodos
    //Método para adicionar aluno regular
    void adicionarAlunoRegular(int codigo,
                               const std::string &nome,
                               const std::string &ncc,
                               const std::string &dataNasc,
                               const std::string &contacto,
                               const std::string &encarregado,
                               const std::string &email);

    //Método para adicionar aluno extraordinário
    void adicionarAlunoExtra(int codigo,
                             const std::string &nome,
                             const std::string &ncc,
                             const std::string &dataNasc,
                             const std::string &contacto,
                             const std::string &encarregado,
                             const std::string &email,
                             const std::string &instituicao);

    void adicionarAluno(const Aluno &aluno);

    // Método para adicionar equipas
    void adicionarEquipa(int codigo,
                         const std::string &escalao,
                         int anoCivil,
                         const std::string &treinador,
                         const std::string &adjunto);

    //Método para associar aluno a uma equipa
    virtual void associarAlunoEquipa(int codigoEquipa, int codigoAluno);

    void mostrarDados() const;

    // Método para obter a lista de alunos
    const std::vector<Aluno> &getAlunos() const {
        return alunos;
    }
};

#endif //ESCOLA_H