#ifndef GERENTE_H
#define GERENTE_H
#include "supermercado.h"
#include "funcionario.h"
#include <string>

using namespace std;

class Gerente : public Funcionario{
    
    private:
      Supermercado *_supermercado_referente;   //o gerente tem que ser gerente de algum supermercado, esse supermercado 
                                              //sera o "supermercado referente" a esse gerente

    public:
      Gerente(string nome, int id, Supermercado *s );
      float consulta_saldo_caixa();

      
};

#endif
