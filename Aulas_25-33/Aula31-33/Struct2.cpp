#include <iostream>

using namespace std;

struct variaveis1 {

    int valor1;
    bool valor2;
    string valor3;

    // MÉTODO CONSTRUTOR
    variaveis1(int valor1, bool valor2, string valor3) {

        this->valor1 = valor1;
        this->valor2 = valor2;
        this->valor3 = valor3;

    }

    // MÉTODO DE COMPORTAMENTO
    void ligado() {

        this->valor2 = true;

    }

};

// AULA 32
int main(int argc, char *argv[]) {

    /*
        Foi explicado no último arquivo que
        as Structs do C++ foram alteradas e agora
        se parecem com classes.

        Isso ocorre pois, originalmente, na linguagem C,
        as Structs não podiam armazenar comportamentos,
        ou seja, métodos.
    */

    // DECLARANDO UMA VARIÁVEL DO TIPO DA STRUCT
    variaveis1 tipo1(1, false, "Nicky");

    /*
        Por nós termos criado um método construtor
        para o struct, agora os valores base são
        enviados através da instanciação da variável struct.
    */

    // ATRIBUINDO VALORES AOS ELEMENTOS DA STRUCT
    //tipo1.valor1 = 1;
    //tipo1.valor2 = false;
    //tipo1.valor3 = "Nicky";

    // CHAMANDO O MÉTODO DE LIGAR:
    tipo1.ligado();

    cout << tipo1.valor2 << endl;   // imprime 1 (true)


    return 0;
}