#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {

    /*
        Conceito do jogo da forca:

        O usuário entra com uma string que é armazenada em um array de char;
        O código identifica a palavra;
        O usuário digita letras para montar a palavra;
        Caso acerte a letra é apresentada na posição correta;
        Caso Erre um contador aumenta até 6;
        Se o jogador errar 6 vezes, o jogo acaba;
    */

    char palavra[30], letra, secreta[30];
    int chances, tamanho, i, acertos;
    bool acerto;

    chances = 6;
    acertos = 0;
    tamanho = 0;
    i = 0;
    acerto = false;

    cout << "Qual a palavra que será adivinhada? (Máximo 30 letras)" << endl;
    cin >> palavra;
    system("cls");

    while (palavra[i] != '\0') {
        tamanho++;
        i++;
    }

    for(i = 0; i < 30; i++) {

        secreta[i] = '_';

    }

    while((chances > 0) && (acertos < tamanho)) {

        cout << "Chances restantes: " << chances << "\n\n";
        cout << "Palavra Secreta: ";
        for(i = 0; i < tamanho; i++) {
            cout << secreta[i];
        }
        cout << "\n\n" << "Digite uma Letra: ";
        cin >> letra;

        for (i = 0; i < tamanho; i++) {
            if (palavra[i] == letra) {
                acerto = true;
                secreta[i] = palavra [i];
                acertos++;
            }
        }

        if (!acerto) {
            chances--;
        }
        acerto = false;
        system("cls");
    }

    if (acertos == tamanho) {
        cout << "Você venceu!";
    }
    else {
        cout << "Você perdeu!";
    }

    return 0;
}