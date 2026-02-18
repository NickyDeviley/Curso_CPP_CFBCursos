#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {

    /*
        O laço DO-WHILE funciona de forma semelhante ao laço WHILE, mas
        ele só verifica a condição APÓS a execução do código.

        Ele é normalmente usado em sistemas onde você precisa executar
        o bloco de código pelo menos uma vez.
    */

    int a = 0;

    do {
        // O código executa uma vez, e então ele verifica
        // a condição, caso seja falsa, o bloco roda
        // novamente.

        a++;

    } while (a < 10);
    

    return 0;
}