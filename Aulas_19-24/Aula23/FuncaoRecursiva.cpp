#include <iostream>

using namespace std;

void recursivo(int a);

int main(int argc, char *argv) {

    /*
        Uma função recursiva é, resumidamente,
        um método que chama a si mesmo.

        Funciona de forma muito semelhante a um LOOP
        ou o GOTO, mas dentro de um método, exemplo:

        recursivo(int a) {
            cout << a;
            recursivo(++a);
        }

        Neste exemplo nós criamos um loop infinito,
        para consertar isso precisamos criar uma
        condição de parada.

        recursivo(int a) {
            cout << a; 
            if(a != 10) {
                recursivo(++a);
            }
        }
    */

    recursivo(0);

    return 0;
}

// Função recursiva
void recursivo(int a) {
    cout << a;
    if(a != 10) {
        recursivo(++a);
    }
} 