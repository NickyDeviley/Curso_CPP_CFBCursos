#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argc, char *argv[]) {

    /*
        A função system, permite usar comandos
        de terminal dentro do código c++;
    */

    system("dir");          // Comando para apresentar diretórios
    system("cls");          // Comando para limpar o prompt
    system("color 1C");     // Comando para mudar as cores do prompt


    return 0;
}