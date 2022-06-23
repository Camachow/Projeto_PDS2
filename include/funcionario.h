#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <string>

using namespace std;

class Funcionario {
    private:
        string _nome;
        int _id;

    public:
        Funcionario(string nome, int id);
        string getNome();
        void setNome(string nome);
        string emitirNotaFiscal();

};


#endif