#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {

    /*
        Os operadores lógicos se referem a maneiras de
        verificar várias condições booleanas.
    */

    /*
        AND - &&

        Chamado de "E", este operador verifica se duas condições são verdadeiras.
        O código do exemplo só pode rodar CASO ambas as condições sejam verdadeiras.
    */
    if (10 < 11 && 11 < 12) {

        cout << "Dez é menor que onze que é menor que doze" << endl;

    }

    /*
        OR - ||

        Chamado de "ou", este operador verifica se uma das duas condições é verdadeira.
        Caso uma delas seja verdadeira o código pode rodar.
    */
    if (10 < 11 || 11 > 12) {

        cout << "Dez é menor que onze OU onze é maior que doze" << endl;

    }

    /*
        NOT - !=

        Chamado de "não" ou "diferente", este operador verifica se o valor é o oposto
        da condição, por exemplo:
    */
    bool valor = true;

    
    if (!valor) {   
        // Nesse exemplo esse bloco IF nunca será execudado,
        // pois ele somente será executado quando a variável
        // for FALSE.

        cout << "O valor é falso!" << endl;

    }
    else {

        cout << "O valor é verdadeiro!" << endl;

    }

    return 0;
}