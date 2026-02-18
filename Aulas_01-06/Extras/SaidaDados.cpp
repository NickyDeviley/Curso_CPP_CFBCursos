#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {

    int quatro = 4;

    //  Podemos imprimir dados no prompt através dos comandos:
    cout << "Olá, mundo!" << endl;
    printf("Olá, mundo!");

    // Ambos os comandos funcionam de maneira parecida, mas ainda assim
    // possuem suas diferenças, para concatenar valores:

    cout << "O valor é: " << quatro << endl;
    printf("O valor é: %d", quatro);

    /*
    
        Ambos estão imprimindo exatamente o mesmo texto, porém
        o printf imprime o texto formatado em uma string, o
        cout concatena em tempo de execução.
    
    */

    return 0;
}