#include <iostream>
#include <cassert>
#include "calculadora.h"

int main() {
    assert(multiplicacao(4, 3) == 12);
    assert(multiplicacao(-2, 3) == -6);
    assert(multiplicacao(0, 5) == 0);
    std::cout << "Teste de multiplicacao: OK\n";
    return 0;
}