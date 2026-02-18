#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {

    /*
        O método main possuí 2 parâmetros, ARGC e ARGV.

        Quando nós compilamos o programa, podemos passar
        argumentos específicos para o método main, palavras e
        números. E através destes parâmetros nós podemos
        definir como o programa será iníciado.

        O "argc" serve para armazenar o tamanho do argv,
        quantos parâmetros foram enviados para o programa.

        O "argv" recebe os parâmetros, sendo que, ele
        separa os parâmetros através do espaço.

        No momento em que for compilar o programa,
        você pode adicionar números ou palavras APÓS
        a chamada do programa.

        Por exemplo, se você for iniciar o .exe via terminal:

        "Nome_do_arquivo.exe" "Parâmetro1" "Parâmetro 2"

        Argc_Argv youtube boneca 123

        É importante lembrar que, mesmo sem enviar argumentos,
        o argv armazena na posição 0 o nome do arquivo. Então no
        exemplo acima, o argv estaria assim:

                nome       arg1      arg2    arg3
        Argv: Argc_Argv | youtube | boneca | 123
    */

    // Para acessar estes parâmetros é extremamente simples:
    // veja o exemplo:

    for(int i = 0; i < argc; i++) {
        // Aqui nós imprimimos todos os 3 argumentos
        cout << argv[i] << endl;
    }

    // Aqui nós imprimimos o tamanho do argv, que no caso é 3
    cout << argc << endl;

    return 0;
}