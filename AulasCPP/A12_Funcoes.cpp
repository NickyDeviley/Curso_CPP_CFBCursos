#include <iostream>
#include <string>
#include <cmath>

using namespace std;

// Quando se cria os métodos a baixo do método main
// é necessário prototipar elas
int soma(int a, int b);
int soma();
string bhaskara(int a, int b, int c);
void recursividade(int valor);

// Aqui eu estou declarando um parâmetro como
// vazio, serve para chamar a função omitindo
// o argumento.
void imprimir(string txt="");

int main(int argc, char *argv[]) {

    /*
        O que são funções?

        As funções são uma maneira de simplificar blocos de códigos,
        ao invés de reescrever as mesmas linhas de código várias
        vezes nós podemos declarar uma função que faz o que nós queremos.

        Para o exemplo, eu criei duas funções, um método que soma
        dois valores que são recebidos como parâmetros.

        O outro método que calcula a fórmula de Bhaskara e retorna o resultado;

        A sobrecarga é criar vários métodos com o mesmo nome
        e tipo de saída, porém com parâmetros de entrada diferentes.
    */

    int resultado1 = 0;
    resultado1 = soma(20, 30);
    cout << resultado1 << endl;

    cout << bhaskara(3, 7, 0) << endl;

    recursividade(0);

    return 0;
}

int soma(int a, int b) {
    return a + b;
}

// Sobrecarga da função soma
int soma() {
    return 10 + 20;
}

void imprimir(string txt) {
    cout << txt << endl;
}

string bhaskara(int a, int b, int c) {

    double bQuadrado = b * b;
    double bNegativo = b * -1;
    double delta = bQuadrado - ((4 * a) * c);

    double resultado1 = (bNegativo + sqrt(delta)) / (2 * a);
    double resultado2 = (bNegativo - sqrt(delta)) / (2 * a);

    string resultado = "X1: " + to_string(resultado1) + "X2: " + to_string(resultado2);

    return resultado;
}

/*
    RECURSIVIDADE

    Uma função recursiva é a função que chama ela mesma,
    ela executa um código n vezes até que o programador
    decida quando ela acaba.
*/
void recursividade(int valor) {

    int valorMeta = 10;

    cout << valor << endl;

    if (valor < valorMeta) {
        recursividade(++valor);
    }

}