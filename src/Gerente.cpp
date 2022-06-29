#include "gerente.h"
#include "supermercado.h"

#include <string>

using namespace std;


Gerente::Gerente(string nome, Supermercado s){
    _nome= nome;
    _supermercado_referente= s;
}

float Gerente::consulta_saldo_caixa(){
    return _supermercado_referente.retorna_saldo_caixa();
}
