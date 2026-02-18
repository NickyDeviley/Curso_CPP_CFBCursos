#include <iostream>

using namespace std;

// AULA 34
int main(int argc, char *argv[]) {

    /*
        Existem dois conceitos que serão apresentados,
        os ponteiros e o endereço.

        O endereço é o local onde aquele dado está
        na memória.

        Um ponteiro serve para armazenar um ENDEREÇO
        de uma variável, pense nele como outra maneira
        de acessar a mesma variável.

        Imagine uma caixa, você, usuário, possuí 2 robôs.
        você manda um dos seus robôs até essa caixa para colocar 5 maçãs.
        Caso o segundo robô vá até a caixa e pegue uma das maçãs. Quantas
        maçãs ficam na caixa do primeiro robô? Quatro, pois ambos estão
        mexendo na mesma caixa. É exatamente assim que funciona um ponteiro.
    */

    // DECLARANDO A VARIÁVEL
    int val1 = 1000;

    // DECLARANDO O PONTEIRO
    int *ponteiro = nullptr;

    // ATRIBUINDO O PONTEIRO AO MESMO
    // ENDEREÇO QUE A VARIÁVEL
    ponteiro = &val1;

    /*
        Para lidar com os ponteiros precisamos
        ter cuidado!

        As duas linhas de código parecem iguais,
        mas a uma diferença crucial. A primeira linha
        imprime a variável que o ponteiro esta referênciando.
        A segunda linha imprime o endereço da variável
        dentro da memória.
        A terceira linha é igual a primeira.
    */

    cout << *ponteiro;  // 1000
    cout << ponteiro;   // Endereço da variável
    cout << &val1;      // Endereço da variável

    /*
        É importante deixar isso claro para evitar erros de código

        Quando utilizamos o operador * antes do nome do ponteiro,
        estamos nos referindo diretamente a variável que ele aponta.

        Quando NÃO utilizamos, estamos mexendo diretamente com o
        endereço da memória.
    */

    // ALTERANDO O VALOR DA VARIÁVEL:
    cout << val1 << endl;       // 1000
    cout << *ponteiro << endl;  // 1000

    *ponteiro = 2;

    cout << val1 << endl;       // 2
    cout << *ponteiro << endl;  // 2

    /*
        Já foi explicado, mas novamente para ficar claro.
        Nós modificamos a variável através do ponteiro.
    */

    return 0;
}