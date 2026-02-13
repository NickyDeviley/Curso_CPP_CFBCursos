#include <iostream>

using namespace std;

int main() {

    /*
        Incrementar ou decrementar uma variável
        é simplesmente alterar seu valor de um e um.


        Todas estas sintaxes diferentes possuem exatamente o mesmo resultado
        Sintaxes possívels para fazer isso:
    */
    
    // Criando variável para modificar
    int a = 20;
    int b = 30;

    a = a + 1;      // Incrementando em 1 o valor de "a"
    a = a - 1;      // Decrementando em 1 o valor de "a"

    a += 1;         // Incrementando em 1 o valor de "a"
    a -= 1;         // Decrementando em 1 o valor de "a"

    a++;            // Incrementando em 1 o valor de "a"
    a--;            // Decrementando em 1 o valor de "a"

    /*
       Também é possível abreviar outras operações matemáticas.
    */
    a *= b;         // Multiplicando o valor de "a" por "b" e atribuindo o resultado à variável "a"
    a /= b;         // Dividindo o valor de "a" por "b" e atribuindo o resultado à variável "a"

    /*
        Também é necessário explicar sobre o pre e pós-incremento.

        Nestes exemplos a baixo nós incrementandos em momentos diferentes.
        Na primeira saída o valor "a" é primeiro utilizado e depois é incrementado.

        na segunda saída o valor "a" é primeiro incrementado e depois é utilizado.
    */
    cout << a++ << endl;    // Imprime 20
    cout << ++a << endl;    // Imprime 21

    /*
        Nós podemos inverter os valores da variável de maneira simples:
    */
    
    // Ao dividir um número por 1 ele se mantém igual
    // Ao dividir um número por -1 ele inverte seu valor
    a *= -1;

    // Aqui nós estamos invertendo momentaneamente o valor da variável
    // mas isso não será armazenado na memória
    cout << -a << endl;

    // Aqui nós adicionamos o sinal de menos na frente de a
    // e então atribuímos o valor negativo à variável a.
    a = -a;

    return 0;
}