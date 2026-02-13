#include <iostream>

using namespace std;

int main() {

    /*
        O que são variáveis?

        As variáveis são espaços na memória que armazenam
        valores de um tipo específico.
    */
    
    // Tipos de variáveis:
    /*
        As variáveis numéricas são classicas,
        elas armazenam números positivos e negativos
    */
    short valor1 = 10;          // Variável de 16 bits que armazena valores positivos e negativos (-32 Mil à +32 Mil)
    int valor2 = 20;            // Variável de 32 bits que armazena valores positivos e negativos (-2 Bilhões à +2 Bilhões)
    long valor3 = 40L;          // Variável de 64 bits que armazena números inteiros positivos ou negativos. 
    long long valor4 = 50LL;    // Variável de 64 bits que armazena números imensos positivos ou negativos. (-9 QuintilhÕes à +9 Quintilhões)

    /*
        Aqui nós também temos as variáveis numéricas
        que não armazenam o sinal. Ou seja, essas variáveis
        não podem ser negativas. Elas podem sempre ir de 0
        até o dobro das variáveis numéricas normais.

        short armazena -32Mil até +32Mil
        unsigned short armazena 0 até 64Mil

    */
    unsigned short valor5 = 10U;    // Variável de 16 Bits que armazena APENAS valores positivos 
    unsigned int valor6  = 20U;     // Variável de 32 Bits que armazena APENAS valores positivos
    unsigned long valor7 = 40U;     // Variável de 64 Bits que armazena APENAS valores positivos

    // Valores de ponto flutuante:
    float valor8 = 10.0;        // Variável que armazena valores decimais
    double valor9 = 20.2;       // Variável que armazena valores decimais com maior precisão

    // Valores Texto:
    char letra = 'a';               // Armazena um único caractére, pode ser número, letra e sinais.
    string palavra = "Nicholas";    // Armazena palavras, frases, textos inteiros.

    return 0;
}