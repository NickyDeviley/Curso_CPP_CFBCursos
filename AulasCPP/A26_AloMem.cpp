#include <iostream>
#include <stdio.h>      // Para função gets
#include <stdlib.h>     // Para função malloc

using namespace std;

int main() {

    // char vnome[50]; // Array de char (String)

    // Declarando variável com alocação de memória dinâmica
    char *vnome;
    vnome = (char *) malloc(sizeof(char));  // Aqui nós chamamos a função e convertemos o retorno para um ponteiro de char

    /*
        Quando usamos um array de char para
        capturar uma string, ao identificar
        um espaço ele encerra a captura de
        valor e pega somente a primeira palavra.

        Usando a função MALLOC nós temos uma
        alocação dinâmica de memória, o que
        permite aumentar ou diminuir.

        Nós não precisamos necessáriamente utilizar a função
        malloc para armazenar o valor maior do que a variável,
        porém isso pode causar problemas, pois o valor
        pode ser armazenado em memória que está sendo utilizada pelo
        sistema, causando uma tela azul.
    */
    
    //cin >> vnome;   // Comando Cin para receber o valor da String criada

    // Para contornar o problema, basta modificar o método de entrada.

    //cin.ignore(10, '\n');   // Método para ignorar o ENTER antes da entrada
    gets(vnome);              // Função semelhante a cin


    cout << vnome;  // Imprimindo o valor do array

    // Imprimindo a quantidade bytes das variáveis
    cout << sizeof(int);


    return 0;
}