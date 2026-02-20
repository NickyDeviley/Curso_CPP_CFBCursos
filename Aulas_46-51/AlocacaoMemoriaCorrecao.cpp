#include <iostream>
#include <locale.h>
#include <string>
#include <memory>

using namespace std;

int main(int argc, char *argv[]) {

    // Alterando o idioma para português
    setlocale(LC_ALL, "portuguese");

    /*
        Aparentemente, na última aula, o professor
        confundiu um pouco C e C++ e utilizou métodos
        ultrapassados. Este código é uma "correção" para
        um código mais moderno e seguro.
    */

    shared_ptr<string> vnome = make_shared<string>();

    cout << "digite seu nome completo!" << endl;

    getline(cin, *vnome);

    cout << *vnome << endl;

    return 0;
}