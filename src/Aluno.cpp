//
// Created by Admin on 20/11/2023.
//

#include "Aluno.h"
#include <iostream>

Aluno::Aluno(
        int codigo,
        const std::string &nome,
        const std::string &numeroCC,
        const std::string &dataNascimento,
        const std::string &contacto,
        const std::string &encarregado,
        const std::string &email)

        : codigo(codigo), nome(nome), numeroCC(numeroCC), dataNascimento(dataNascimento),
          contacto(contacto), encarregado(encarregado), email(email) {}

int Aluno::getCodigo() const {
    return codigo;
}

std::string Aluno::getNome() const {
    return nome;
}

std::string Aluno::mostrarDados() const {
    std::cout << "Dados do Aluno:" << std::endl;
    std::cout << "Codigo: " << codigo << std::endl;
    std::cout << "Nome: " << nome << std::endl;
    std::cout << "Numero de CC: " << numeroCC << std::endl;
    std::cout << "Data de Nascimento: " << dataNascimento << std::endl;
    std::cout << "Contacto: " << contacto << std::endl;
    std::cout << "Encarregado: " << encarregado << std::endl;
    std::cout << "Email: " << email << std::endl;
}

float Aluno::calcularMensalidade() const {
    return 20.0f;
}
