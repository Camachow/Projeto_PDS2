#include "funcionario.h"
#include <string>

Funcionario::Funcionario(string nome, int id) {

    _nome = nome;
    _id = id;
}

string Funcionario::getNome() {
    return _nome;
}

void Funcionario::setNome(string nome) {
    _nome = nome;
}

string Funcionario::emitirNotaFiscal(Cliente cliente) {
    return 0;


}
