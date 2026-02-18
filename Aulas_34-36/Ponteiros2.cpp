#include <iostream>

using namespace std;

// AULA 35
int main(int argc, char *argv[]) {

    /*
        Quando nós mexemos com Arrays, algo interessante acontece.
        Um array ocupa vários espaços de memória, porém todos
        respondem ao mesmo nome.

        Quando utilizamos um ponteiro para mexer em um array, nós
        podemos alterar em qual espaço deste array o ponteiro está.
    */

    int *ponteiro = nullptr;
    int vetor[5] = {10, 20, 30, 40, 50};

    // APONTANDO PARA O PRIMEIRO ENDEREÇO DO ARRAY
    ponteiro = &vetor[0];

    cout << *ponteiro << endl; // Imprime 10 (Índice 0)

    // MODIFICANDO A POSIÇÃO DO PONTEIRO DENTRO DO ARRAY:
    ponteiro++;

    cout << *ponteiro << endl; // Imprime 20 (Índice 1)

    /*
        O ponteiro foi originalmente colocado para referênciar
        o espaço do PRIMEIRO índice do array, mas nós modificamos
        sua posição através do incremento, seria o mesmo que:

        ponteiro = vetor[1];
    */



    return 0;
}