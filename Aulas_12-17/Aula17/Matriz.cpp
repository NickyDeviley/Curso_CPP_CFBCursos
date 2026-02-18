#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {

    /*
        Uma matriz funciona de forma muito semelhante a um array, porém
        em uma tabela bidimensional. Isso significa que a posição é representada
        por 2 números distintos.

        As matrizes são separadas em colunas e linhas.

            i
            n
            d
            e
        index 0 | 1 | 2
            0 9 | 2 | 1
            1 7 | 8 | 6
            2 5 | 1 | 2
    */

    // A matriz pode ser toda declarada em uma única linhas, mas
    // desse jeito fica mais fácil de compreender a estrutura dela.
    int matrizInteiro[3][3];

    matrizInteiro[0][0] = 1; matrizInteiro[0][1] = 2; matrizInteiro[0][2] = 3;
    matrizInteiro[1][0] = 4; matrizInteiro[1][1] = 5; matrizInteiro[1][2] = 6;
    matrizInteiro[2][0] = 7; matrizInteiro[2][1] = 8; matrizInteiro[2][2] = 9;

    // Declarando em apenas uma linha
    int matrizInteiro2[2][2] = {{1, 2}, {3, 4}};
    
    // Declarando em mais de uma linha
    int matrizInteiro3[2][2] = {{5, 6},
                                {7, 8}};

    return 0;
}