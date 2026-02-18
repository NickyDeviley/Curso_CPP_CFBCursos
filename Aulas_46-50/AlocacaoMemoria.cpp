#include <iostream>
#include <stdio.h>  // PARA FUNÇÃO GETS
#include <stdlib.h> // PARA FUNÇÃO MALLOC

using namespace std;

// AULA 46
int main(int argc, char *argv[]) {

    /*
        Esta é uma das ferramentas mais importantes da
        linguagem C e C++. É uma das principais
        diferenças para outras linguagens de programação.

        Ao contrário de outras, no C e C++ nós temos
        que manipular a memória "com as mãos", além de 
        deletar objetos na memoria HEAP, utilizar ponteiros
        para manipular estes objetos e torná-los nulos
        após seu uso. Outro ponto importante é alocar
        a memória.

        Não de forma drástica como no assembly, aonde
        nós temos literalmente que alugar todo espaço
        que nós vamos usar, mas temos que informar
        ao computador que aquela variável pode 
        ter seu tamanho alterado com o andamento do código.

        Ela pode ficar maior ou menor, dependendo do
        que nós estamos fazendo.
    */

    // ARRAY DE CHAR PARA EXEMPLO
    char* vnome[50];

    // RECEBE UMA STRING DO USUÁRIO
    //cin >> vnome;
    gets(vnome);
    /*
        Informação importante do professor,
        o método CIN só identifica a entrada
        até o primeiro espaço. Então, para
        que nós consigamos escrever um
        nome inteiro, podemos usar o método GETS.

        Porém cuidado. O método gets não possuí limites
        na hora de captar a entrada do usuário. Podemos
        utilizar em seu lugar o getLine();
    */

    // IMPRIME A STRING 
    cout << vnome << endl;

    /*
        A variável acima é um exemplo, vamos usar meu apelido
        como exemplo de nome "Nicky Deviley".

        Tem apenas 13 caractéres, incluindo o espaço. Então
        das 50 caractéres reservadas usamos apenas 13, isso
        é um espaço de memória que foi inutilizado. Até que
        essa variável apague ela continuará oculpando 
        este mesmo espaço na memória.

        Para resolver isso nós utilizamos a alocação dinâmica:
    */

    // Criando outro array porém com alocação dinâmica.
    char* nome;
    nome = (char*) malloc(sizeof(char));

    gets(nome);

    cout << nome << endl;

    /*
        O que está acontecendo aqui? 
        
        Nós criamos um ponteiro do tipo char. 
        
        Nós atribuímos à este ponteiro o retorno da função "malloc", 
        que é um ponteiro nulo, por este motivo nós temos que 
        converter o retorno em um ponteiro do tipo char, usando o typecasting (char*).

        A função "malloc" exige que nós declaremos o tamanho inicial que será
        alocado, por este motivo nós usamos o método "sizeof()", este método
        retorna o tamanho de uma variável char, que é 1 byte.
    */

    // BOAS PRÁTICAS:
    delete vnome;
    *vnome = nullptr;

    // LIBERANDO O ESPAÇO RESERVADO PELA FUNÇÃO MALLOC
    free(nome);
    nome = nullptr;
    
    return 0;
}