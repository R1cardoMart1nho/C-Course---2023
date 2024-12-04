//
// Created by jlr-m on 06/01/2024.
//

#ifndef ALUNOEXTRA_H
#define ALUNOEXTRA_H

#include "Aluno.h"

class AlunoExtra : public Aluno {
private:
    std::string instAcolhimento;

public:
    AlunoExtra(int codigo, const std::string &nome, const std::string &numeroCC,
               const std::string &dataNascimento, const std::string &contacto,
               const std::string &encarregado, const std::string &email,
               const std::string &instituicao);

    std::string getInstituicao() const;

    void setInstituicao(const std::string &instituicao);

    std::string mostrarDados() const override;

    float calcularMensalidade() const override;
};


#endif //ALUNOEXTRA_H
