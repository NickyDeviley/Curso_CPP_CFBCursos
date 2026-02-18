#include <iostream>

using namespace std;

/*
    Aqui nós não declaramos constantes,
    estamos, na verdade, DEFININDO que a palavra "pi"
    e a palavra "nome" correspondem ao código a seguir.
    
    Ao chamar "pi" no código, o compilador entendo que estamos
    nos referindo ao valor "3.1415f".

    Ao chamar "nome" no código, o compilador executa o comando
    para imprimir a palavra no prompt.
*/
#define pi 3.1415f;
#define nome cout << "Nicky" << endl;


/*
    Aqui nós declaramos uma constante,
    Este valor é atribuído e, ao contrário de
    outras variáveis, ele não pode ser alterado
    de forma alguma. 
*/
const int valorConstante = 10;

int main(int argc, char *argv[]) {

    cout << pi; // Imprime "3.1415"

    cout << "\n\n";

    nome;       // Imprime "Nicky"

    return 0;
}