#include <iostream>
#include <list>

using namespace std;

// AULA 30
int main(int argc, char *argv[]) {

    list<int> lista1;
    int tam = 10;
    list<int>::iterator it;

    for (int i = 0; i < tam; i++) {
        lista1.push_front(i);
    }

    // ATRIBUINDO O ITERATOR AO PRIMEIRO ITEM DA LISTA
    it = lista1.begin();

    // MOVENDO O ITERATOR PARA A TERCEIRA POSIÇÃO DA LISTA
    advance(it, 3);

    // INSERINDO O VALOR 0
    lista1.insert(it, 0);

    // REMOVENDO O VALOR 0 DA LISTA
    lista1.erase(--it);

    // APAGANDO TODOS OS VALORES DA LISTA
    lista1.clear();

    // merge() mistura 2 listas de mesmo tipo
    list<int> lista2;
    list<int> lista3;

    lista2.push_front(1);
    lista2.push_front(2);
    lista2.push_front(3);
    lista2.push_front(4);

    lista3.push_front(6);
    lista3.push_front(7);
    lista3.push_front(8);
    lista3.push_front(9);

    lista3.merge(lista2);

    return 0;
}