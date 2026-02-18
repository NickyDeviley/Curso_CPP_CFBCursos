#include <iostream>
#include "POO5.h"

using namespace std;

// AULA 45
int main(int argc, char *argv[]) {

    /*
        A herança multipla é um conceito muito simples,
        a herança normal acontece quando nós criamos
        uma classe que herda características e comportamentos
        de outra.

        A herança multipla ocorre quando uma classe herda
        várias classes.

        Perceba ao longo do código, obj1 só pode
        acessar o método da classe Base1. E obj2
        só pode acessar o método da classe base2.

        Porém o obj3 pode acessar ambos os métodos
        pois a classe da qual ele foi instanciado
        herda a Base1 e Base2.
    */

    // DECLARANDO OBJETO DAS SUPER-CLASSES
    Base1* obj1 = new Base1();
    Base2* obj2 = new Base2();

    // DECLARANDO OBJETO DA SUB-CLASSE
    filha* obj3 = new filha();

    // Cada objeto acessando seu método correspondente
    obj1->impBase1();
    obj2->impBase2();

    // O objeto acessando os dois métodos.
    obj3->impBase1();
    obj3->impBase2();


    return 0;
}