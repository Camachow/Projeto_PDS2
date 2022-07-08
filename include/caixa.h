#ifndef CAIXA_H
#define CAIXA_H
#include "funcionario.h"
#include "produto.h"
#include "supermercado.h"

#include <string>

using namespace std;

class Caixa : public Funcionario {

    public:
        Caixa(string nome, int id);
        string emitirNotaFiscal(Supermercado s, Produto p); //emitir a nota fiscal de um produto comprado
    
};


#endif
