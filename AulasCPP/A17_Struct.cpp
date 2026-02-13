#include <iostream>

using namespace std;

// Declarando o struct
struct bomdia {
    
    int valor;          // Primeiro valor
    string nome;        // Segundo valor
    int valor2;         // Terceiro valor

    // Construtor padrão
    bomdia() = default;

    // Construtor com argumentos
    bomdia (int valor, string nome, int valor2) {
        this->valor = valor;
        this->nome = nome;
        this->valor2 = valor2;
    }

    // Métodos:
    void mostrar() {
        cout << this->valor << endl;
        cout << this->nome << endl;
        cout << this->valor2 << endl;
    }

};

int main(int argc, char *argv[]) {

    /*
        As Structs são estruturas que foram criadas
        na linguagem C.

        O C++ Herdou e aprimorou esta estrutura,
        aqui ela funciona de forma semelhante a classes e instancias.
        
        Como representado no código, você declara o struct com o nome
        desejado, você pode adicionar características (variávels) a ele
        e comportamentos (métodos), também pode criar construtores,
        destrutores, pode encapsular.

        Não é obrigatório se utilizar os Structs, mas
        existem padrões mundialmente adotados.
        Struct é utilizado para organizar valores, enquanto
        as classes são utilizadas para instanciar e declarar objetos
        complexos.
    */

    bomdia pessoa1;                     // instanciando o objeto Struct através do construtor padrão
    bomdia pessoa2(0, "Tenis", 1);           // instanciando o objeto Struct através do construtor com parâmetros

    pessoa1.valor = 10;                 // Atribuindo valor ao primeiro campo
    pessoa1.nome = "Nicholas";          // Atribuindo valor ao segundo campo
    pessoa1.valor2 = 30;                // Atribuindo valor ao terceiro campo

    pessoa1.mostrar();
    pessoa2.mostrar();

    //cout << pessoa1.valor << endl;      // Imprimindo o primeiro valor

    // Criando um array do tipo do struct
    bomdia *valores = new bomdia[2];
    bomdia car1, car2;

    valores[0] = car1;
    valores[1] = car2;

    return 0;
}