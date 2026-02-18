#include <iostream>
#include <list>

using namespace std;

int main(int argc, char *argv[]) {

    /*
        A LISTA é uma estrutura de código semelhante
        a pilha e a fila, porém com muito mais funções.

        Ao contrário da pilha e da fila, as listas não
        possuem uma ordem a ser seguida, pense nelas como
        um array com métodos prontos, pois é exatamente
        isso o que elas são, contudo, diferente
        dos arrays, as listas são dinâmicas. Isso significa
        que seu tamanho pode ser modificado após
        sua declaração.
    */

    // Estrutura base para declarar uma lista:
    list<int> lista1;   // VAZIA

    // Neste exemplo a lista possuí 50 posições
    // list<int> lista2(50);

    // Neste outro exemplo a lista possuí 5 posições
    // e a estas 5 posições é declarado o valor 50
    // list<int> lista3(5, 50);

    // push_front() para adicionar valores no primeiro espaço da lista
    // push_back() para adicionar valores no último espaço da lista
    int tam = 10;
    for (int i = 0; i < tam; i++) {

        lista1.push_front(i);

    }

    // size() para acessar o tamanho da lista:
    cout << lista1.size();

    /*
        Podemos também adicionar valores no meio
        da lista, mas para isso nós precisamos de um
        iterator.
    */
    list<int>::iterator it;

    // Aqui nós atribuímos o iterator ao primeiro valor
    // da lista, o índice 0
    it = lista1.begin();

    // O método advance nos permite mover o iterator
    // pela lista, no caso nós atribuímos o iterator
    // ao índice 4 da lista (quinta posição)
    advance(it, 5);

    // Através do método insert() nós conseguimos
    // inserir um valor na quinta posição da lista.
    lista1.insert(it, 0);

    // reverse() para inverter os valores da lista
    lista1.reverse();

    // sort() para ordenar os valores da lista.
    lista1.sort();

    // pop_front() para remover o primeiro valor da lista
    // pop_back() para remover o último valor
    tam = lista1.size();
    for(int i = 0; i < tam; i++) {

        lista1.pop_front();

    }


    return 0;
}