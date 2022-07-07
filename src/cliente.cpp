#include "../include/supermercado.h"
#include "../include/cliente.h"
#include <iostream>

using namespace std;

Cliente::Cliente(string nome) {
    _nome = nome;
}

void Cliente::ver_lista_produtos(Supermercado s) {
    s.imprime_lista_produtos();
}

void Cliente::ver_lista_promocional(Supermercado s) {
    s.imprime_lista_promocional();
}

void Cliente::comprar_produto(Produto p, Supermercado *s, int quantidade) {
    s->produto_comprado(quantidade, p.retorna_nome(), p.retorna_preco());
}
