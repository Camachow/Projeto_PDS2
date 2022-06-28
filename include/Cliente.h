#ifndef CLIENTE_H
#define CLIENTE_H
#include "Supermercado.hpp"
#include "Produto.hpp"

using namespace std;

class Cliente{

private:
  string _nome;


public:
   Cliente(string nome);
   void comprar_produto(Produto p, Supermercado s, int quantidade);

};
#endif