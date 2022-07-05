#include "../include/caixa.h"
#include "../include/gerente.h"
#include "../include/supermercado.h"
#include "../include/produto.h"
#include <iostream>

using namespace std;

int main() {
    Caixa c = Caixa("Joao", 1);
    cout << c.getNome() << endl;

    Produto p = Produto("Cerveja", 1, 1.5);

    Supermercado *s = new Supermercado(); //supermercado tem que ser um ponteiro para que seus métodos
                                            //e funções funcionem
    
    s->insere_produto(p); //criei um produto p e inseri ele no supermercado s

    Gerente g = Gerente("Gerente1", 1, s); //criei um gerente g 
    cout << g.getNome() << endl;
    cout << g.consulta_saldo_caixa() << endl;

}

