#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {

    /* 
        As variáveis são espaços dentro da memória que armazenam
        valores específicos. Como o próprio nome sugere, seu valor
        pode ser alterado.

        C++ é fortemente tipada, portanto precisamos expecificar o tipo
        de variável que nós estamos declarando.
    */

    // Tipos numéricos inteiros
    short variavelCurta;                    // 16 bits
    int variavelInteira;                    // 32 bits
    long variavelLonga;                     // 64 bits

    // Tipos numéricos sem sinal
    unsigned short variavelCurtaSS;         // 16 bits
    unsigned int variavelInteiraSS;         // 32 bits
    unsigned long variavelLongaSS;          // 64 bits

    // Tipos numéricos flutuantes - Decimais
    float variavelFlutuante;                // Armazena números quebrados 0.01, ...
    double variavelFlutuante2;              // Armazena números quebrados com maior precisão 0.00001, ...

    // Tipos de Texto
    char variavelLetra;                     // Armazena um caractére
    string variavelPalavra;                 // Armazena pavras, frases, textos.

    // Tipo Booleano (Sim e Não - 0 ou 1)
    bool variavelBooleana;                  // 1 bit

    // Atribuindo valores a estas variáveis:
    variavelCurta = 1000;           // mil
    variavelInteira = 2000000;      // dois milhões
    variavelLonga = 2000000000L;    // dois bilhões

    variavelCurtaSS = 2000U;        // dois mil
    variavelInteiraSS = 4000000U;   // quatro milhões
    variavelLongaSS = 4000000000U;  // quatro Bilhões

    variavelFlutuante = 50.25F;     // Cinquenta e um quarto
    variavelFlutuante2 = 3.1415F;   // PI

    variavelLetra = 'A'; 
    variavelPalavra = "Nicky";

    variavelBooleana = true;

    /*
        DETALHES IMPORTANTES:

        As variáveis numéricas SEM SINAL, não podem armazenar valores negativos,
        somente 0 ou maior. Portanto, apesar de ter o mesmo tamanho das normais,
        elas podem armazenar o dobro de números positivos.

        short -> -1023 ... 1024;
        unsigned short -> 0 ... 2047

        A "Variável" string, apesar de se comportar e ser utilizada da mesma
        forma que as outras, o TIPO string é, na verdade, um objeto. Na linguagem
        C o tipo string não existe, portanto é utilizado arrays do tipo char.

        Variáveis do tipo CHAR são declaradas com aspas simples, variáveis
        do tipo STRING são declaradas com aspas duplas.

        Quando vamos atribuir um valor às variáveis sem sinal, longas, flutuantes,
        é interessante adicionar um identificador para facilitar o entendimento do
        código:

        unsigned int valor1 = 200U;
        Long valor2 = 200L;
        float valor3 = 200.0F;
        double valor4 = 200.0001F;

        Variáveis do tipo BOOLEANO armazenam apenas 0 ou 1, que podem ser representados
        através de palavras: 1 = true; 0 = false;

    */


    return 0;
}