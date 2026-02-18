#include <iostream>
#include <queue>

using namespace std;

// Aula 28
int main(int argc, char *argv[]) {

    /*
        A fila possuí os mesmos métodos que a pilha,
        porém funciona de forma absolutamente diferente.
        O nome representa exatamente como funciona,
        pense em uma fila de pessoas:

        pessoa1 | pessoa2 | pessoa3

        A primeira pessoa da fila é a próxima a sair,
        então pessoa1 entrou, depois pessoa2 e pessoa3.
        Na hora de sair, a pessoa1 sai, pessoa2 e depois
        pessoa3.
    */

    // DECLARANDO A FILA
    queue <string> cartas;

    // ATRIBUÍNDO VALORES
    cartas.push("Rei de Copas");
    cartas.push("Rei de Espadas");
    cartas.push("Rei de Ouros");
    cartas.push("Rei de Paus");

    // size() PARA VERIFICAR TAMANHO
    cout << cartas.size() << endl;

    // front() PARA VERIFICAR QUEM ESTÁ EM PRIMEIRO NA FILA
    cout << cartas.front() << endl;

    // back() PARA VERIFICAR QUEM ESTÁ NO FINAL DA FILA
    cout << cartas.back() << endl;

    // pop() PARA TIRAR OS ITENS DA FILA
    // empty() PARA VERIFICAR SE ESTÁ VAZIA
    while(!cartas.empty()) {
        cout << "Primeira Carta: " << cartas.front() << endl;
        cartas.pop();
    }


    return 0;
}