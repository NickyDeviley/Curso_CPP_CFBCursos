#include <iostream>
#include <stack>

using namespace std;

// Aula 26
int main(int argc, char *argv[]) {

    /*
        Pilha. As pilhas são uma estrutura
        de código semelhante ao array.

        Um array é um conjunto de dados de mesmo tipo
        armazenados "juntos" em uma mesma variável.

        Uma pilha funciona de forma semelhante, mas
        você só pode manipular o último dado adicionado
        na pilha.

        Imagine uma pilha de caixas:

        Caixa3
        Caixa2
        Caixa1

        Se quiser mexer no conteúdo da caixa2, precisa tirar
        a caixa3 de cima, se quiser mexer na caixa1, precisa
        tirar a caixa2.
    */

    stack<int> pilha;   // Pilha de número inteiros

    // ADICIONANDO VALORES
    pilha.push(1);
    pilha.push(2);
    pilha.push(3);

    // Podemos acessar o tamanho da pilha através do
    // método size();
    cout << "Tamanho da pilha: " << pilha.size() << endl; // imprime 3

    // Para visualizar qual valor está no topo da pilha
    // podemos utilizar o método top();
    cout << "Valor no topo: " << pilha.top() << endl;   // Imprime 3

    // Podemos remover o valor através do método pop()
    pilha.pop();
    cout << "Valor no topo: " << pilha.top() << endl;   // Imprime 2

    return 0;
}