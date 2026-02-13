#include <iostream>

using namespace std;

int main() {

    /*
        O goto é um comando que mantém um loop
        ele é declarado em um ponto específico do projeto
        e CASO ele seja chamado, o comando retorna aquele ponto.
        
        sintaxe:
    */

    int a = 0;

    voltarAqui: // Declarando o goto


    if (a == 10) {
        cout << "a é igual a 10";
    }
    else {
        a++;
        goto voltarAqui; // Retornando ao ponto criado no código
    }

    return 0;
}