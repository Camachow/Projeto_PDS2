#ifndef CLIENTE_H
#define CLIENTE_H
#include "supermercado.h"
#include "produto.h"

using namespace std;

class Cliente{

private:
  string _nome;


public:
  Cliente(string nome);
  void comprar_produto(Produto p, Supermercado *s, int quantidade);
  void ver_lista_produtos(Supermercado s);
  void ver_lista_promocional(Supermercado s);

};
#endif
