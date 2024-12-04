//
// Created by Admin on 20/11/2023.
//

#include "Escola.h"
#include "Aluno.h"
#include "AlunoExtra.h"
#include "Equipa.h"
#include <iostream>
#include <algorithm>

Escola::Escola(const std::string &denominacao,
               const std::string &NIF,
               const std::string &endereco,
               const std::string &dataConstituicao,
               const std::string &contactoTelefonico,
               const std::string &email,
               const std::string &paginaWeb)

        : denominacao(denominacao), NIF(NIF), endereco(endereco),
          dataConstituicao(dataConstituicao), contactoTelefonico(contactoTelefonico),
          email(email), paginaWeb(paginaWeb) {}

std::string Escola::getDenominacao() const {
    return denominacao;
}

std::string Escola::getNIF() const {
    return NIF;
}

std::string Escola::getEndereco() const {
    return endereco;
}

std::string Escola::getDataConstituicao() const {
    return dataConstituicao;
}

std::string Escola::getContactoTelefonico() const {
    return contactoTelefonico;
}

std::string Escola::getEmail() const {
    return email;
}

std::string Escola::getPaginaWeb() const {
    return paginaWeb;
}

void Escola::adicionarAlunoRegular(int codigo, const std::string &nome, const std::string &ncc,
                                   const std::string &dataNasc, const std::string &contacto,
                                   const std::string &encarregado, const std::string &email) {
    Aluno alunoRegular(codigo, nome, ncc, dataNasc, contacto, encarregado, email);
    alunos.push_back(alunoRegular);
    std::cout << "Aluno regular adicionado!" << std::endl;
}

void Escola::adicionarAlunoExtra(int codigo, const std::string &nome, const std::string &ncc,
                                 const std::string &dataNasc, const std::string &contacto,
                                 const std::string &encarregado, const std::string &email,
                                 const std::string &instituicao) {
    AlunoExtra alunoExtra(codigo, nome, ncc, dataNasc, contacto, encarregado, email, instituicao);
    alunos.push_back(alunoExtra);
    std::cout << "Aluno extraordinario adicionado!" << std::endl;
}

void Escola::adicionarAluno(const Aluno &aluno) {
    alunos.push_back(aluno);
    std::cout << "Aluno adicionado a escola!" << std::endl;
}

//Método para adicionar equipa
void Escola::adicionarEquipa(int codigo,
                             const std::string &escalao,
                             int anoCivil,
                             const std::string &treinador,
                             const std::string &adjunto) {

    // Criar instâncias de Treinador para a equipa
    Treinador treinadorPrincipal(treinador, true);
    Treinador adjuntoTreinador(adjunto, false);

    // Criar instância de Equipa
    Equipa equipa(codigo, escalao, anoCivil, treinadorPrincipal, adjuntoTreinador);

    // Adicionar a equipa à lista de equipas da escola
    equipas.push_back(equipa);

    std::cout << "Equipa adicionada a escola!" << std::endl;
}

// Método para associar aluno a uma equipa
void Escola::associarAlunoEquipa(int codigoEquipa, int codigoAluno) {
    auto itEquipa = std::find_if(equipas.begin(), equipas.end(), [codigoEquipa](const Equipa &equipa) {
        return equipa.getCodigo() == codigoEquipa;
    });

    if (itEquipa != equipas.end()) {
        // Encontrou a equipa, agora precisamos associar o aluno a essa equipa
        itEquipa->associarAlunoEquipa(codigoAluno);
    } else {
        std::cout << "Equipa com o codigo " << codigoEquipa << " nao encontrada na escola." << std::endl;
    }
}

// Exibir informações da Escola
void Escola::mostrarDados() const {
    std::cout << "Informacoes da Escola:" << std::endl;
    std::cout << "Denominacao: " << getDenominacao() << std::endl;
    std::cout << "NIF: " << getNIF() << std::endl;
    std::cout << "Endereco: " << getEndereco() << std::endl;
    std::cout << "Data de Constituicao: " << getDataConstituicao() << std::endl;
    std::cout << "Contacto Telefonico: " << getContactoTelefonico() << std::endl;
    std::cout << "Email: " << getEmail() << std::endl;
    std::cout << "Pagina Web: " << getPaginaWeb() << std::endl << std::endl;

    std::cout << "Alunos na Escola:" << std::endl;
    for (const auto &aluno: alunos) {
        std::cout << "Nome: " << aluno.getNome() << ", Codigo: " << aluno.getCodigo() << std::endl;;
    }
}

