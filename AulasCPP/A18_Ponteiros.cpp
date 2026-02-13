#include <iostream>

using namespace std;

void somar(int *valor);
void numerandoVetor(int *vetor);

int main(int argc, char *argv[]) {

    /*
        O que é um ponteiro?

        Na linguagem C++ o ponteiro é uma
        variável que pode Armazenar o endereço
        de uma variável, mas também pode apontar
        para um espaço na memória.

        Por exemplo:

        string veiculo = "carro";
        string *pv = veiculo;

        Neste código acima eu faço a segunda possibilidade,
        se por acaso eu imprimir o valor de pv, ele irá imprimir
        "carro", mas eu não dupliquei a variável, mas sim
        o PONTEIRO pv está apontando para o lugar na memória
        aonde está armazenada a variável Veiculo.
        Então, caso eu modifique a variável veiculo, o valor de pv
        também mudará e vice-versa.

        A baixo eu faço a primeira opção,
        armazeno o local em HEXADECIMAL
        da variável veiculo na memória.
    */

    string veiculo = "carro";   // Declarando uma variável
    string *pv;                 // Declarando um ponteiro

    // Aqui estou atribuíndo o endereço
    // da variável veículo.
    pv = &veiculo;              

    cout << veiculo << endl;            // Imprime "carro"
    cout << pv << endl;                 // Imprime o endereço da variável veiculo em hexadecimal.

    *pv = "moto";                       // Mudando o valor da variável

    cout << "\n" << veiculo << "\n" << *pv << "\n" << pv << endl;


    // Manipulando Arrays com ponteiros:

    int *p;
    int vetor[3];

    /*
        OBS: Não é necessário utilizar o *
        quando você não está acessando diretamente
        o valor da variável.
    */

    // apontando para o primeiro elemento do vetor
    p = vetor;                  // p = &vetor[0]
    *p = 10;                    // vetor[0] = 10
    cout << "\n" << p << endl;  // imprimindo o endereço hexadecimal da memória
    cout << vetor[0] << endl;   // Imprimindo o valor do array declarado através do ponteiro

    //*(p+=1);                    // Mudando para a segunda posição do vetor
    p++;
    *p = 20;                    // vetor[1] = 20
    cout << "\n" << p << endl;  // imprimindo o endereço hexadecimal da memória
    cout << vetor[1] << endl;   // Imprimindo o valor do array declarado através do ponteiro

    //*(p+=1);                    // Mudando para a terceira posição do vetor
    p++;
    *p = 30;                    // vetor[2] = 30
    cout << "\n" << p << endl;  // imprimindo o endereço hexadecimal da memória
    cout << vetor[2] << endl;   // Imprimindo o valor do array declarado através do ponteiro

    // Associando ponteiros com funções:
    // Quando "enviamos" uma variável como parâmetro
    // para uma função, o que realmente acontece é que
    // a variável é copiada. Então, o que acontecer
    // dentro dos métodos não altera a variável original.
    // Mas se passarmos um ponteiro como parâmetro
    // nós enviamos uma cópia do endereço da variável na memória
    // e este endereço permite modificar a variável diretamente

    int valor = 200;    // Criando uma variável inteira

    // Imprimindo o valor antes de enviar para a função
    cout << "Valor antes da função: " << valor << endl;

    // Aqui nós chamamos a função, perceba que nós enviamos
    // a localização da memória da variável, pois o parâmetro
    // da função é um ponteiro
    somar(&valor);

    // Imprimindo o valor após enviar para a função
    cout << "Valor depois da função: " << valor << endl;



    // Também podemos utilizar essa técnica
    // para modificar arrays e matrizes em funções
    // tornando muito mais legível o código.

    // Declarando o vetor
    int vetorizado[5];

    // chamando o método que inicializará todos
    // os elementos do array, passando o vetor
    // como parâmetro
    numerandoVetor(vetorizado);

    for (int i = 0; i < 5; i++) {
        cout << vetorizado[i] << endl;
    }

    return 0;
}

/*
    A principal diferença a se notar nos dois métodos
    é que quando nós mexemos com variável é necessário
    passar o endereço dela na memória como parâmetro:
    ----> somar(&valor);
    Mas quando enviamos vetores como parâmetros
    nós não precisamos:
    ----> numerandoVetor(vetorizado);

    Também é interessante notar que, dentro dos métodos
    quando nós mexemos nas variáveis isoladas, é necessário
    utilizar o asterísco para editar a variável, caso contrário
    nós estamos mexendo no endereço e não no valor armazenado nele.

    Já no caso do vetor isso não se aplica, nós apenas precisamos
    utilizar o nome do ponteiro declarado e a posição que desejamos,
    mas também podemos fazer como outros exemplos desse arquivo.

*/

// Método usado para o vetor
void numerandoVetor(int *vetor) {

    vetor[0] = 1;
    vetor[1] = 10;
    vetor[2] = 100;
    vetor[3] = 1000;
    vetor[4] = 10000;

}

// Função declarada recebendo um parâmetro como ponteiro
void somar(int *valor) {
    // Somando 10 ao ponteiro.
    *valor += 10;
}