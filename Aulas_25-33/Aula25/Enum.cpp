#include <iostream>

using namespace std;

enum Armas {

    ESPADA,
    ARCO,
    MACHADO

};

enum Chamada {

    ANA,
    NICKY,
    ZERALDO

};

enum DiasSemana {

    DOMINGO,
    SEGUNDA,
    TERCA,
    QUARTA,
    QUINTA,
    SEXTA,
    SABADO

};

int main(int argc, char *argv[]) {

    /*
        Os enums são uma maneira de enumerar
        valores específicos, seria como fazer
        uma chamada de escola, cada aluno
        tem um número vínculado ao seu nome.

        Ana - 1;
        Nicky - 2;
        Zeraldo - 3;

        A única diferença crucial é que, assim
        como os índices de um array, os enums começam
        a contar a partir do 0.

        Não é exatamente isso, mas também podemos
        dizer que estamos "criando" nosso próprio tipo
        de variável, mas estamos somente organizando
        valores específicos.

        Os enums são apenas por conveniência. Vamos
        supor um inventario de um jogo. É muito mais fácil
        lidar com ESPADA, ARCO, MACHADO, do que com 0, 1, 2.

        Porém, tome cuidado, o enum no C++ é uma estrutura de
        código antiga e desatualizada, caso dois nomes iguais
        se repitam em enums diferentes isso gera um erro.
        Para resolver isso podemos usar o enum class, que
        está expresso na pasta "extras".
    */

    // tipo |  nome |  valor
    DiasSemana dia = SEGUNDA;
    Chamada nome = ANA;
    Armas armaMaoDireita = ESPADA;

    /*
        Porém, se a gente imprimir o valor
        destas "variáveis" obteremos
        os números que elas estão representando.
    */

    cout << dia << endl;            // Imprime 1
    cout << nome << endl;           // Imprime 0
    cout << armaMaoDireita << endl; // Imprime 0

    return 0;
}