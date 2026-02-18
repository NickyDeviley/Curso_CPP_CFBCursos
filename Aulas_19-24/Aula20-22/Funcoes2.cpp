#include <iostream>

using namespace std;

// PROTOTIPAÇÃO
int soma();
int soma(int num1, int num2);
int soma(int num1, int num2, int num3);

int main(int argc, char *argv[]) {

    /*
        O conceito de sobrecarga de funções é simples,
        são funções que compartilham o mesmo nome, mas possuem
        argumentos/parâmetros diferentes.
    */
    int resultado;

    resultado = soma();             // Retorna 10 + 20
    resultado = soma(20, 40);       // Retorna 20 + 40
    resultado = soma(50, 60, 70);   // Retorna 50 + 60 + 70

    return 0;
}

// três funções que compartilham o mesmo nome,
// mas todas elas 
int soma() { return 10 + 20; }
int soma(int num1, int num2) { return num1 + num2; }
int soma(int num1, int num2, int num3) { return num1 + num2 + num3; }