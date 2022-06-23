#include "funcionario.h"

Funcionario::Funcionario(string nome, int id) {

    _nome = nome;
    _id = id;
}

int Funcionario::getNome() {
    return _nome;
}

void Funcionario::setNome(string nome) {
    _nome = nome;
}