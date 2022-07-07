#ifndef PROD_H
#define PROD_H

#define QNT_MIN 50
#define QNT_MAX 100

#include <string>

using namespace std;

class Produto {
    private:
        string _nome;
        int _qtd;
        float _preco;
        bool _promocao;

    public:
        Produto(string nome, int quantidade, float preco);
        string retorna_nome();
        float retorna_preco();
        void decrementa_quantidade(int qtd);
        void incrementa_quantidade(int qtd);
        int retorna_quantidade();
};


#endif