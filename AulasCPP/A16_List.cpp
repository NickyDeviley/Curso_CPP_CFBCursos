#include <iostream>
#include <list>

using namespace std;

int main(int argc, char *argv[]) {

    // Outros jeitos de declarar:
    // list<int> aula(50);          -> Aqui estou criando a lista e atribuíndo um tamanho a ela, no caso 50
    // list<int> aula(5, 50);       -> Aqui estou criando a lista e declarando um tamanho, no caso 5, e atribuindo um valor para estas 5 posiçÕes, no caso 50.

    // As listas acima ficariam respectivamente:
    // {null, null, null, null, null}   -> 5 espaços nulos
    // {50, 50, 50, 50, 50}             -> 5 espaços com valor 50

    // Declaração básica da lista
    list<int> lista;
    int tam;
    list<int>::iterator it;     // Declarando um iterator

    tam = 10;
    for (int i = 0; i < tam; i++) {
        lista.push_front(i);        // push_front adiciona um valor sempre no índice 0 e move todos os outros valores
        //lista.push_back();        // push_back adiciona um valor sempre no último índice da lista sem mover os outros objetos
    }

    // A lista permite inserir valores em qualquer Índice
    // Para isso é necessário usar um iterator
    // it = lista.begin();      // Atribuíndo ao iterator o primeiro índice da lista
    // advance(it, 5);          // Avançando para o quinto índice da lista
    // lista.insert(it, 25);    // Inserir o valor 25 na posição que o Iterator armazena (5);

    // A lista permite remover valores em qualquer índice
    // Para isso é necessário usar o iterator
    // e o método erase;
    //it = lista.begin();         // Declara que o iterator é igual ao início da lista
    //advance(it, 3);             // Move o iterator para a posição 3 da lista
    //lista.erase(it);            // Remove o valor na próxima posição (4)

    // Para deletar na posição 3, nós podemos decrementar o iterator
    //lista.erase(--it);

    // Nós podemos ordenar toda a lista do menor para o maior
    // basta utilizar o método sort()
    //lista.sort();

    // Nós podemos inverter todos os valores da lista
    // basta utilizar o método reverse()
    //lista.reverse();


    cout << "Tamanho da lista: " << tam << endl;

    // Declarando que a variável guarda o tamanho da lista
    tam = lista.size();
    for (int i = 0; i < tam; i++) {
        cout << lista.front() << endl;      // Imprime o valor do índice 0
        //cout << lista.back() << endl;     // Imprime o valor do último índice
        lista.pop_front();                  // Descarta o valor do índice 0
        //lista.pop_back();                 // Descarta o valor do último índice
    }

    // Ao invés de apagar valor por valor podemos
    // utilizar o método clear();
    lista.clear();                          // Remove todos os valores da lista.

    // Nós podemos utilizar o método merge()
    // Este método mescla duas listas.

    list<int> teste1;
    list<int> teste2;

    teste1.push_front(1);
    teste1.push_front(2);
    teste1.push_front(3);
    
    teste2.push_front(10);
    teste2.push_front(20);
    teste2.push_front(30);

    teste1.merge(teste2);   // Resultado: 1, 2, 3, 10, 20, 30
    // Este método apaga a lista 2,
    // todos os valores dela são movidos para 
    // a lista1

    return 0;
}