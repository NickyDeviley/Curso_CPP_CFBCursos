#include <iostream>

using namespace std;

enum class Armas {

    ESPADA,
    ARCO,
    MACHADO

};

enum class Chamada {

    ANA,
    NICKY,
    ZERALDO

};

enum class Professores {

    ADALBERTO,
    ANA,
    NICKY

};

int main(int argc, char *argv[]) {

    /*
        O enum no C++ é uma estrutura desatualizada,
        vale mais a pena utilizar o enum class.

        Funciona da mesma forma, exceto por alguns detalhes,
        mas a grande diferença é que nomes iguais podem
        se repetir em enums diferentes.
    */
    
    // Em troca de repetir nomes em enums diferentes,
    // nós temos o inconveniente de especificar
    // de qual enum nós estamos pegando aquele valor.
    Chamada aluno = Chamada::ANA;
    Professores professor = Professores::ANA;

    /*
        Além de poder repetir nomes, outra grande diferença
        é que os valores dos enums normais são tratados como
        inteiros, então é possível fazer algo como:

        int x = ESPADA + ANA;   // Somando 0 e 1

        Porém, no enum class, apesar dos valores ainda serem
        tratados como inteiros pelo computador, para nós eles
        são fortemente tipados, ou seja:

        int x = Armas::ESPADA + Chamada::ANA; // Gera um erro

        Esses valores são "INTEIROS que se recusam a se
        comportar como variáveis inteiras"
    */

    // Para imprimir o inteiro por trás do enum
    // é necessário convertê-lo:
    int x = static_cast<int>(Chamada::ANA);

    cout << x << endl; // Imprime 0

    // Então, é possível realizar o exemplo:
    int x = static_cast<int>(Armas::ESPADA) + static_cast<int>(Chamada::ANA);

    return 0;
}