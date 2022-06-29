#ifndef SUPERMERCADO_H
#define SUPERMERCADO_H

#include <vector> 
#include "produto.h"

using namespace std;

class Supermercado{
    
    private:
      vector<Produto> _lista_produtos;
      float _saldo_caixa;
      vector<Produto> _lista_promocional;

    public:
      
      float retorna_saldo_caixa();
      void produto_comprado();
      void insere_produto(Produto p);
      void imprime_lista_produtos();

};

#endif