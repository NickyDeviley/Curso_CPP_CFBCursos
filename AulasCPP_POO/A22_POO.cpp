#include <iostream>

using namespace std;

// Criando a classe avião
class Aviao {

    // Características públicas dos objetos
    public:
        int valor1;
        double valor2;
        string nome;
        void ini(int tp);

    // Características privadas dos objetos
    private:


};

// Escrevendo o corpo da função declarada dentro da classe Aviao
void Aviao::ini(int tp) {

    if (tp == 1) {
        this->valor1 = 800;
    }
    else if (tp == 2) {
        this->valor1 = 300;
    }
    else if (tp == 3) {
        this->valor1 = 180;
    }

}

int main(int argc, char *argv[]) {

    /*
        Programação Orientada a Objeto

        Criar uma classe;
        instanciar essa classe;
        manipular essa instância;
        deletar essa intância;

        Existem diferenças que precisam ser citadas. Ao contrário do Java no C++ nós 
        podemos instanciar um objeto de duas maneiras.

        A primeira delas é apenas usando o tipo e o nome do objeto:

        Aviao av1;

        Quando nós declaramos um objeto desta maneira estamos declarando ele dentro da memória stack,
        a memória Stack é rápida e é limpa automaticamente, este objeto continua na memória enquanto
        o método ou bloco de comando continuar ativo, após isso ela é deletada.

        A segunda maneira é declarando um ponteiro
        na memória stack que aponta para o objeto na memória heap.

        Aviao *av2 = new Aviao();'

        Quando nós declaramos um objeto desta maneira estamos dizendo "Crie o objeto na memória heap".
        Isso significa que, o objeto existirá até que o programa seja encerrado ou que o programador delete
        esse objeto manualmente. Esta maneira é exatamente igual como funciona em JAVA.
    */

    // Instanciando um objeto na memória stack
    Aviao av1;

    // Instanciando um objeto na memória heap
    Aviao *av2 = new Aviao();

    // Imprimindo os valores:
    cout << av1.valor1 << endl;
    cout << av2->valor1 << endl;

    // Modificando os valores
    // públicos do objeto
    av1.valor1 = 10;
    av1.valor2 = 20;
    av1.nome = "Nicholas";



    return 0;
}