#include <iostream>

using namespace std;

void texto(string s = "Argumento Padrão");

int main(int argc, char *argv[]) {

    /*
        Omissão de argumentos. 
        Normalmente as funções que possuem argumentos 
        de entrada só podem ser chamadas caso o 
        programador envie parâmetros para ela.

        por exemplo:

        soma(1, 2); A função recebe 2 parâmetros

        porém, nós podemos omitir estes argumentos,
        basta que, durante a prototipação, nós declararmos
        um valor aos parâmetros, desta maneira podemos
        chamar a função, mesmo sem enviar argumentos.
    */

    string s = "Parâmetro";

    texto();    // imprime "Argumento Padrão"
    texto(s);   // imprime "Parâmetro"

    return 0;
}

void texto(string s) {

    cout << s << endl;

}