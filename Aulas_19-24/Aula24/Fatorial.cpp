#include <iostream>

using namespace std;

void fatorialSemRecursividade(int fat);
int fatorialRecursivo(int fat, int resultado);
int fatorial(int n);

int main(int argc, char *argv[]) {

    /*
        O fatorial é uma conta que consiste em
        multiplicar um número pelos seus antecessores,
        até chegar ao 1.

        Por exemplo 5! (fatorial de cinco):
        1 * 2 * 3 * 4 * 5 = 120;

    */

    int resultado = 1;

    fatorialSemRecursividade(5);
    cout << fatorialRecursivo(5, resultado) << endl;
    cout << fatorial(5) << endl;

    return 0;
}

// FATORIAL SEM RECURSIVIDADE
void fatorialSemRecursividade(int fat) {

    int resultado = 1;

    while(fat != 1) {
        resultado *= fat--;
        cout << resultado << endl;
    }
}

// MINHA TENTATIVA FATORIAL RECURSIVO
int fatorialRecursivo(int fat, int resultado) {

    // NÃO CONSEGUI FAZER.
    
    /*
        Por que minha tentativa deu errado:

        Estou fazendo a conta "na ida" e "na volta" ao mesmo tempo.

        O computador entende: "Pegue o valor de resultado e multiplique
        pelo que a função me devolver". Só que a função repete isso
        mais vezes que o necessário.
    */
    // if(fat == 1) { return resultado; }
    // resultado *= fatorialRecursivo(--fat, resultado); 

    // return fatorialRecursivo(--fat) * fatorialRecursivo(fat);

    // CORREÇÃO DA IA
    if (fat == 1) {
        return resultado;
    }
    return fatorialRecursivo(fat - 1, resultado * fat);
}

// CORREÇÃO
int fatorial(int n) {

    // Quando n = 0
    if(n == 0) {
        return 1;   // Retorna 1
    }
    return n * fatorial(n - 1);

    /*
        LÓGICA:

        5 * fatorial(4);
            4 * fatorial(3);
                3 * fatorial(2);
                    2 * fatorial(1);
                        1 * fatorial(0);
                            fatorial(0) retorna 1;
                        retorna 1 * 1;
                    retorna 2 * 1;
                retorna 3 * 2;
            retorna 4 * 6;
        retorna 5 * 24;
        
        imprime 120;
                        
    */

}