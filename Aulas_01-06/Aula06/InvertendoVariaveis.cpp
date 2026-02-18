#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {

    int valorInteiro = 10;

    cout << valorInteiro << endl; // Imprime 10

    /*
        Apresentando 3 maneiras diferentes de inverter o valor de
        uma variável.
    */
    valorInteiro = valorInteiro * -1;
    valorInteiro *= -1;
    valorInteiro = -valorInteiro;

    return 0;
}