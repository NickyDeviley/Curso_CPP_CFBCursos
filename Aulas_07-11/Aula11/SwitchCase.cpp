#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {

    /*
        O switch funciona de forma semelhante ao IF,
        porém ele é baseado em um único valor.

        Ele funciona através de Cases, aonde cada um
        representa uma constante que será comparada a
        um valor.
    */

    int a = 5;

    switch(a) {

        /*
            O SWITCH recebe a variável A e
            compara com as constantes até que
            alguma seja igual.

            Caso ele não encontre uma igualdade, o
            bloco DEFAULT é executado.
        */

        case 1:
            cout << "Valor é igual a: 1" << endl;
            break;
        case 2:
            cout << "Valor é igual a: 2" << endl;
            break;
        case 3:
            cout << "Valor é igual a: 3" << endl;
            break;
        case 4:
            cout << "Valor é igual a: 4" << endl;
            break;
        case 5:
            cout << "Valor é igual a: 5" << endl;
            break;
        default:
            break;
    }


    return 0;
}