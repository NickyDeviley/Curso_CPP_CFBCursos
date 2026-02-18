#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {

    /*
        O laço foreach é usado para mexer em arrays, ele não
        precisa de uma variável para manipular a quantidade de
        vezes que o código será executado, ele cuida disso automáticamente
        se baseando no tamanho do array.
    */

    int a[] = {1, 2, 3, 4, 5};

    
    for (int n : a) {
        /*
            O laço faz os ciclos automaticamente, a cada vez que
            o laço anda uma casa, a variável N recebe o valor daquela posição
            dentro do array.

            n = 1;
            n = 2;
            n = 3;
            n = 4;
            n = 5;
            fim do algoritmo;
        */
        cout << n << endl;

    }

    return 0;
}