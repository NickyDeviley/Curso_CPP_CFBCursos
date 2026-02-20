#include <iostream>
#include <vector>

using namespace std;

// AULA 50
int main(int argc, char *argv[]) {

    /*
        O iterator serve para navegar dentro
        de uma coleção de dados. Seria como um ponteiro
        que aponta para o valor específico daquela coleção.
    */

    // CRIANDO UM VECTOR
    vector<string> produtos = {"mouse", "teclado", "monitor", "gabinete", "caixa som"};

    // DECLARANDO O ITERATOR
    vector<string>::iterator it;
    it = produtos.begin();

    // IMPRIMINDO O PRIMEIRO ELEMENTO DO VECTOR ATRAVÉS DO ITERATOR
    cout << *it << endl;

    // ATRIBUINDO O ÚLTIMO VALOR DO VECTOR
    it = produtos.end() - 1;

    cout << *it << endl;

    it = produtos.begin();

    // Para avançar as posições do iterator:
    // Advance
    // next
    // prev

    // Advance e next são semelhantes
    // prev funciona de trás para frente

    // ADVANCE:
    advance(it, 3); // gabinete

    // NEXT:
    cout << *next(it, 1) << endl;   // teclado


    // PREV:
    it = produtos.end();
    cout << *prev(it, 2) << endl;

    
    // USANDO LOOP:
    for (it = produtos.begin(); it != produtos.end(); it++) {

        cout << *it << endl;

    }

    return 0;
}