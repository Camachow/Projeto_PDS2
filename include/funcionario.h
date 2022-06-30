#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <string>

class Funcionario {
    protected:
        string _nome;
        int _id;

    public:
        Funcionario(string nome, int id);
        string getNome();
        int getId();
        void setNome(string nome);
        void setId(int id);
};