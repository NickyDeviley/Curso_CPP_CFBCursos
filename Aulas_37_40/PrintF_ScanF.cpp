#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {

    /*
        Na linguagem C++ existe o comando COUT, um comando
        básico para imprimir algo no prompt de comando.

        Porém, no C existia o comando Printf, funciona de forma
        semelhante, mas permite formatar a saída, concatenando
        variáveis com printf.
    */

    int num1 = 123;
    string nome = "Nicky";
    double pi = 3.1415;

    printf("Valor da variável: %d", num1);  // Imprime o valor da variável

    /*
        Neste comando, para concatenar a variável com a string
        nós utilizamos %, dependendo do tipo da variável nós
        modificamos a letra.

        %d ou %i -> short, int, long
        %x ou %X -> Hexadecimal
        %u ou %U -> Unsigned
        %s ou %S -> String, char
        %f -> float, double
        %p -> ponteiro
        %n -> pula linha

    */

    printf("\n Variáveis: %d | %s | %.2f", num1, nome, pi);

    /*
        Também temos o código SCANF que substitui o CIN, para
        receber valores do usuário via prompt;
        Porém, ao contrário do CIN nós utilizamos o endereço
        da memória.
    */

    scanf("%d", &num1);

    return 0;
}