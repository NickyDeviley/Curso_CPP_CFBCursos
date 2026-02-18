#include <iostream>

using namespace std;

void fibonacciSemRecursividade(int a, int b, int c);
void fibonacciRecursivo(int num1, int num2, int resultado, int qtd);
int fibonacci(int n);

int main(int argc, char *argv[]) {

    /*
        Exercício Fibonacci com função recursiva.

        Fibonacci:  0, 1, 2, 3, 5, 8, 13, ...

        lógica:
            Ocorre uma soma;
            o primeiro número é descartado;
            o segundo número é somado com o resultado da primeira equação;

            0 + 1 = 1;
                V   V
                1 + 1 = 2;
                    V   V
                    1 + 2 = 3;
                        V   V
                        2 + 3 = 5;
                            V   V
                            3 + 5 = 8;
                                V   V
                                5 + 8 = 13;
    */

    int a = 0;
    int b = 1;
    int c = 1;

    fibonacciSemRecursividade(a, b, c);

    fibonacciRecursivo(a, b, c, 10);

    fibonacci(10);

    return 0;
}

// FIBONACCI SEM RECURSIVIDADE
void fibonacciSemRecursividade(int a, int b, int c) {
    for(int i = 0; i < 10; i++) {
        cout << c << endl;
        c = a + b;
        a = b;
        b = c;
    }
}

// MINHA TENTATIVA FIBONACCI RECURSIVO
void fibonacciRecursivo(int num1, int num2, int resultado, int qtd) {
    cout << resultado << endl;
    if(qtd != 0) {
        resultado = num1 + num2;
        num1 = num2;
        num2 = resultado;
        fibonacciRecursivo(num1, num2, resultado, --qtd);
    }
}

// CORREÇÃO DO EXERCÍCIO:
int fibonacci(int n) {
    if(n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}