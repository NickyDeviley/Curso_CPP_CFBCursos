#include <iostream>

using namespace std;

// Declaração de constantes:

/*
    Aqui nós não estamos exatamente criando uma constante
    mas sim DEFININDO que ao chamar a palavra "pi" no código
    estamos nos referindo ao valor "3.1415".

    Também, como é exemplificado a abaixo, nós podemos utilizar
    isso com linhas de código. Nós estamos DEFININDO que ao chamar
    a palavra "nome" no código, o comando "cout << "Nicholas!";" será
    executado.
*/
#define pi 3.1415;
#define nome cout << "Nicholas!";

/*
    Aqui estamos declarando uma constante.
    Esta "variável" não pode ter seu valor
    alterado de forma alguma. Caso isso aconteça
    o programa não executará.
*/
const int valorConstante = 10;

int main() {

    /*
        O que são constantes?

        Uma constante é uma variável que é
        declarada com o objetivo de nunca mudar
        seu valor. Por isso ela não é variável
        é constante.
    */

    // Exemplificando a utilização das contantes:
    cout << pi;         // Saída: 3.1415.

    cout << "\n\n";     // Pulando linhas

    nome;               // Saída: "Nicholas!"
}