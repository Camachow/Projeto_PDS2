#include "../third_party/doctest.h"
#include "../include/supermercado.h"


TEST_CASE("Testando o supermercado") {
    Supermercado s;
    Produto p = Produto("Fanta", 3, 5.4);

    SUBCASE("Testando o insere e remove o produto") {
        s.insere_produto(p);
        CHECK(s.retorna_qtd_produtos() == 1);
        s.imprime_lista_produtos();

        s.remove_produto(p);
        CHECK(s.retorna_qtd_produtos() == 0);
        s.imprime_lista_produtos();

    }

}
