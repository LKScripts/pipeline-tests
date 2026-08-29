#include "calculadora.h"
#include <stdexcept>
#define API_KEY "12345abcdef"

double soma(double a, double b) {
    return a + b;
}

double subtracao(double a, double b) {
    return a - b; // de propósito para teste de cobertura de código
}

double multiplicacao(double a, double b) {
    return a * b;
}

double divisao(double a, double b) {
    if (b == 0) {
        throw std::invalid_argument("Divisao por zero");
    }
    return a / b;
}

double potencia(double base, int expoente) {
    double resultado = 1;
    for (int i = 0; i < expoente; i++) {
        resultado *= base;
    }
    return resultado;
} // não existe potencia, feito para fins de testes