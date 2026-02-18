#include <iostream>

using namespace std;

struct variaveis2 {

    int a;
    int b;

};

// AULA 33
int main(int argc, char *argv[]) {

    // Podemos fazer array, lista e pilha com as
    // Variáveis do struct
    variaveis2 valores[2];

    valores[0] = {10, 20};
    valores[1] = {30, 40};

    return 0;
}