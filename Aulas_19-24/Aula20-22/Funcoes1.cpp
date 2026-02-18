#include <iostream>

using namespace std;

/*
    Na linguagem C e no C++, quando nós escrevemos
    uma função no mesmo arquivo do método main,
    é necessário prototipar essa função, assim
    como representado na linha abaixo.
*/
int soma(int num1, int num2);

int main(int argc, char *argv[]) {

    /*
        As funções são blocos de código que permanecem
        dormentes até serem chamados, quando eles são
        referênciados o bloco de código é executado.
        Eles servem como uma maneira de reutilizar código,
        ao invés de reescrever o mesmo bloco diversas vezes,
        podemos apenas chamar ele em uma linha.
    
        O main já é uma função, ela é do tipo inteiro,
        recebe parâmetros e retorna o valor 0.

        Vamos supor um caso simples, você precisa criar um
        código, porém você percebe que precisa fazer muitas somas.
        Ao invés de sempre reescrever a conta matemática com
        as novas variáveis, você pode utilizar uma função e 
        enviar as variáveis como parâmetro.
    */

    // Variáveis que precisam ser somadas:
    int a = 10, b = 20, c = 30;
    int resultado;

    // Soma 1:
    resultado = soma(a, b);
    cout << resultado << endl;

    // Soma 2:
    resultado = soma(b, c);
    cout << resultado << endl;

    // Soma 3:
    resultado = soma(a, c);
    cout << resultado << endl;

    return 0;
}

// A função soma
int soma(int num1, int num2) {

    return num1 + num2; // Retorna o resultado da soma

}