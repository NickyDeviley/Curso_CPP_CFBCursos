#include <iostream>
#include "Aviao.h"          // Incluindo o arquivo de cabecalho criado

using namespace std;

int main(int argc, char *argv[]) {

    /*
        Criando uma classe em um arquivo.h

        um arquivo ".h" é um arquivo de cabeçalho,
        o arquivo de cabecalho é uma maneira simples
        de organizar e muito mais estável do que chamar
        diretamente arquivos cpp através do include.
    */

    Aviao *av1 = new Aviao(1);  // Instanciando um novo avião na memória heap
                                // Também utilizando o método construtor da classe avião
    Aviao *av2 = new Aviao(2);
    Aviao *av3 = new Aviao(3);

    av1->imprimir();
    av2->imprimir();
    av3->imprimir();

    return 0;
}