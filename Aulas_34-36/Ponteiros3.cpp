#include <iostream>

using namespace std;

void somarValores(int *ponteiro);

// AULA 36
int main(int argc, char *argv[]) {

    /*
        Os ponteiros podem ser utilizados para alterar
        o valor das variáveis FORA do escopo da
        função aonde ela foi criada.

        Para explicar como isso funciona é necessário
        voltar a dois pontos. Variáveis locais e referências.

        Quando nós criamos uma variável dentro de um
        método ela é local, ela será excluída após
        aquele método terminar de executar.

        Os parâmetros que nós enviamos são, na verdade,
        uma referência o valor, é como se nós criassemos
        uma outra variável com o mesmo valor da que foi
        enviada como argumento.

        Quando utilizamos ponteiros no lugar dos parâmetros,
        nós não criamos uma referência, mas sim manipulamos
        a exata mesma variável que foi enviada.
    */

    int var1 = 0;

    cout << var1 << endl;   // Imprime 0

    somarValores(&var1);    // Estou passando o endereço

    cout << var1 << endl;   // Imprime 500

    return 0;
}

// A função deve receber um endereço de memória
// que é referênciado por &
void somarValores(int *ponteiro) {

    *ponteiro += (100 + 200 + 300);

}