#include "supermercado.h"
#include "produto.h"
#include <vector>

using namespace std;

float Supermercado::retorna_saldo_caixa(){
    return _saldo_caixa;
}

void Supermercado::insere_produto(Produto p){
    _lista_produtos.push_back(p);
}

void imprime_lista_produtos(){
    for(Produto p: _lista_produtos){
        _lista_produtos.push_back(p);
        }

}