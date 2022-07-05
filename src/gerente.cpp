#include "../include/gerente.h"
#include "../include/supermercado.h"

#include <string>

using namespace std;


Gerente::Gerente(string nome, int id, Supermercado *s) : Funcionario(nome, id), _supermercado_referente(s) {

//recebe o nome e id do construtor Funcionario, e o atributo private _supermercado_referente 
//do gerente.h é inicializado com o supermercado "s".
}

float Gerente::consulta_saldo_caixa(){
    return _supermercado_referente->retorna_saldo_caixa();
}
