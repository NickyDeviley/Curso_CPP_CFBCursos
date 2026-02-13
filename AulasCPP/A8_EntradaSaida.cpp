#include <iostream>

using namespace std;

int main() {

    int a = 10;

    short valor1 = 10;
    int valor2 = 20;
    long valor3 = 40L;

    float valor8 = 10.0;
    double valor9 = 20.2;

    char letra = 'a'; 
    string palavra = "Nicholas";

    /*
        A saída de dados mais comum é o cout
        ela imprime variáveis e strings.
        podemos utilizar o endl para pular a linha.
    */
    cout << "Texto" << endl;
    cout << a << endl;
    cout << "O valor da variável é: " << a << endl;

    /*
        Existe também o printf que é herdado da linguagem C
        nele nós podemos CONCATENAR variáveis no meio do texto
        simplificando o entendimento.
    */
    printf("Valor de short: %d \n", valor1);     // Valor short
    printf("Valor de int: %d \n", valor2);     // Valor int
    printf("valor de long: %d \n", valor3);     // Valor long
    printf("valor de float %f \n", valor8);     // Valor float
    printf("valor de double %.2f \n", valor9);     // Valor double
    printf("valor de char: %c \n", letra);     // Valor char
    printf("Valor de string: %s \n", palavra);     // Valor string

    printf("%n \n");    // Maneiras de pular a linha

    /*
        Já para a entrada de dados nós temos o CIN
    */

    int valor = 0;
    int aa, bb, cc;

    cin >> valor;   // Recebendo um valor através do prompt de comando
    cin >> aa >> bb >> cc;  // Aqui nós recebemos os valores em sequência.

    return 0;
}