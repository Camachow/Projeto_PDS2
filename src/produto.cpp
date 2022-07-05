#include "../include/produto.h"

Produto::Produto(string nome, int qtd, float preco){
    _nome = nome;
    _qtd = qtd;
    _preco = preco;
}

string Produto::retorna_nome() {
    return _nome;
}

float Produto::retorna_preco() {
    return _preco;
}

void Produto::atualiza_quantidade(int qtd) {
    _qtd = qtd;
}