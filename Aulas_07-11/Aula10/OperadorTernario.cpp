#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {

    // Operador Ternário é uma maneira de simplificar
    // o operador IF.

    // (expressão) ? valor1 : valor2;
    // Valor1 = expressão true
    // Valor2 = expressão false

    int dez = 10;
    int a = 0;

    // Operador ternário
    a = (dez == 10) ? 50 : 100; 
    // (dez == 10) ? a = 50 : a = 100;

    cout << a << endl;  // Imprime 50

    return 0;
}