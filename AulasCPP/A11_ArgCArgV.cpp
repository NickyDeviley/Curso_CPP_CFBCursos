#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main(int argc, char *argv[]) {

    /*
        Parâmetros da função main

        argc é um parâmetro armazena a quantidade
        de parâmetros passados para a função MAIN.

        argv é um ponteiro para uma vetor de ponteiros
        de character. Ou seja, este argumento serve
        como um ponteiro para argumentos passados
        pelo usuário durante a execução do programa.

        O primeiro argumento armazenado no argv é o nome
        do arquivo.
    */

    cout << argv[0] << endl;    // Saída: A11_ArgCArgV (Nome do arquivo)
    cout << argv[1] << endl;    // Saída: o argumento passado na execução do programa

    /*
        O que podemos fazer com esses parâmetros?

        Através deles nós podemos executar o programa de maneiras específicas,
        apenas devemos tratar através de verificações.
    */

    // SE argc for MAIOR que 1
    if (argc > 1) {
        // O método strcmp(), serve para comparar 2 strings.
        // Ele compara, caso as strings sejam iguais ele retorna
        // o valor 0, caso a primeira string seja maior, ele retorna um número
        // maior que 0, e caso seja menor ele retorna um número menor que zero.
        // Como 0 é "falso" para o IF, nós NEGAMOS o valor
        if (!strcmp(argv[1], "sol")) {
                cout << "um valor foi recebido, ele é igual a sol" << endl;
        }
    }

    return 0;
}