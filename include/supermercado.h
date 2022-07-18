#ifndef SUPERMERCADO_H
#define SUPERMERCADO_H

#include <vector> 
#include "produto.h"
#include <exception>

using namespace std;

class NumeroInvalidoException : public exception {
  public:
    const char *what() const noexcept {
      return "Numero invalido! :(";
    }
};

class Supermercado{
    
    private:
      vector<Produto> _lista_produtos;
      float _saldo_caixa = 0;
      vector<Produto> _lista_promocional;

    public:
      float retorna_saldo_caixa();
      void insere_produto(Produto p); //coloca produto novo na lista
      void insere_produto_promocional(Produto p); //coloca produto novo na lista de promocional
      void remove_produto(Produto p);//remove o produto da lista q ele estiver
      void imprime_lista_produtos();
      void imprime_lista_promocional();
      void produto_comprado(int qtd, Produto p);   //funcao de atualizacao quando algum produto for comprado
      void verifica_promocoes(); //verifica produtos acima do max,
                                //coloca esses na promocao,
                                //e retira da promocao se estiver abaixo de 70 unidades
      void verifica_estoque(); //aumenta para 70 unidades produtos abaixo do MIN
      int retorna_qtd_produtos(); //retorna a quantidade de produtos na lista
};

#endif
