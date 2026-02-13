#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <math.h>

using namespace std;

int main(int argc, char *argv[]) {

    /*
        O printf é um comando da biblioteca stdio.h
        que imprime um ou várias string e valores que podem ser
        apresentados dentro dessas strings.

        O scanf é um comando da biblioteca stdio.h
        que lê valores do teclado, funciona de forma parecida com
        o printf.
    */

    printf("Olá, mundo!\nCurso de C++");

    // Imprimindo valores com o printf:
    
    int num1; //= 10;
    int num2; //= 20;
    double num3; //= 10.2;
    char nome[10]; //= "Nicholas";

    // Quando nós vamos utilizar o scanf
    // é necessário passar o endereço da memória
    // aonde a variável está armazenada
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%f", &num3);
    scanf("%s", &nome);

    printf("Variável Num1: %d\n", num1);                                            // Imprimindo 1 variável inteira
    printf("Variável Num1: %d\nVariável num2: %d\n", num1, num2);                   // Imprimindo 2 variáveis inteiras
    printf("Variável Num3: %f\n", num3);                                            // Imprimindo 1 variável flutuante
    printf("Variável Num1: %.2f\n", num3);                                          // Imprimindo 1 variável flutuante limitando os decimais
    printf("Variável Num1: %s\n", nome);                                            // Imprimindo 1 vetor de char que é reconhecido como string
    printf("Variável Num1: %d\nVariável num3: %.2f\nNome: %s", num1, num3, nome);   // Imrpimindo 3 variáveis com valores diferentes

    /*
        Comandos interessantes para utilizar no printf:
        \n = pula linha
        %n = pula linha
        \0 = termina a leitura da string é automáticamente adicionado no final de variáveis string

        %d ou %i => imprime as variáveis inteiras
        %x ou %X => imprime as variáveis inteiras hexadecimais
        %u => imprime variáveis inteiros sem sinais
        %s => imprime variáveis string
        %f => imprime variáveis flutuantes
        %p => imprime ponteiros

    */

    // segunda aula de printf:

    float pi = M_PI;
    float num = M_PI;

    printf("valor de pi: %f", pi);          //imprimindo variável fluautante
    printf("valor de pi: %.2f", pi);        // imrpimindo variável flutuante com casas decimais limitadas
    printf("Valor de pi %07.1f", num);      // Imprimindo variável flutuante com uma quantidade específica
                                            // De valores antes da vírgula e decimais limitados

    int valor = 15;

    // Para imprimir valores em hexadecimal
    // utiilizando o cout basta adicionar o
    // comando HEX antes da variável.
    // Para imprimir valores em octadecimal
    // basta usar comando OCT
    // Para imprimir valores em base 10
    // basta usar o comando DEC
    cout << "valor de num decimal: " << valor << endl;
    cout << "valor de num em hexadecimal:" << hex << valor << endl;
    cout << "valor de num em hexadecimal:" << oct << valor << endl;
    cout << "valor de num em hexadecimal:" << dec << valor << endl;

    // Podemos definir nossa base através do comando
    // SETBASE da biblioteca iomanip

    cout << setbase(16) << valor << endl;

    // No cout nós podemos usar também 
    // precision que permite limitar as casas decimais

    double valor1 = 10.230;

    cout.precision(2);
    cout << valor1 << endl; // Imprime 10
    cout.precision(3);
    cout << valor1 << endl; // Imprime 10.2
    cout.precision(4);
    cout << valor1 << endl; // Imprime 10.23

    // Caso envie -1 como parâmetro no precision
    // ela é resetada e volta ao normal

    // para imprimir notação científica:
    cout << std::scientific << valor1 << endl;

    // Para representar a largura
    cout << setw(10) << setfill('0') << valor1 << endl;

    return 0;
}