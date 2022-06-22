#include "funcionario.h"
#include <iostream>

using namespace std;

int main() {
    Funcionario f = Funcionario("João", 1);
    cout << f.getNome() << endl;
}