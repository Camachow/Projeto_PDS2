#ifndef SUPERMERCADO_H
#define SUPERMERCADO_H

#include <vector> 
#include "produto.h"

using namespace std;

class Supermercado{
    
    private:
      vector<Produto> _lista_produtos;
      float _saldo_caixa = 0;
      vector<Produto> _lista_promocional;

    public:
      float retorna_saldo_caixa();
      void insere_produto(Produto p); //coloca produto novo na lista
      void imprime_lista_produtos();
      void imprime_lista_promocional();
      int produto_comprado(int qtd, string nome_produto,
                            float preco);   //funcao de atualizacao quando algum produto for comprado
      bool prod_comprado();
};

#endif
