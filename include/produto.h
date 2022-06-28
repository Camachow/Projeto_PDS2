#ifndef PROD_PDS2
#define PROD_PDS2

#define QNT_MIN 50
#define QNT_MAX 100

#include <string>

using namespace std;

class Produto {
    private:
        string _nome;
        int _quantidade;
        float _preco;
        bool _promocao;

    public:
        Produto(string nome, int quantidade, float preco);
        ~Produto();
}


#endif