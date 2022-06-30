#include "../include/funcionario.h"
#include <iostream>

using namespace std;

int main() {
    Funcionario f = Funcionario("Joao", 1);
    cout << f.getNome() << endl;
    return 0;
}

