#include <iostream>
#include "POO4.h"

using namespace std;

// AULA 44
int main(int argc, char *argv[]) {

    /*
        A herança é uma ferramenta muito útil na POO.
        Ela nos permite criar classes relacionadas e que
        "herdam" características e comportamentos de outra
        classe.

        Eu tenho uma classe mãe. E eu crio uma classe filha
        que herda da classe mãe, isso signfica que tudo o que
        foi public ou protected dentro da classe mãe pode
        ser acessado e utilizado pela classe filha.
    */

    // DECLARANDO UM OBJETO
    Moto* moto1 = new Moto();

    /*
        A classe moto herda as características da classe
        Veículo, isso significa que, mesmo sem ter a
        características "vel" declarada dentro dela,
        ela pode ser acessada.
    */

    // Acessando uma variável herdada.
    cout << moto1->vel << endl;

    return 0;
}