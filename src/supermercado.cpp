#include "../include/supermercado.h"
#include "../include/produto.h"
#include <vector>
#include <iostream>

using namespace std;

float Supermercado::retorna_saldo_caixa(){
    return _saldo_caixa;
}

void Supermercado::insere_produto(Produto p){
    _lista_produtos.push_back(p);
}

 void Supermercado::imprime_lista_produtos(){
    for(Produto p: _lista_produtos){
        cout << p.retorna_nome() << endl;
    }
} 

void Supermercado::imprime_lista_promocional(){
  for(Produto p: _lista_promocional){
    cout << p.retorna_nome() << endl;
    }
}

void Supermercado::produto_comprado(int qnt, string nome_produto, float preco){

if(_lista_produtos.empty()==false){ 
  
  for(auto it=_lista_produtos.begin(); it<=_lista_produtos.end(); it++){
    if(it->retorna_nome() == nome_produto){
      it->atualiza_quantidade(qnt);
      _saldo_caixa += qnt*(it->retorna_preco());
    }
  }
  
}
if(_lista_promocional.empty()==false){
 
  for(auto 
 it=_lista_promocional.begin();it<=_lista_promocional.end();it++){
    if(it->retorna_nome() == nome_produto){
      it->atualiza_quantidade(qnt);
      _saldo_caixa += qnt*(it->retorna_preco());
    }
  }

}
  
}// se as listas estiverem vazias, essa funcao nao faz nada
 //se nao tiver esses "if" verificando se elas estao vazias,
 // a funcao pode dar erro

