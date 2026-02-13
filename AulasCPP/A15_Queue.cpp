#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {

    /*
        O que é uma Queue?

        Uma fila funciona de forma parecida com a pilha,
        mas possuí diferenças cruciais.

        Na pilha o último valor a ser adicionado é o primeiro a sair.
        O primeiro valor a ser adicionado é o último a sair.

        Na fila o primeiro objeto que entrar é o primeiro a sair.
        O último elemento a entrar é o último a sair.
    */

    queue<int> valores;

    valores.push(10);
    valores.push(11);
    valores.push(12);
    valores.push(13);
    valores.push(14);

    while (!valores.empty()) {
        cout << "Primeiro número: " << valores.front() << endl;
        valores.pop();
    }

    /*
        resumo:

        push()  -> Adiciona objetos na fila
        pop()   -> Retira o primeiro objeto adicionado
        top()   -> retorna o valor do objeto que está na frente da fila
        back()  -> Retorna o valor do objeto que está em último na fila
        size()  -> retorna o tamanho da fila
        empty() -> Retorna um valor booleano caso a fila esteja vazia
    */

    return 0;
}