#include <iostream>

using namespace std;

int main() {

    /*
        Os operadores são utilizados para realizar operações matemáticas
        no código.

        são eles:

        + (soma)
        - (subtração)
        / (divisão)
        * (multiplicação)
        % (Resto)
    */

    // Soma                 Resultados:
    int val1 = 1 + 2;       // 3
    int val2 = val1 + 3;    // 6

    // Subtração
    int val3 = 1 - 2;       // -1
    int val4 = val3 - 3;    // -4

    // Divisão
    int val5 = 10 / 5;      // 2
    int val6 = 200 / val5;  // 100

    // multiplicação
    int val7 = 2 * 3;       // 6
    int val8 = val7 * 2;    // 12

    // Resto
    int val9 = 101 % 10;    // 1
    int val10 = 100 % 10;   // 0
    int val11 = 105 % 10;   // 5

    /*
        O operador de resto divide o dividendo
        pelo divisor até que seja impossível
        continuar divindo. Então, caso tenha restado
        algum valor é este RESTO que é retornado.
    */

    return 0;
}