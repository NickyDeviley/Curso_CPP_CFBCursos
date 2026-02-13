#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {

    /*
        Não confunda vetor com vector

        vetor é uma coleção de dados do mesmo tipo.

        O vector é uma evolução dessa estrutura de dados,
        uma maneira mais atualizada e com comandos já
        prontos para facilitar a manipulação da coleção de dados.

    */

    // Criando um vector do tipo int
    // não é necessário declarar um tamanho
    // Ele é dinâmico, cresce e diminuí a medida que nós
    // adicionamos ou tiramos variáveis.
    vector<int> num;
    int tam, i;

    num.push_back(10);  // Adicionando um valor na última posição do vector
    num.push_back(20);
    num.push_back(30);

    /*
        AVISO:
        O vector não pode ter um valor atribuído a um
        indice ainda não declarado da mesma forma que nós fazemos com vetores,
        ou seja, caso nós não tenhamos declarado um tamanho inicial
        não podemos usar colchetes para declarar um valor, somente depois
        de declarar o índice desejado, por exemplo:
    */
   num[1] = 50; // Só funciona pois o índice 1 já foi declarado

    tam = num.size();   // O método size retorna o tamanho do vector

    cout << "TAMANHO DO VECTOR: " << tam << endl;   // Imprime 3

    for (i = 0; i < tam; i++) {
        cout << num[i] << endl;
    }

    // Existe o método swap:

    vector<int> num2;
    num2.push_back(40);
    num2.push_back(50);
    num2.push_back(60);

    num.swap(num2); // Aqui ele está invertendo os valores do num1
                    // para o num2, mantendo os mesmos índices

    // Nós podemos acessar o primeiro e último valor do vector através dos comandos:

    cout << num2.front() << endl;   // Imprime 40
    cout << num2.back() << endl;    // Imprime 60

    // Para indicar um elemento que não seja o primeiro ou o último:

    cout << num2.at(2) << endl; // Basta enviar o índice como parâmetro

    // Para inserir um elemento em uma posição que não seja a primeira ou a última:
    // Podemos usar um iterator ou:

    num2.insert(num2.begin()+1, 888); // Aqui nós passamos o índice e o valor que será adicionado

    // Para remover um elemento:

    num2.erase(num2.begin()+1);

    /*
        É necessário utilizar um iterator, mas para
        evitar isso, nós usamos o método begin que
        retorna um iterator.
    */

    while(!num.empty()) {
        num.pop_back();             // Remove o último elemento da lista
    }

    cout << num.size() << endl;     // Imprime 0

    num2.clear();                   // Remove todos os elementos do vector

    return 0;
}