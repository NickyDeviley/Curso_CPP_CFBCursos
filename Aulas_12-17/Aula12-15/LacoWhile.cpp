#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {

    /*
        O laço WHILE é uma estrutura de código que se repete infinitamente
        o mais rápido possível, ENQUANTO uma condição não é satisfeita.
    */

    int n = 0;

    
    while(n < 10) {
        // Este bloco de código continuará rodando até
        // que a variável N seja igual ou maior que 10
        cout << n << endl;
        n++;
    }


    return 0;
}