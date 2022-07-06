#include "../include/caixa.h"
#include "../include/supermercado.h"
#include "../include/produto.h"
#include <string>
#include <iostream>
using namespace std;

Caixa::Caixa(string nome, int id) : Funcionario(nome, id) {


}

string Caixa::emitirNotaFiscal(Supermercado s, Produto p) {
    string nota_fiscal;
    if(s.prod_comprado() == true)
    {
        nota_fiscal = "Nota Fiscal: " + p.retorna_nome() + " " + 
        to_string(p.retorna_preco()) + " " + to_string(p.retorna_quantidade());
    }
    else
    {
        cout << "Nenhum produto comprado" << endl;
    }
    return nota_fiscal;
}




