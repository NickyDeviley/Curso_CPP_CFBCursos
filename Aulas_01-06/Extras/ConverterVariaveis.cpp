#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {

    /*
        Existem 2 tipos de conversão de variáveis ou Type Casting,
        são chamados de a conversão IMPLÍCITA e a EXPLÍCITA.

        A conversão implícita ocorre "por baixo dos panos", o próprio
        computador faz ela automáticamente, como nos casos abaixo, aonde nós
        estamos convertendo uma variável pequena para uma maior.
    */
    
    short duzentos = 200;               // 16 bits
    int valorInteiro = duzentos;        // 32 bits
    long valorLongo = valorInteiro;     // 64 bits


    /*
        O C++ permite realizar conversões de um tipo maior para um menor,
        porém isso pode ser uma armadilha. Pois INT pode armazenar valores
        muito maiores do que o limite da variável Short.

        As variáveis SHORT podem suportar até 32767, caso a variável inteira
        seja maior que isso o código gera um erro. Portanto, a primeira coisa
        que deve-se tomar cuidado é se a variável que será convertida é menor
        que o limite.
    */
    
    duzentos = valorInteiro;

    /*
        Uma conversão explícita precisa ser declarada a mão, por exemplo,
        vamos ter que converter uma variável double para int.

        Nesse exemplo, quando convertemos um valor flutuante para um inteiro,
        TODO o conteúdo após a vírgula é descartado pelo computador.
    */

    double pi = 3.1415F;                    // 3.1415
    int resultado = static_cast<int>(pi);   // 3


    /*
        Outro exemplo de conversão explícita ocorre quando precisamos
        converter uma string em valor numérico.
    */

    string text = "42";
    int numero = stoi(text);    // Método da biblioteca string que converte string > inteiro

    string text2 = "19.99";
    double preco = stod(text2); // Método da biblioteca string que converte string > double


    /*
        Para converter número em String existem algumas maneiras:
    */

    int level = 10;
    string mensagem = "Seu nível é: " + to_string(level);
    string mensagem1 = "Seu nível é: " + level;

    return 0;
}