#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {

    /*
        A estrutura IF armazena um código e somente é executado CASO
        uma ou mais condições sejam satisfeitas, esta condição é obrigatóriamente
        Booleana.

        Para simplificar mais, a tradução direta do comando IF é "SE", ou seja:

        SE nove foi menor que dez -> EXECUTE O CÓDIGO.

        Existem algumas comparações para se fazer com o objetivo de receber um
        valor booleano:

        == -> igual
        != -> diferente
        > -> maior que
        < -> menor que
        >= -> maior ou igual
        <= -> menor ou igual
    */

    int dez = 10;
    int nove = 9;
    int oito = 8;

    // Primeiro teste, condição verdadeira
    if (nove < dez) {   // Se a condição for verdadeira

        cout << "Nove é menor que dez!" << endl;

    }
    else {  // Se a condição for falsa

        cout << "Nove é maior que dez!" << endl;

    }

    // Segundo teste, condição falsa
    if (oito > nove) {

        cout << "Oito é maior que nove!" << endl;

    }
    else {

        cout << "Oito não é maior que nove!" << endl;

    }

    // Terceiro teste, uma condição falsa e uma verdadeira
    if (oito > dez) {

        cout << "Oito é maior que dez!" << endl;

    }
    else if (oito < dez) {

        cout << "Oito é menor que dez!" << endl;

    }
    else {

        cout << "Oito é igual a dez!" << endl;

    }


    return 0;
}