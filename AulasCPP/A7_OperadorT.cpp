#include <iostream>

using namespace std;

int main() {

    int a = 0;
    int b = 2;

    /*
        O operador ternário é um IF simplificado

        sintaxe:

        (Condição) ? resultado se verdadeiro : resultado se falso;
    */

    string res = (a < b) ? "aprovado" : "reprovado";
    
    return 0;
}