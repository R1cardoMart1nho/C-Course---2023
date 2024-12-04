//
// Created by jlr-m on 06/01/2024.
//

#include "AlunoExtra.h"


AlunoExtra::AlunoExtra(int codigo, const std::string &nome, const std::string &numeroCC,
                       const std::string &dataNascimento, const std::string &contacto,
                       const std::string &encarregado, const std::string &email,
                       const std::string &instituicao)
        : Aluno(codigo, nome, numeroCC, dataNascimento, contacto, encarregado, email),
          instAcolhimento(instituicao) {}

std::string AlunoExtra::getInstituicao() const {
    return instAcolhimento;
}

void AlunoExtra::setInstituicao(const std::string &instituicao) {
    instAcolhimento = instituicao;
}

std::string AlunoExtra::mostrarDados() const {
    std::string s = Aluno::mostrarDados();
    s = s + "\nInstituicao de acolhimento: " + instAcolhimento;
    return s;
}

float AlunoExtra::calcularMensalidade() const {
    return 0.7f * 20.0f;  // 30% de desconto
}