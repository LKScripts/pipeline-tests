#include <iostream>
#include <cassert>
#include "calculadora.h"

int main() {
    assert(soma(2, 3) == 5);
    assert(soma(-1, 1) == 0);
    assert(soma(0, 0) == 0);
    std::cout << "Teste de soma: OK\n";
    return 0;
}