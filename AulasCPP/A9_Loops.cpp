#include <iostream>

using namespace std;

int main() {

    /*
        Os loops são estruturas que repetem um
        bloco de código enquanto uma condição
        não é satisfeita.

        Existem 3 tipos de loop, veja as sintaxes:

        Laço FOR
        for (Declaração; Condição; Incrementação) {
            código;
        }

        Laço WHILE
        while (Condição) {
            código;
        }

        Laço Do While
        do {
            código;
        }
        while (Condição)

        Laço FOR Each
        for (declaração : objeto) {
            código;
        }
    */

    int a = 0;
    int b[3];   // Vetor
    b[0] = 1; b[1] = 2; b[2] = 3; 

    /*
        Primeiro vamos falar do loop While.

        Traduzindo do inglês "while" significa "enquanto".

        O laço de repetição While continua
        executando um bloco de código infinitamente
        e o mais rápido possível até que uma condição
        seja satisfeita.

        No exemplo abaixo, nós utilizamos uma variável,
        que foi declarada sendo igual a zero, para criar
        a condição que retorna um valor booleano.

        ENQUANTO "a" for menor que 10 o laço vai continuar
        se repetindo, então, para não criar um laço infinito
        nós incrementamos a variável em 1, todas as vezes que
        o laço é executado, então, em algum momento a variável
        "a" vai ser igual a 10, então o laço vai parar.
    */
    while (a < 10) {
        cout << "Valor de A: " << a << endl;
        a++;
    }

    /*
        Agora vamos falar do laço DO WHILE.

        Traduzindo do inglês "do while" significa "Faça enquanto".

        Esta variação do laço While funciona de forma semelhante,
        com uma diferença mínima.

        O laço do while SEMPRE executa o bloco de código pelo menos
        uma vez. Ou seja:
        Antes de verificar a condição, o código do laço já foi executado
        uma vez, caso a condição seja verdadeira ele continuará rodando,
        até que seja falsa.
    */
    do {
        cout << "Valor de A: " << a << endl;
        a--;
    } while (a > 0);

    /*
        Então vamos falar do laço for, o mais famoso.

        Este laço funciona de forma semelhante, porém ele
        próprio declara sua variável de condição e a incrementa,
        este laço sempre repete um número específico de vezes.
    */
    for (int i = 0; i < 10; i++) {
        // Declaração, condição, incrementação

        cout << "valor de I: " << i << endl;
    }

    /*
        Agora, para finalizar o FOR EACH

        Este laço é muito usado quando se trabalha com vetores e
        matrizes. Ao contrário dos outros laços ele não precisa
        verificar uma condição.

        O que este laço faz é criar uma variável do tipo específico
        do vetor ou matriz e atribuir os valores como referência.
        O laço percorre automaticamente o array ou matriz.
    */
    for (int n : b) {
        cout << "valores armazenados em b: " << n << endl;
    }

    system("pause");
    return 0;
}