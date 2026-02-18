#include <iostream>
#include "POO3.h"

using namespace std;

// AULA 43
int main(int argc, char *argv[]) {

    /*
        Os getters e setters já foram explicados antecipadamente,
        mas quando nós usamos o encapsulamento, precisamos
        acessar variáveis privadas ou protegidas usando os 
        métodos GET e SET.

        Também é legal comentar sobre memória STACK e HEAP,
        quando nós declaramos um objeto desta forma:

        NomeDaClasse NomeDoObjeto(valor1, valor2);

        Estamos criando este objeto na memória STACK, isso
        signfica que seu escopo é o método aonde ele foi criado.
        Assim que a execução deste método terminar este objeto
        será deletado da memória automáticamente.


        Por outro lado, se declararmos um objeto utilizando
        o operador NEW, desta forma:

        NomeDaClasse* NomeDoObjeto = new NomeDaClasse(valor1, valor2);

        O que estamos fazendo na prática é: Estamos reservando um
        espaço na memória HEAP para este objeto e criando um ponteiro
        na memória STACK para conseguir manipular este objeto.

        delete NomeDoObjeto;

        Uma boa prática também é anular o ponteiro:

        NomeDoObjeto = nullptr;

    */

    // DECLARANDO O OBJETO NA STACK
    Jogador player(30, 100, 100);

    // DECLARANDO O OBJETO NA HEAP
    Jogador* player2 = new Jogador(20, 300, 10);

    // Estou acessando a vida do jogador1
    cout << player.getVida() << endl;

    // Estou acessado a vida do jogador2
    cout << player2->getVida() << endl;


    // DELETANDO O OBJETO DA MEMÓRIA HEAP
    delete player2;

    // ANULANDO O PONTEIRO (boa prática de programação)
    player2 = nullptr;  
    

    return 0;
}