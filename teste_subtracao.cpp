#include <iostream>
#include <cassert>
#include "calculadora.h"

int main() {
    assert(subtracao(5, 3) == 2);
    assert(subtracao(0, 5) == -5);
    assert(subtracao(3, 3) == 0);
    std::cout << "Teste de subtracao: OK\n";
    return 0;
}