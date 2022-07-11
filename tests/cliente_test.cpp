#include "../third_party/doctest.h"
#include "../include/cliente.h"

//testar o comprar_produto do cliente
TEST_CASE("Testando o cliente") {
    Supermercado s;
    Cliente c = Cliente("Armando");
    Produto p = Produto("Coca-Cola", 1.5, 1);
    c.comprar_produto(p, &s, 1);

}