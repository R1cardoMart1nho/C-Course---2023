#include <iostream>
#include "src/Aluno.h"
#include "src/AlunoExtra.h"
#include "src/Escola.h"
#include "src/Escalao.h"
#include "src/Treinador.h"
#include "src/Equipa.h"

int main() {
    // Criar uma instância Aluno
    Aluno aluno1(1, "Joao", "123456789", "01/01/2000", "123456789", "Sr. Jose", "joao@email.com");
    AlunoExtra alunoExtra2(2, "Maria", "987654321", "02/02/2000", "987654321", "Sr. Manuel", "maria@email.com",
                           "InstituicaoA");

    // Criar uma instância Escola
    Escola escola1("Escola Exemplo", "123456789", "Rua da Escola, 123", "01/01/2000", "987654321", "escola@example.com",
                   "www.escolaexemplo.com");

    // Criar uma instância de Equipa
    Treinador treinadorPrincipal("Treinador1", true);
    Treinador adjunto("Treinador2", false);
    Escalao escalaoTRA("TRA", "Traquinas");
    Equipa equipa1(1, "TRA", 2023, treinadorPrincipal, adjunto);

    // Criar instâncias de Escalao
    Escalao Petizes("PET", "Petizes");
    Escalao Benjamins("BEN", "Benjamins");
    Escalao Traquinas("TRA", "Traquinas");

    // Adicionar escalões à equipa
    equipa1.adicionarEscalao(Traquinas);

    // Adicionar alunos à escola
    escola1.adicionarAluno(aluno1);
    escola1.adicionarAluno(alunoExtra2);

    //equipa1.mostrarEquipa();
    escola1.adicionarEquipa(equipa1.getCodigo(), equipa1.getEscalao(), equipa1.getAnoCivil(),
                            equipa1.getTreinadorPrincipal().getNome(), equipa1.getAdjunto().getNome());

    // Associar aluno à equipa
//    int codigoEquipa = equipa1.getCodigo();  // Substitua pelo código correto
//    int codigoAluno = aluno1.getCodigo();   // Substitua pelo código correto

    // Adicionar o aluno à equipa antes de associá-lo
    equipa1.adicionarJogador(aluno1);
    equipa1.adicionarJogador(alunoExtra2);

//    escola1.associarAlunoEquipa(equipa1.getCodigo(), aluno1.getCodigo());
//    escola1.associarAlunoEquipa(equipa1.getCodigo(), alunoExtra2.getCodigo());

    std::cout << std::endl;

    //equipa1.removerJogador(aluno1.getCodigo());
    // Mostrar dados
    equipa1.mostrarEquipa();
    std::cout << std::endl;
    //alunoExtra2.mostrarDados();
    std::cout << std::endl;
    escola1.mostrarDados();

    // Calcular mensalidade para Aluno
    float mensalidadeAluno1 = aluno1.calcularMensalidade();
    std::cout << "Mensalidade de " << aluno1.getNome() << ": " << mensalidadeAluno1 << " euros" << std::endl;

    // Calcular mensalidade para AlunoExtra
    float mensalidadeAlunoExtra2 = alunoExtra2.calcularMensalidade();
    std::cout << "Mensalidade de " << alunoExtra2.getNome() << ": " << mensalidadeAlunoExtra2 << " euros" << std::endl;


    return 0;
}
