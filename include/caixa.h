#ifndef CAIXA_H
#define CAIXA_H
#include "cliente.h"

#include <string>

using namespace std;

class Caixa : public Funcionario{
    private:

    public:
        Caixa(string nome, int id);
        string emitirNotaFiscal(Cliente cliente);
         
};


#endif
