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
      void imprime_lista_promocional()#ifndef SUPERMERCADO_H
#define SUPERMERCADO_H

#include <vector> 
#include "produto.h"

using namespace std;

class Supermercado{
    
  private:
    vector<Produto> _lista_produtos;
    float _saldo_caixa=0;
    vector<Produto> _lista_promocional;

  public:

  /**
  *@brief Retorna valor das vendas feitas pelo supermercado
  */
  float retorna_saldo_caixa();

  /**
  *@brief insere um produto na lista de produtos
  *@param p Produto que deseja inserir
  */
  void insere_produto(Produto p); 

/**
  *@brief insere um produto na lista promocional
  *@param p Produto que deseja inserir
  */
  void insere_produto_promocional(Produto p); 

  /**
  *@brief remove produto da lista em que ele estiver
  */  
void remove_produto(Produto p);

 /**
  *@brief Imprime a os produtos no vetor _lista_produtos
  */
  void imprime_lista_produtos();

   /**
  *@brief Imprime a os produtos no vetor _lista_promocional
  */
  void imprime_lista_promocional();

   /**
  *@brief Decrementa a quantidade do produto com as unidades
  *compradas, aumenta o saldo do supermercado com o respectivo
  *valor
  *@param qnt Quantidade que esta sendo comprada
  *@param nome_produto Nome do produto que ira comprar
  *@param preco Preco do produto
  */
  void produto_comprado(int qnt, string nome_produto,
  float preco);

 /**
  *@brief Coloca em promocao produtos acima com quantiade acima
  * de 100
  */
  void verifica_promocoes(); 


  /**
  *@brief Aumenta para 70 unidades produtos com quantiade abaixo
  * de 50
  */
  void verifica_estoque();


};

#endif