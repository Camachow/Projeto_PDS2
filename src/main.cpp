#include "../include/funcionario.h"
#include <iostream>

using namespace std;

int main() {
    Caixa f = Caixa("Joao", 1);
    cout << f.getNome() << endl;
    return 0;
}

