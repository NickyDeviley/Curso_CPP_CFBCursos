#include <iostream>
#include "Veiculo.h"

using namespace std;

int main() {

    /*
        Métodos get & set

        Os métodos get e set servem
        para acessar e manipular dados 
        privados dentro de uma classe.
    */

    Veiculo *carro = new Veiculo(1);

    carro->getLigado(); // Os métodos get retornam alguma informação

    carro->setLigado(true); // Os métodos set modificam alguma informação

    return 0;
}