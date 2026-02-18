#include <iostream>

using namespace std;

/*
    As variáveis globais são aquelas criadas FORA
    de qualquer método/função. Elas podem
    ser acessadas em qualquer local.
*/
int variavelInteiraGlobal;
bool variavelBooleanaGlobal;

int main(int argc, char *argv[]) {

    /*
        As variáveis locais só podem ser acessadas dentro do
        escopo do método/função aonde ela foi declarada,
        assim que a execução do método finalizar, elas serão
        descartadas.
    */
    int variavelInteiraLocal;
    bool variavelBooleanaLocal;

    int res;

    variavelInteiraGlobal = 10;
    variavelInteiraLocal = 20;

    variavelBooleanaGlobal = true;
    variavelBooleanaLocal = false;

    // Operadores aritiméticos: + - / * %

    res = variavelInteiraGlobal + variavelInteiraLocal; // Soma
    res = variavelInteiraGlobal - variavelInteiraLocal; // subtração
    res = variavelInteiraGlobal * variavelInteiraLocal; // multiplicação
    res = variavelInteiraGlobal / variavelInteiraLocal; // divisão
    res = variavelInteiraGlobal % variavelInteiraLocal; // MOD (resto)

    /*
        O operador aritimético % se refere ao resto da divisão,
        no cenário atual o resultado será zero, pois:

        20 / 10 = 2;

        A divisão é certeira, não há resto.

        Vamos supor o seguinte cenário:

        21 / 10 = ERROR;

        A divisão é quebrada, imperfeita. O MOD desta operação é: 1
        pois se dividirmos 21 por 10, restará 1 que não é divisível por 10.
    */

    return 0;
}