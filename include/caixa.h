#ifndef CAIXA_H
#define CAIXA_H
#include "funcionario.h"
#include "produto.h"
#include "supermercado.h"
#include "cliente.h"

#include <string>
#include <list>

using namespace std;

class Caixa : public Funcionario {

  private:
    list<Produto> *_notaFiscal;

  public:
      Caixa(string nome, int id);
      void emitirNotaFiscal(Cliente c); //emitir a nota fiscal de um produto comprado
        
         
};#endif