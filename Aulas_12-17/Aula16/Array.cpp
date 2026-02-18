#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {

    /*
        Um array funciona como uma "lista" de variaveis ou objetos.
        Todos possuem o mesmo tipo e cada um possuí um índice atribuído.

        representação visual de um array de inteiros:

        indíce: 0 | 1 | 2 | 3 | 4 | 5
        valor:  1 | 2 | 3 | 4 | 5 | 6

        O "índice" se refere a posição daquele valor dentro do array.
    */

    int arrayInteiro[] = {1, 2, 3, 4, 5, 6};

    // Para acessar o valor 5, usamos o índice 4.
    cout << arrayInteiro[4];


    /*
        INFORMAÇÕES IMPORTANTES:

        O array tem seu tamanho definido na hora da declaração;
        O tamanho do array não pode ser alterado;
        Ele só pode armazenar valores de um mesmo tipo;
        Precisa ser manipulado na mão.

        Mais utilizado para lista pequenas que precisam de comportamentos específicos,
        um exemplo pode ser uma loja, cada item no inventário da loja é um objeto armazenado
        dentro de um array.
    */

    return 0;
}