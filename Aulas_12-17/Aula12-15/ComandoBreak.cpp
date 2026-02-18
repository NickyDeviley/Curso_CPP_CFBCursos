#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {

    /*
        O comando Break serve para parar a execução de um laço de
        repetição.
    */

    int a = 0;

    while(a < 10) {

        if (a = 5) {

            cout << "Chegou em 5!" << endl;
            break;
        }
        a++;
    }

    return 0;
}