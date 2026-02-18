#include <iostream>

using namespace std;

// AULA 40
int main(int argc, char *argv[]) {

    /*
        O comando System(), serve para manipularmos
        o prompt do windows, nós chamamos o método e
        escrevemos o comando para o prompt entre parenteses.

    */

    system("cls");          // Limpa a tela
    system("mkdir pasta");  // Cria uma pasta
    system("cd..");         // Vai voltar uma pasta
    system("dir");          // Lista todos os arquivos e pastas dentro de um diretório
    system("color 47");     // Modifica a cor do fundo e das letras do prompt

    return 0;
}