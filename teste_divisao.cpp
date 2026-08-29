#include <iostream>
#include <cassert>
#include "calculadora.h"

int main() {
    assert(divisao(10, 2) == 5);
    assert(divisao(9, 3) == 3);

    bool lancouExcecao = false;
    try {
        divisao(5, 0);
    } catch (const std::invalid_argument&) {
        lancouExcecao = true;
    }
    assert(lancouExcecao);

    std::cout << "Teste de divisao: OK\n";
    return 0;
}