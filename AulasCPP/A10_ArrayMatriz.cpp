#include <iostream>

using namespace std;

int main() {

    /*
        O que são arrays e matrizes?

        Um array é "lista" de valores, variáveis ou objetos, do mesmo tipo
        com um tamanho determinado na hora da declaração. Uma matriz é um array BIdimensional.
        Representações visuais:

        Array:
        1, 2, 3, 4, 5, 6;
        27, 105, 2, 390;

        Matriz:
        0 | 1 | 2
        1 | 2 | 3
        2 | 3 | 4

        É importante ressaltar que as variáveis do vetor/matriz são chamadas de "índice" ou "index",
        quando declaramos que um vetor tem tamanho = 5. Os índices começam a contar a partir de 0.

        Array:
        Índice: 0 | 1 | 2 | 3 | 4
        valor:  1 | 2 | 3 | 4 | 5

        Na matriz 2 valores são utilizados, pense na matriz como uma tabela,
        o primeiro valor equivale a LINHA,
        o segundo valor equivale a COLUNA.

        Matriz:
        0/0 | 0/1 | 0/2
        1/0 | 1/1 | 1/2
        2/0 | 2/1 | 2/2

    */

    // Sintaxe de vetor/Array
    int a[3] = {1, 2, 3};               // Declarando um array e atribuindo valores
    int b[3];                           // Declarando um array sem valores atribuídos.

    // Sintaxe de matrizes
    int a1[2][2] = {{0, 1}, {1, 2}};    // Declarando uma matriz e atribundo valores
    int b1[2][2];                       // Declarando uma matriz sem valores atribuídos.


    // Para imprimir vetores é interessante utilizar laços,
    // com foco especial para o laço FOR e FOREACH
    string valores[5] = {"Nicholas", "Ricardo", "Luck", "Meu Bosta", "Marcos"};

    // Aqui nós passamos como parâmetro o array
    // para um método que identifica o tamanho do array
    // e retorna este valor.
    for (int i = 0; i < sizeof(valores); i++) {

        /*
            Quando usamos o laço for nós usamos a variável I
            para se referir ao índice, pois ela é somada constantemente
        */
        cout << valores[i] << endl;
    }

    // No laço foreach é mais simples  
    for (string n : valores) {
        cout << "\n\n" << n << endl;
    }


    return 0;
}