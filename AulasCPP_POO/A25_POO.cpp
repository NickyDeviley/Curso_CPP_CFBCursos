#include <iostream>
#include "Classes.h"

using namespace std;

int main() {

    /*
        Heranças.

        Na Programação Orientada a Objeto (POO)
        existe o conceito de Herança.

        A herança acontece quando uma classe HERDA
        todas as propriedades e métodos public e protected
        da classe pai. Assim como ocorre no arquivo "Classes.h"

        Também existe herança multipla, que acontece quando
        pode haver um a cadeia de heranças entre classes.
    */

    // Criando um objeto da classe pai:
    ClasseMae *pai =  new ClasseMae();

    // Criando um objeto da classe filho:
    ClasseFilha *filho = new ClasseFilha();

    return 0;
}