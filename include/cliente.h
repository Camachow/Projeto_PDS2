#ifndef CLIENTE_H
#define CLIENTE_H
#include "supermercado.h"
#include "produto.h"

#include <string> 
#include<list>

using namespace std;

class Cliente{

private:
  string _nome;
  list<Produto> _carrinho; //carrinho de compras
                           //lista com produtos comprados

public:
   Cliente(string nome);
   string retorna_nome();
   list<Produto>* retorna_carrinho();
   void comprar_produto(Produto p, Supermercado *s, int quantidade);
   void ver_lista_produtos(Supermercado s);
   void ver_lista_promocional(Supermercado s);
  
};
#endif
