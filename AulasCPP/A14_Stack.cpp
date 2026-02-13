#include <iostream>
#include <stack>

using namespace std;

int main() {

    /*
        Um stack é uma PILHA de coisa, no caso
        variáveis ou objetos, funciona de maneira
        semelhante a um vetor.

        Qual a lógica de uma pilha de coisas?
        Em uma pilha de caixas, por exemplo,
        colocamos 3 caixas uma sobre a outra.

        Caixa A
        Caixa B
        Caixa C

        A primeira caixa colocada na posição foi a caixa C,
        A segunda caixa foi a B,
        A terceira caixa foi a A.

        Para que possamos acessar a caixa C,
        é necessário retirar a caixa A, depois a caixa B,

        Essa é a lógica de PILHA, o último valor a entrar
        é o primeiro valor a sair.

    */

    stack <string> cartas;          // Criando uma nova PILHA

    // Adicionando elementos na PILHA
    cartas.push("Rei de Copas");
    cartas.push("Rei de Espadas");
    cartas.push("Rei de Ouros");
    cartas.push("Rei de Paus");

    cout << "Tamanho da pilha: " << cartas.size() << endl;  // Imprimindo o tamanho da PILHA

    cout << "carta do topo: " << cartas.top() << endl;      // Imprimindo o valor da carta do topo

    cartas.pop();       // Apagando a carta no topo

    cout << "Nova carta do topo: " << cartas.top() << endl; // Imprimindo a nova carta que esta no topo

    // Métodos da biblioteca Stack:

    // Empty()
    // Este método retorna um valor boolenado
    // para verificar se a pilha está ou não vazia

    if (cartas.empty()) {
        cout << "Pilha está vazia! " << endl;
    }
    else {
        cout << "Pilha com cartas! " << endl;
    }

    while (!cartas.empty()) {
        cartas.pop();
    }

    /*
        resumo:

        push()  -> Adiciona objetos na pilha
        pop()   -> Retira o último objeto adicionado
        top()   -> retorna o valor do objeto que está no topo da pilha
        size()  -> retorna o tamanho da pilha
        empty() -> Retorna um valor booleano caso a pilha esteja vazia
    */

    return 0;
}