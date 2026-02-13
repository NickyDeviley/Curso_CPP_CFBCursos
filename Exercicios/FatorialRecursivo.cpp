#include <iostream>
#include <string>

using namespace std;

int fatorial(int valor);

int main() {

    string resultado = to_string(fatorial(10));

    cout << resultado << endl;

    return 0;
}

int fatorial(int valor) {

    if (valor == 0) {
        return 1;
    }
    return valor*fatorial(valor-1);

}