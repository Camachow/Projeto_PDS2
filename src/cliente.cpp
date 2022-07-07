#include "../include/cliente.h"

Cliente::Cliente(string nome) {
    _nome = nome;
}

void Cliente::comprar_produto(Produto p, Supermercado *s, int quantidade) {
    s->produto_comprado(quantidade, p.retorna_nome(), p.retorna_preco());
}
