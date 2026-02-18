#include <iostream>

using namespace std;

struct variaveis1 {

    int valor1;
    bool valor2;
    string valor3;

};

int main(int argc, char *argv[]) {

    /*
        Na linguagem C, os structs eram o início
        do que viria a ser chamado de objetos, era
        apenas uma maneira de organizar informações.

        Era uma forma de criar seu próprio tipo de 
        variável, que continha várias outras variáveis
        dentro. Em C++ as Structs e as classes não
        tem praticamente nenhum diferença. Apenas
        a maneira como são utilizadas.

        A função principal do struct em C++ é agrupar 
        dados relacionados em um único tipo de dado composto.
    */

    // DECLARANDO UMA VARIÁVEL DO TIPO DA STRUCT
    variaveis1 tipo1;

    // ATRIBUINDO VALORES AOS ELEMENTOS DA STRUCT
    tipo1.valor1 = 1;
    tipo1.valor2 = false;
    tipo1.valor3 = "Nicky";


    return 0;
}