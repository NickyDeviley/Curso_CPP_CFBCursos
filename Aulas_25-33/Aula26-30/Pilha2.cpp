#include <iostream>
#include <stack>

using namespace std;

// AULA 27
int main(int argc, char *argv[]) {

    stack<string> cartas;

    cartas.push("Rei de Copas");
    cartas.push("Rei de Espadas");
    cartas.push("Rei de Ouros");
    cartas.push("Rei de Paus");

    // Podemos verificar se a pilha está vazia
    // utilizando o método empty()
    if (cartas.empty()) {
        cout << "pilha vazia" << endl;
    }
    else {
        cout << "pilha com cartas" << endl;
    }

    while(!cartas.empty()) {
        cout << "Carta no topo: " << cartas.top() << endl;
        cartas.pop();
    }


    return 0;
}