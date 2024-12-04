//
// Created by Admin on 20/11/2023.
//

#ifndef ALUNO_H
#define ALUNO_H

#include <string>

class Aluno {
private:
    int codigo;
    std::string nome;
    std::string numeroCC;
    std::string dataNascimento;
    std::string contacto;
    std::string encarregado;
    std::string email;

public:
    Aluno(
            int codigo,
            const std::string &nome,
            const std::string &numeroCC,
            const std::string &dataNascimento,
            const std::string &contacto,
            const std::string &encarregado,
            const std::string &email);

    int getCodigo() const;

    std::string getNome() const;

    virtual std::string mostrarDados() const;

    virtual float calcularMensalidade() const;
};

#endif //ALUNO_H
