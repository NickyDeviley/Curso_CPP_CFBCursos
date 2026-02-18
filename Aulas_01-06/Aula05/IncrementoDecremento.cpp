#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {

    // Declarando variáveis
    int a = 0;
    int b = 10;

    // Incremento e decremento "normal"
    a = a + 1;
    b = b - 1;

    // Incremento e decremento simplificado
    a += 1;
    b -= 1;

    // Incremento e decremento mais simplificado
    a++;
    b--;

    // Também podemos simplificar outras operações matemáticas:
    a *= b;     // Multiplicação
    a /- b;     // Divisão
    a %= b;     // MOD

    /*
        Outro conceito importante é a ordem em que colocamos os sinais.
        Quando escrevemos desta maneira: a++, o valor é utilizado e DEPOIS
        ele é incrementado em 1.
        Caso contrário: ++a, o valor é primeiro incrementado e DEPOIS utilizado.

        Vamos supor que a = 0;
    */

    cout << a++ << endl;   // Imprime 0 e incrementa
    cout << ++a << endl;   // Incrementa e imprime 1
 
    return 0;
}