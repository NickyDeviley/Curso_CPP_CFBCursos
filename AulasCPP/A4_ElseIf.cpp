#include <iostream>

using namespace std;

int main() {

    /*
        O if | else é uma estrutura usada para executar um bloco de comando
        somente quando uma condição é satisfeita.
        
        Sintaxe:

        if (condição) {
            código;
        }
    */

    // Variáveis:
    int dez = 10;
    int vinte = 20;

    // Exemplo:
    if (vinte > dez) {
        cout << "vinte é maior que dez" << endl;
    }

    // É importante ressaltar sobre os operadores utilizados para
    // verificar a condição, que sempre deve retornar um valor booleano

    /*
    
        > (Maior que)
        < (Menor que)
        >= (Maior ou igual que)
        <= (Menor ou igual que)
        == (igual a)
        != (Diferente de)

        Exemplos:
    */

    bool val1 = dez < vinte;    // Verdadeiro   (Dez É menor que vinte)
    bool val2 = dez > vinte;    // Falso        (Dez NÃO é maior que vinte)
    bool val3 = dez <= vinte;   // Verdadeiro   (Dez É menor OU igual a vinte)
    bool val4 = dez >= vinte;   // Falso        (Dez NÃO é maior OU igual a vinte)
    bool val5 = dez == vinte;   // Falso        (Dez NÃO é igual a vinte)
    bool val6 = dez != vinte;   // Verdadeiro   (Dez é diferente de vinte)

    // No IF nós podemos usar valores booleanos declarados localmente ou globalmente
    if (val1) {
        cout << "Dez É menor que vinte" << endl;
    }
    // Também podemos usar o elseif
    // O elseif precisa estar conectado a um IF
    // ele só é ativado caso o if seja falso
    else if (val2) {
        cout << "Dez É maior que vinte" << endl;
    }
    // Também existe o ELSE
    // O else só é ativado caso o if e o elseif
    // sejam falsos, então ele executa o else.
    else {
        cout << "Nenhum dos dois foi verdadeiro" << endl;
    }

    /*
        Também é necessário ressaltar sobre o IF aninhado.
        representa um if dentro do outro
    */

    if (10 < 20) {
        cout << "10 é menor que 20" << endl;
        if (2 < 3) {
            cout << "2 é menor que 3" << endl;
            if (3 < 4) { cout << "Todas as condições foram verdadeiras!" << endl; }
        }
        else { cout << "2 é maior que 3" << endl; }
    }
    else { cout << "10 é maior que 20" << endl; }

    /*
        Além de tudo que já foi citado, temos
        os operadores && e || que representam
        respectivamente "e" e "ou"
    
        Esses operadores comparam duas ou mais expressões booleanas
        o operador && serve para retornar um valor verdadeiro somente
        se todas as expressões booleanas forem verdadeiras.

        (1 < 2 && 2 < 3) = Verdadeiro
        (1 < 2 && 2 > 3) = Falso
        (1 > 2 && 2 > 3) = Falso

        O operador || serve para retornar um valor verdadeiro quando
        pelo menos uma das operações for verdadeira

        (1 < 2 || 2 < 3) = Verdadeiro
        (1 < 2 || 2 > 3) = Verdadeiro 
        (1 > 2 || 2 > 3) = Falso
    */

    if (1 < 2 && 2 < 3) {  
        // Código é executado
    }
    if (1 < 2 && 2 > 3) {
        // Código não é executado
    }
    if (1 > 2 && 2 > 3) {
        // Código não é executado
    }

    if (1 < 2 || 2 < 3) {
        // Código é executado
    }
    if (1 < 2 || 2 > 3) {
        // Código é executado
    }
    if (1 > 2 || 2 > 3) {
        // Código não é executado
    }

    return 0;
}